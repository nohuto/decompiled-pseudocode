/*
 * XREFs of PoDestroyReasonContext @ 0x140003730
 * Callers:
 *     PopPowerRequestCleanUp @ 0x14000333C (PopPowerRequestCleanUp.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x14001D530 (NtSetTimerEx.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x140127A20 (ExpDeleteTimer.c)
 *     NtSetTimer @ 0x140140260 (NtSetTimer.c)
 *     PoRegisterSystemState @ 0x1402DBDB0 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1405882F0 (NtSetThreadExecutionState.c)
 *     PopPowerRequestCreateInfo @ 0x140589318 (PopPowerRequestCreateInfo.c)
 *     PoCreatePowerRequest @ 0x140702430 (PoCreatePowerRequest.c)
 *     PoCreateThermalRequest @ 0x140746B40 (PoCreateThermalRequest.c)
 *     PoDeleteThermalRequest @ 0x140868680 (PoDeleteThermalRequest.c)
 *     PopInitializeHighPerfPowerRequest @ 0x1409DDC6C (PopInitializeHighPerfPowerRequest.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PoDestroyReasonContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_DWORD *)P || (v2 = (void *)P[1]) != 0LL && (ObfDereferenceObjectWithTag(v2, 0x67446F50u), *(_DWORD *)P) )
  {
    v3 = (void *)P[3];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x78435250u);
  }
  ExFreePoolWithTag(P, 0x78435250u);
}
