/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x14086BB40
 * Callers:
 *     <none>
 * Callees:
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14015A18C (PoFxActivateDevice.c)
 *     PopFxReleaseDevice @ 0x1402D94F4 (PopFxReleaseDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402DE200 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
