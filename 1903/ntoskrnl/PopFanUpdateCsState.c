/*
 * XREFs of PopFanUpdateCsState @ 0x1408B39A0
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14073B180 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408B38EC (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140442BC5 )
    {
      if ( byte_140442BC4 )
        PopFanEndCsFanPeriod();
      qword_140442BD0 = 0LL;
      byte_140442BC5 = 0;
    }
  }
  else if ( !byte_140442BC5 )
  {
    byte_140442BC5 = 1;
    qword_140442BD0 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
