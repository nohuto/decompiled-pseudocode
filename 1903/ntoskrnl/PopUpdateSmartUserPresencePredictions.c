/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x1408B66AC
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x14071E1F0 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1408A5600 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14015DB58 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140303EBC (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_140443B0D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_140442F88 != v2 )
  {
    qword_140442F88 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140442FB1 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
