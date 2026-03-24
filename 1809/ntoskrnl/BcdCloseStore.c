/*
 * XREFs of BcdCloseStore @ 0x140711A08
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1403205A4 (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x1406DF534 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1406DFFA0 (PopFreeHiberContext.c)
 *     BiLoadSystemStore @ 0x140710E28 (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x140745C90 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1408A30F4 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E5BC (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x14016E68C (BiIsSynchFirmwareEntries.c)
 *     BiCloseStore @ 0x140710F48 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x1407121EC (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1407127A8 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AD0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713C80 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1407140B4 (BiLogMessage.c)
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
