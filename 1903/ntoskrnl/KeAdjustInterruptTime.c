/*
 * XREFs of KeAdjustInterruptTime @ 0x140169EC4
 * Callers:
 *     KiSetSystemTimeDpc @ 0x1401791F0 (KiSetSystemTimeDpc.c)
 *     xHalTscSynchronization @ 0x140284890 (xHalTscSynchronization.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14017F2A0 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall KeAdjustInterruptTime(__int64 a1, char a2)
{
  ULONG_PTR Context[4]; // [rsp+20h] [rbp-38h] BYREF

  memset(Context, 0, sizeof(Context));
  if ( a1 < 0 )
    return 0;
  HIDWORD(Context[0]) = KeGetCurrentPrcb()->Number;
  Context[3] = KeQueryActiveProcessorCountEx(0xFFFFu) | 0x100000000LL;
  Context[1] = a1;
  LOBYTE(Context[0]) = a2;
  KeIpiGenericCall(KiCalibrateTimeAdjustment, (ULONG_PTR)Context);
  return 1;
}
