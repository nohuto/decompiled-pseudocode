/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x14029C114
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140295F8C (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x140199F08 (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14029C3C0 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageThread @ 0x14029C7D0 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14029C96C (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpTriageData(ULONG a1, __int64 a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  IopAddBugcheckTriageThread(a1);
  if ( KiIsAddressRangeValid(a2, 32LL) && *(_WORD *)a2 == 0x8001 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)0x20);
    IopAddBugcheckTriageCompletionQueue(*(_QWORD *)(a2 + 8));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 16));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
