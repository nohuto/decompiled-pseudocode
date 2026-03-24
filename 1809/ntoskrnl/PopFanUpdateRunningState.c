/*
 * XREFs of PopFanUpdateRunningState @ 0x1407514F0
 * Callers:
 *     PopFanWorker @ 0x140751380 (PopFanWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopFanEndCsFanPeriod @ 0x14087661C (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140417324 )
    {
      byte_140417324 = 1;
      qword_140417328 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140417324 )
  {
    if ( byte_140417325 )
      PopFanEndCsFanPeriod();
    qword_140417328 = 0LL;
    byte_140417324 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
