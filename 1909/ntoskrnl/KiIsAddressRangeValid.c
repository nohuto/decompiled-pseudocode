/*
 * XREFs of KiIsAddressRangeValid @ 0x14019A568
 * Callers:
 *     KeAddTriageDumpDataBlock @ 0x14019A3D0 (KeAddTriageDumpDataBlock.c)
 *     KiValidateTriageDumpDataArray @ 0x14019A48C (KiValidateTriageDumpDataArray.c)
 *     IopAddTriageDumpDataBlock @ 0x14019BFB8 (IopAddTriageDumpDataBlock.c)
 *     IoFillTriageDumpBuffer @ 0x140294774 (IoFillTriageDumpBuffer.c)
 *     IoGetLoadedDriverInfo @ 0x140294E0C (IoGetLoadedDriverInfo.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140295CEC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140297098 (IopUpdateMinidumpContext.c)
 *     IopWriteDriverList @ 0x140297628 (IopWriteDriverList.c)
 *     IopAddBugcheckPnpTriageData @ 0x14029BE74 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14029BEDC (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14029BF84 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14029C120 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14029C1DC (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C2E4 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14029C3D4 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14029C530 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14029C630 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14029C6CC (IopAddBugcheckTriageWorkQueue.c)
 *     IopCalculateStackInformation @ 0x14029CEF0 (IopCalculateStackInformation.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402ED730 (PopInternalSaveStackToDumpFile.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
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
