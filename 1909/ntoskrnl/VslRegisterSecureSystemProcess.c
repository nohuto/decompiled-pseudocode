/*
 * XREFs of VslRegisterSecureSystemProcess @ 0x140290138
 * Callers:
 *     PspInitPhase1 @ 0x1409FEEE0 (PspInitPhase1.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS VslRegisterSecureSystemProcess()
{
  ULONG_PTR v0; // rbx
  NTSTATUS result; // eax
  _QWORD v2[14]; // [rsp+20h] [rbp-88h] BYREF

  v0 = PsSecureSystemProcess;
  memset(v2, 0, 0x68uLL);
  v2[1] = *(_QWORD *)(PsSecureSystemProcess + 744);
  v2[2] = PsSecureSystemProcess;
  result = VslpEnterIumSecureMode(2, 5LL, 0LL, (__int64)v2);
  if ( result >= 0 )
  {
    *(_QWORD *)(v0 + 728) = v2[3];
    *(_QWORD *)(v0 + 728) = v2[3] | 1LL;
  }
  return result;
}
