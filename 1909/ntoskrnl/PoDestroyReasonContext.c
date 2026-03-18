/*
 * XREFs of PoDestroyReasonContext @ 0x1400D64DC
 * Callers:
 *     NtCancelTimer @ 0x140007B10 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x140008A80 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     PopPowerRequestCleanUp @ 0x1400D6160 (PopPowerRequestCleanUp.c)
 *     ExpDeleteTimer @ 0x1400E2CF0 (ExpDeleteTimer.c)
 *     NtSetTimer @ 0x1401583E0 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1402F7140 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1406B3A40 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x1406B3BE0 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x14073BE60 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x14075F320 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1408A3170 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A201F4 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx

  if ( !*(_DWORD *)P )
  {
    v2 = (void *)P[1];
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x67446F50u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
