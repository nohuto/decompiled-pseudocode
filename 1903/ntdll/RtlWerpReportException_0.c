/*
 * XREFs of RtlWerpReportException_0 @ 0x1800DB7E4
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 *     RtlWerpReportException @ 0x1800DC320 (RtlWerpReportException.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlWerpReportException_0(
        ULONG ProcessId,
        HANDLE CrashReportSharedMem,
        ULONG Flags,
        PHANDLE CrashVerticalProcessHandle)
{
  const void *v4; // rsi
  __int64 v5; // rbx
  NTSTATUS result; // eax
  _QWORD ReceiveMessage[176]; // [rsp+20h] [rbp-E0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5A0h] [rbp+4A0h] BYREF
  unsigned int v11; // [rsp+B90h] [rbp+A90h]
  _QWORD *v12; // [rsp+B98h] [rbp+A98h]

  v4 = *(const void **)&Flags;
  v5 = (unsigned int)CrashVerticalProcessHandle;
  *v12 = 0LL;
  if ( (unsigned int)CrashVerticalProcessHandle > 5 )
    return -1073740757;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  SendMessageA[1].ClientId.UniqueProcess = (HANDLE)__PAIR64__(ProcessId, v11);
  SendMessageA[0].u1.Length = 91751760;
  SendMessageA[1].u1.Length = 0x20000000;
  SendMessageA[1].ClientId.UniqueThread = CrashReportSharedMem;
  if ( v4 && (_DWORD)v5 )
    memmove(&SendMessageA[1].MessageId, v4, 8 * v5);
  memset((char *)ReceiveMessage + 4, 0, 0x574uLL);
  LODWORD(ReceiveMessage[0]) = 91751760;
  result = sub_1800DC32C(SendMessageA, (PPORT_MESSAGE)ReceiveMessage);
  if ( result >= 0 )
  {
    if ( result == 258 )
    {
      return -1073741248;
    }
    else
    {
      *v12 = ReceiveMessage[6];
      return 0;
    }
  }
  return result;
}
