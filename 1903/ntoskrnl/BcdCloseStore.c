/*
 * XREFs of BcdCloseStore @ 0x14073BB4C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140340BBC (WheaPersistOfflinedPage.c)
 *     BiLoadSystemStore @ 0x14073B314 (BiLoadSystemStore.c)
 *     PopBcdClose @ 0x1408B67EC (PopBcdClose.c)
 *     SepSecureBootCorrectBcd @ 0x1408E1A14 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiIsSynchFirmwareEntries @ 0x140177990 (BiIsSynchFirmwareEntries.c)
 *     BiIsOfflineHandle @ 0x140177A94 (BiIsOfflineHandle.c)
 *     BiCloseStore @ 0x14073B440 (BiCloseStore.c)
 *     BiIsWinPEBoot @ 0x14073C50C (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x14073CAE4 (BiIsSystemStore.c)
 *     BiReleaseBcdSyncMutant @ 0x14073DE94 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14073E050 (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x14073E4B4 (BiLogMessage.c)
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
