/*
 * XREFs of PopFanUpdateRunningState @ 0x14077C5EC
 * Callers:
 *     PopFanWorker @ 0x14077BEF0 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408B31BC (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140442B64 )
    {
      byte_140442B64 = 1;
      qword_140442B68 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140442B64 )
  {
    if ( byte_140442B65 )
      PopFanEndCsFanPeriod();
    qword_140442B68 = 0LL;
    byte_140442B64 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
