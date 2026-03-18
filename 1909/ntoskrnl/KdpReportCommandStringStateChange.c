/*
 * XREFs of KdpReportCommandStringStateChange @ 0x140955130
 * Callers:
 *     KdpCommandString @ 0x140956BC4 (KdpCommandString.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KdpSetCommonState @ 0x1402A236C (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 *     KdpSetContextState @ 0x140957430 (KdpSetContextState.c)
 */

__int64 __fastcall KdpReportCommandStringStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  char *v10; // [rsp+40h] [rbp-C0h]
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v12; // [rsp+50h] [rbp-B0h]
  _BYTE v13[240]; // [rsp+60h] [rbp-A0h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  do
  {
    KdpSetCommonState(12338, a3, (__int64)v13);
    KdpSetContextState(v13, a3);
    memset(&v13[32], 0, 0x40uLL);
    v10 = (char *)&KdpMessageBuffer;
    KdpCopyMemoryChunks(*(PVOID *)(a1 + 8), 4, (__int64)&v8);
    LOWORD(v9) = v8 + 1;
    v10[(unsigned __int16)(v8 + 1) - 1] = 0;
    KdpCopyMemoryChunks(*(PVOID *)(a2 + 8), 4, (__int64)&v8);
    LOWORD(v9) = v8 + 1 + v9;
    v6 = (unsigned __int16)v9;
    v10[(unsigned __int16)v9 - 1] = 0;
    v12 = v13;
    LOWORD(v11) = 240;
    result = KdpSendWaitContinue(v6, &v11, &v9, a3);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
