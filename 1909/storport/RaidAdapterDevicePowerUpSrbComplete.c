/*
 * XREFs of RaidAdapterDevicePowerUpSrbComplete @ 0x1C0012330
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0015F78 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 */

__int64 __fastcall RaidAdapterDevicePowerUpSrbComplete(__int64 a1)
{
  __int64 v1; // rdx
  IRP *v2; // rcx

  v1 = *(_QWORD *)(a1 + 216);
  v2 = *(IRP **)(a1 + 160);
  *(_BYTE *)(v1 + 4640) = 0;
  return RaidAdapterPowerUpDeviceCompletionLastStep(v2);
}
