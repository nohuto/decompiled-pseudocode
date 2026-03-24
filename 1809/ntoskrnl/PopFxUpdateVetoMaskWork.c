/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x14086A8E0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxIdleDevice @ 0x140159F28 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14015A08C (PoFxActivateDevice.c)
 *     PopFxReleaseDevice @ 0x1402D9304 (PopFxReleaseDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402DE010 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxUpdateVetoMaskWork(unsigned int *P)
{
  __int64 v1; // rdi
  __int64 v3; // rbx

  v1 = *(_QWORD *)P;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)P + 48LL) + 32LL);
  PoFxActivateDevice(v3);
  PopPepUpdateDripsDeviceVetoMask(v1, P[2]);
  PoFxIdleDevice(v3);
  PopFxReleaseDevice(v1);
  ExFreePoolWithTag(P, 0x4D584650u);
}
