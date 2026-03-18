/*
 * XREFs of KiIsAddressRangeValid @ 0x140199F08
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x140199D70 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x140199E2C (KiValidateTriageDumpDataArray.c)
 *     IopAddTriageDumpDataBlock @ 0x14019B958 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x140294A14 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x1402950AC (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140295F8C (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140297338 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x1402978C8 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x14029C114 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14029C17C (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14029C224 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14029C3C0 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14029C47C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C584 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14029C674 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14029C7D0 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14029C8D0 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14029C96C (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14029D190 (IopCalculateStackInformation.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402ED9CC (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 */

char __fastcall KiIsAddressRangeValid(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi

  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( !v3 )
    return 1;
  while ( v2 >= 0x10000 && MmIsAddressValidEx(v2) )
  {
    v2 += 4096LL;
    if ( !--v3 )
      return 1;
  }
  return 0;
}
