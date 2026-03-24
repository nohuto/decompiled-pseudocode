/*
 * XREFs of KiIsAddressRangeValid @ 0x140191DF4
 * Callers:
 *     IopAddTriageDumpDataBlock @ 0x140191D40 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x14027F894 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x14027FF2C (IoGetLoadedDriverInfo.c)
 *     IopUpdateMinidumpContext @ 0x140281C68 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140282458 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x140286C98 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286D00 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286DA8 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140286F44 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140287000 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140287108 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1402871F8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140287354 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140287454 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402874F0 (IopAddBugcheckTriageWorkQueue.c)
 *     KeAddTriageDumpDataBlock @ 0x140291070 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x140293010 (KiValidateTriageDumpDataArray.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402D33E0 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400685A0 (MiIsAddressValid.c)
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
