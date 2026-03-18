/*
 * XREFs of PopFanUpdateCsState @ 0x1408766F0
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14071EBF0 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopFanEndCsFanPeriod @ 0x14087663C (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_1404172E5 )
    {
      if ( byte_1404172E4 )
        PopFanEndCsFanPeriod();
      qword_1404172F0 = 0LL;
      byte_1404172E5 = 0;
    }
  }
  else if ( !byte_1404172E5 )
  {
    byte_1404172E5 = 1;
    qword_1404172F0 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
