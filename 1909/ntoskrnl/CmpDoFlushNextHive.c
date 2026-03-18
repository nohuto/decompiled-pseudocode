/*
 * XREFs of CmpDoFlushNextHive @ 0x140638450
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x140638590 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140638630 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14063866C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406387C0 (LOCK_HIVE_LOAD.c)
 */

char __fastcall CmpDoFlushNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  char v3; // si
  ULONG_PTR NextActiveHive; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 UnbiasedInterruptTime; // r11
  unsigned __int64 v10; // rcx

  v2 = -1LL;
  v3 = 0;
  if ( BYTE1(NlsMbCodePageTag) )
    return 0;
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v7 = -1LL;
      if ( (*(_DWORD *)(NextActiveHive + 160) & 3) == 0 )
      {
        if ( *(_DWORD *)(NextActiveHive + 104) || *(_BYTE *)(NextActiveHive + 191) )
        {
          UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
          v10 = *(_QWORD *)(NextActiveHive + 4176) + 10000000LL * (unsigned int)dword_1404248F0;
          if ( UnbiasedInterruptTime >= v10 )
          {
            if ( (int)CmpFlushHive(NextActiveHive, 0x12u) < 0 )
            {
              v3 = 1;
              *a1 = 1;
              v7 = 10000000LL * (unsigned int)dword_1404248FC;
            }
          }
          else
          {
            v3 = 1;
            v7 = v10 - UnbiasedInterruptTime;
          }
        }
        else if ( (*(_DWORD *)(NextActiveHive + 4264) & 1) == 0 )
        {
          CmpFlushHive(NextActiveHive, 0x22u);
        }
      }
      if ( *(_BYTE *)(NextActiveHive + 2936) == 1 )
      {
        LOCK_HIVE_LOAD();
        CmpLockRegistryFreezeAware(0LL);
        if ( *(_BYTE *)(NextActiveHive + 2936) == 1 )
          CmpDoQueueLateUnloadWorker(NextActiveHive);
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
      }
      if ( v7 >= v2 )
        v7 = v2;
      v2 = v7;
      NextActiveHive = CmpGetNextActiveHive(NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v3 )
      *a2 = v7;
  }
  return v3;
}
