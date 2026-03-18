/*
 * XREFs of PopFxUpdateVetoMaskWork @ 0x1408A6BA0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxIdleDevice @ 0x1401457DC (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x140145938 (PoFxActivateDevice.c)
 *     PopFxReleaseDevice @ 0x1402F4B74 (PopFxReleaseDevice.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402FAE98 (PopPepUpdateDripsDeviceVetoMask.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
