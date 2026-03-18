/*
 * XREFs of BcdCloseStore @ 0x140711A28
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1403204A4 (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x1406DF554 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1406DFFC0 (PopFreeHiberContext.c)
 *     BiLoadSystemStore @ 0x140710E48 (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x140745CB0 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1408A3114 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E59C (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x14016E66C (BiIsSynchFirmwareEntries.c)
 *     BiCloseStore @ 0x140710F68 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x14071220C (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1407127C8 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AF0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713CA0 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1407140D4 (BiLogMessage.c)
 */

__int64 __fastcall BcdCloseStore(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v11; // r8d

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v11;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(a1, v5, (unsigned int)v4) )
    {
      v6 = BiIsSynchFirmwareEntries(a1) ? 4 : 0;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v6 |= 2u;
    }
    else
    {
      v6 = 2;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v6);
    v7 = BiCloseStore(a1, v6);
    LOBYTE(v8) = v3;
    v9 = v7;
    BiReleaseBcdSyncMutant(v8);
    return v9;
  }
}
