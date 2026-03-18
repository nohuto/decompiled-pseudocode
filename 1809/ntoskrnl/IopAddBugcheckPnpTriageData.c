/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x140286B98
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140281B68 (IopUpdateMinidumpContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191CCC (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191DD4 (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140286E44 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageThread @ 0x140287254 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402873F0 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpTriageData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  IopAddBugcheckTriageThread(a1, a2, a3);
  if ( KiIsAddressRangeValid(a2, 32LL) && *(_WORD *)a2 == 0x8001 )
  {
    IoAddTriageDumpDataBlock(a2, 32);
    IopAddBugcheckTriageCompletionQueue(*(_QWORD *)(a2 + 8));
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 16));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
