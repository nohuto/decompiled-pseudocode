/*
 * XREFs of PopFanUpdateCsState @ 0x140877930
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14071FE70 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopFanEndCsFanPeriod @ 0x14087787C (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140418385 )
    {
      if ( byte_140418384 )
        PopFanEndCsFanPeriod();
      qword_140418390 = 0LL;
      byte_140418385 = 0;
    }
  }
  else if ( !byte_140418385 )
  {
    byte_140418385 = 1;
    qword_140418390 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
