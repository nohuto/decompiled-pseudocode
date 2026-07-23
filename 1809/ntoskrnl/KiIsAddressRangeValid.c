/*
 * XREFs of KiIsAddressRangeValid @ 0x140191F34
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x140191E80 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x14027FA84 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x14028011C (IoGetLoadedDriverInfo.c)
 *     IopUpdateMinidumpContext @ 0x140281E58 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140282648 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x140286E88 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286EF0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286F98 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140287134 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1402871F0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1402872F8 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1402873E8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140287544 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140287644 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402876E0 (IopAddBugcheckTriageWorkQueue.c)
 *     KeAddTriageDumpDataBlock @ 0x140291260 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x140293200 (KiValidateTriageDumpDataArray.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402D35D0 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 */

char __fastcall KiIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v3 )
    return 1;
  while ( v2 >= 0x10000 && MiIsAddressValid(v2) )
  {
    v2 += 4096LL;
    if ( !--v3 )
      return 1;
  }
  return 0;
}
