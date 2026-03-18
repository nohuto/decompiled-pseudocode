/*
 * XREFs of PopFanUpdateCsState @ 0x1408B3270
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140730470 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408B31BC (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140442B65 )
    {
      if ( byte_140442B64 )
        PopFanEndCsFanPeriod();
      qword_140442B70 = 0LL;
      byte_140442B65 = 0;
    }
  }
  else if ( !byte_140442B65 )
  {
    byte_140442B65 = 1;
    qword_140442B70 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
