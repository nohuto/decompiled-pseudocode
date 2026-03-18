/*
 * XREFs of KiInitializeDynamicProcessor @ 0x1405AB0E8
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400F9170 (KeGenericCallDpc.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x140757B74 (KiStartDpcThread.c)
 */

char __fastcall KiInitializeDynamicProcessor(__int64 a1)
{
  int started; // eax
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v4[1] = 0LL;
  v4[0] = a1;
  LOBYTE(started) = KeGenericCallDpc((__int64)KiInitializeDynamicProcessorDpc, (__int64)v4);
  if ( KeThreadDpcEnable )
  {
    started = KiStartDpcThread(a1);
    if ( started < 0 )
      KeBugCheckEx(0x33u, started, 0LL, 0LL, 0LL);
  }
  return started;
}
