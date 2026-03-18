/*
 * XREFs of PopFanUpdateRunningState @ 0x14077900C
 * Callers:
 *     PopFanWorker @ 0x140778910 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408B38EC (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateRunningState(char a1)
{
  int v2; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
    v2 = PopFanTracking + 1;
  else
    v2 = PopFanTracking - 1;
  PopFanTracking = v2;
  if ( v2 )
  {
    if ( !byte_140442BC4 )
    {
      byte_140442BC4 = 1;
      qword_140442BC8 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140442BC4 )
  {
    if ( byte_140442BC5 )
      PopFanEndCsFanPeriod();
    qword_140442BC8 = 0LL;
    byte_140442BC4 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
