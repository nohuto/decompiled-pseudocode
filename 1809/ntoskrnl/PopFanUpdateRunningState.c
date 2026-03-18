/*
 * XREFs of PopFanUpdateRunningState @ 0x140751510
 * Callers:
 *     PopFanWorker @ 0x1407513A0 (PopFanWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopFanEndCsFanPeriod @ 0x14087663C (PopFanEndCsFanPeriod.c)
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
    if ( !byte_1404172E4 )
    {
      byte_1404172E4 = 1;
      qword_1404172E8 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_1404172E4 )
  {
    if ( byte_1404172E5 )
      PopFanEndCsFanPeriod();
    qword_1404172E8 = 0LL;
    byte_1404172E4 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
