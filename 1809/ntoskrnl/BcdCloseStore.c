/*
 * XREFs of BcdCloseStore @ 0x140712CA8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140320794 (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     BiLoadSystemStore @ 0x1407120C8 (BiLoadSystemStore.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 *     SepSecureBootCorrectBcd @ 0x1408A4354 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E6BC (BiIsOfflineHandle.c)
 *     BiIsSynchFirmwareEntries @ 0x14016E78C (BiIsSynchFirmwareEntries.c)
 *     BiCloseStore @ 0x1407121E8 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x14071348C (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x140713A48 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x140714D70 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140714F20 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x140715354 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdCloseStore(HANDLE BcdStoreHandle)
{
  __int64 v2; // rcx
  char v3; // si
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  NTSTATUS v11; // r8d

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdStoreHandle);
  v3 = v2;
  v4 = BiAcquireBcdSyncMutant(v2);
  if ( v4 < 0 )
  {
    BiLogMessage(4LL, L"BcdCloseStore: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v4);
    return v11;
  }
  else
  {
    if ( (unsigned __int8)BiIsSystemStore(BcdStoreHandle, v5, (unsigned int)v4) )
    {
      v6 = BiIsSynchFirmwareEntries((char)BcdStoreHandle) ? 4 : 0;
      if ( (unsigned __int8)BiIsWinPEBoot() )
        v6 |= 2u;
    }
    else
    {
      v6 = 2;
    }
    BiLogMessage(2LL, L"Closing store. Flags: 0x%x", v6);
    v7 = BiCloseStore((__int64)BcdStoreHandle, v6);
    LOBYTE(v8) = v3;
    v9 = v7;
    BiReleaseBcdSyncMutant(v8);
    return v9;
  }
}
