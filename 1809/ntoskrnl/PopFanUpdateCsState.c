/*
 * XREFs of PopFanUpdateCsState @ 0x1408766D0
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14071EBD0 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopFanEndCsFanPeriod @ 0x14087661C (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140417325 )
    {
      if ( byte_140417324 )
        PopFanEndCsFanPeriod();
      qword_140417330 = 0LL;
      byte_140417325 = 0;
    }
  }
  else if ( !byte_140417325 )
  {
    byte_140417325 = 1;
    qword_140417330 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
