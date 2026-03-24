/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x140573264
 * Callers:
 *     PnprWakeProcessors @ 0x14057AD5C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x14057B260 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x1409C56F4 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7920 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140175930 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  _DWORD Context[4]; // [rsp+20h] [rbp-28h] BYREF
  void *v1; // [rsp+30h] [rbp-18h]

  if ( byte_14041B430 )
  {
    Context[0] = 0;
    Context[1] = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v1 = &KiTargetPhase;
    Context[2] = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)Context);
  }
}
