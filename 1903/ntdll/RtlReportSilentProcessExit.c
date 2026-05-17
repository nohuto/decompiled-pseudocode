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

__int64 __fastcall RtlReportSilentProcessExit(__int64 a1, int a2)
{
  int v5; // ebx
  int UniqueProcess; // edi
  int UniqueThread; // esi
  int v8; // eax
  int v9; // ebx
  unsigned int NtGlobalFlag; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[176]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v17[352]; // [rsp+5D0h] [rbp+4D0h] BYREF

  memset(v17, 0, 0x578uLL);
  memset(v16, 0, 0x578uLL);
  v15 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( a1 == -1 && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0LL;
  v5 = ZwDuplicateObject(-1LL, a1, -1LL, &v15, 4096, 0);
  if ( v5 < 0 )
    goto LABEL_13;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  v8 = sub_18006B7F4(v15);
  v9 = v8;
  if ( !UniqueProcess || !UniqueThread || !v8 )
    return 3221225485LL;
  if ( UniqueProcess == v8 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = sub_18006B63C(v15);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    v17[0] = 91751760;
    v17[10] = 805306368;
    v17[12] = UniqueThread;
    v17[13] = UniqueProcess;
    v17[14] = v9;
    v17[15] = a2;
    memset((char *)v16 + 4, 0, 0x574uLL);
    LODWORD(v16[0]) = 91751760;
    v11 = sub_1800DC32C(v17, v16);
    if ( v11 >= 0 )
    {
      if ( v11 == 258 )
      {
        v5 = -1073741248;
      }
      else
      {
        v13 = v16[6];
        while ( 1 )
        {
          LOBYTE(v12) = 1;
          v14 = ZwWaitForSingleObject(v13, v12, 0LL);
          v5 = v14;
          if ( v14 < 0 || v14 == 258 )
            break;
          if ( v14 != 192 && v14 != 257 )
          {
            v5 = 0;
            break;
          }
        }
        if ( v13 )
          ZwClose(v13);
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
  if ( v15 )
    ZwClose(v15);
  return (unsigned int)v5;
}
