/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x140574264
 * Callers:
 *     PnprWakeProcessors @ 0x14057BD5C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x14057C260 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x1409C66F4 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140175A30 (KeIpiGenericCall.c)
 */

void KeRestoreMtrrBroadcast()
{
  _DWORD Context[4]; // [rsp+20h] [rbp-28h] BYREF
  void *v1; // [rsp+30h] [rbp-18h]

  if ( byte_14041C4D0 )
  {
    Context[0] = 0;
    Context[1] = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v1 = &KiTargetPhase;
    Context[2] = 0;
    KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)Context);
  }
}
