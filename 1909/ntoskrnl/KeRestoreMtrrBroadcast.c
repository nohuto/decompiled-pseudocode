/*
 * XREFs of KeRestoreMtrrBroadcast @ 0x14059FE78
 * Callers:
 *     PnprWakeProcessors @ 0x1405AABBC (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1405AB130 (KiInitializeDynamicProcessorDpc.c)
 *     KiInitializeMTRR @ 0x1409FE4A4 (KiInitializeMTRR.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14017F990 (KeIpiGenericCall.c)
 */

ULONG_PTR KeRestoreMtrrBroadcast()
{
  ULONG_PTR result; // rax
  ULONG_PTR Context; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+28h] [rbp-20h]
  void *v3; // [rsp+30h] [rbp-18h]

  result = 0LL;
  Context = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  if ( byte_140446D90 )
  {
    LODWORD(Context) = 0;
    HIDWORD(Context) = KeQueryActiveProcessorCountEx(0xFFFFu) - 1;
    v3 = &KiTargetPhase;
    LODWORD(v2) = 0;
    return KeIpiGenericCall(KiLoadMTRRTarget, (ULONG_PTR)&Context);
  }
  return result;
}
