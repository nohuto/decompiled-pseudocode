/*
 * XREFs of KdpReportCommandStringStateChange @ 0x1409177D8
 * Callers:
 *     KdpCommandString @ 0x140919164 (KdpCommandString.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KdpSetCommonState @ 0x14028C768 (KdpSetCommonState.c)
 *     KdpSendWaitContinue @ 0x140918100 (KdpSendWaitContinue.c)
 *     KdpSetContextState @ 0x14091968C (KdpSetContextState.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReportCommandStringStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v9; // [rsp+38h] [rbp-C8h] BYREF
  char *v10; // [rsp+40h] [rbp-C0h]
  __int16 v11; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v12; // [rsp+50h] [rbp-B0h]
  _BYTE v13[240]; // [rsp+60h] [rbp-A0h] BYREF

  do
  {
    KdpSetCommonState(12338, a3, (__int64)v13);
    KdpSetContextState(v13, a3);
    memset(&v13[32], 0, 0x40uLL);
    v10 = (char *)&KdpMessageBuffer;
    KdpCopyMemoryChunks(*(PVOID *)(a1 + 8), 4, (__int64)&v8);
    v9 = v8 + 1;
    v10[(unsigned __int16)(v8 + 1) - 1] = 0;
    KdpCopyMemoryChunks(*(PVOID *)(a2 + 8), 4, (__int64)&v8);
    v9 += v8 + 1;
    v6 = v9;
    v10[v9 - 1] = 0;
    v11 = 240;
    v12 = v13;
    result = KdpSendWaitContinue(v6, &v11, &v9, a3);
  }
  while ( (_DWORD)result == 2 );
  return result;
}
