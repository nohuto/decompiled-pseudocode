/*
 * XREFs of RtlReportSilentProcessExit @ 0x18006B200
 * Callers:
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     sub_1800D576C @ 0x1800D576C (sub_1800D576C.c)
 * Callees:
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     sub_18006B7F4 @ 0x18006B7F4 (sub_18006B7F4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 */

NTSTATUS __cdecl RtlReportSilentProcessExit(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  int v5; // ebx
  unsigned int UniqueProcess; // edi
  unsigned int UniqueThread; // esi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  ULONG NtGlobalFlag; // eax
  int v11; // eax
  HANDLE v12; // rdi
  NTSTATUS v13; // eax
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+50h] [rbp-B0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5D0h] [rbp+4D0h] BYREF

  memset(SendMessageA, 0, sizeof(SendMessageA));
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  TargetHandle = 0LL;
  if ( !ProcessHandle )
    return -1073741811;
  if ( ProcessHandle == (HANDLE)-1LL && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0;
  v5 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x1000u,
         0,
         0);
  if ( v5 < 0 )
    goto LABEL_13;
  UniqueProcess = (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
  v8 = sub_18006B7F4(TargetHandle);
  v9 = v8;
  if ( !UniqueProcess || !UniqueThread || !v8 )
    return -1073741811;
  if ( UniqueProcess == v8 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = sub_18006B63C(TargetHandle);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    SendMessageA[0].u1.Length = 91751760;
    SendMessageA[1].u1.Length = 805306368;
    SendMessageA[1].ClientId.UniqueProcess = (HANDLE)__PAIR64__(UniqueProcess, UniqueThread);
    SendMessageA[1].ClientId.UniqueThread = (HANDLE)__PAIR64__(ExitStatus, v9);
    memset(&ReceiveMessage[0].u2, 0, 0x574uLL);
    ReceiveMessage[0].u1.Length = 91751760;
    v11 = sub_1800DC32C(SendMessageA, ReceiveMessage);
    if ( v11 >= 0 )
    {
      if ( v11 == 258 )
      {
        v5 = -1073741248;
      }
      else
      {
        v12 = ReceiveMessage[1].ClientId.UniqueProcess;
        while ( 1 )
        {
          v13 = ZwWaitForSingleObject(v12, 1u, 0LL);
          v5 = v13;
          if ( v13 < 0 || v13 == 258 )
            break;
          if ( v13 != 192 && v13 != 257 )
          {
            v5 = 0;
            break;
          }
        }
        if ( v12 )
          ZwClose(v12);
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_13:
  if ( TargetHandle )
    ZwClose(TargetHandle);
  return v5;
}
