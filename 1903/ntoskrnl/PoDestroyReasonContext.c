/*
 * XREFs of PoDestroyReasonContext @ 0x1400ECD28
 * Callers:
 *     NtCancelTimer @ 0x140007A80 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x1400089F0 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x1400B2C00 (ExpDeleteTimer.c)
 *     PopPowerRequestCleanUp @ 0x1400EC9AC (PopPowerRequestCleanUp.c)
 *     NtSetTimer @ 0x140157D40 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1402F7690 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x14069D770 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x14069DD50 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x140739BD0 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x14075AA90 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x1408A3930 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140A20014 (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
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
