/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x1408777EC
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x1406DB5F0 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x140868FF0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140142450 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1402E4B2C (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_14041814D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_140417648 != v2 )
  {
    qword_140417648 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140417671 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
