/*
 * XREFs of VslFlushSecureAddressSpace @ 0x14028F398
 * Callers:
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x14028DFC4 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14028E14C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS VslFlushSecureAddressSpace()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255;
  v1[1] = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
  return VslpEnterIumSecureMode(2, 240LL, 0LL, (__int64)v1);
}
