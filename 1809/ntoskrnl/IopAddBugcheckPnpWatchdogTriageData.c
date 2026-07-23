/*
 * XREFs of IopAddBugcheckPnpWatchdogTriageData @ 0x140286EF0
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140281E58 (IopUpdateMinidumpContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191F34 (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140287134 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1402871F0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1402872F8 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x140287544 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402876E0 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpWatchdogTriageData(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v4 = 0;
  IopAddBugcheckTriageThread(a2, a2, a3);
  if ( KiIsAddressRangeValid((__int64)a1, 80LL) )
  {
    IoAddTriageDumpDataBlock((int)a1, 80);
    IopAddBugcheckTriageCompletionQueue(a1[5]);
    IopAddBugcheckTriageWorkQueue(a1[6]);
    v7 = a1[2];
    if ( v7 )
      IopAddBugcheckTriageThread(v7, v5, v6);
    v8 = a1[3];
    if ( v8 )
      IopAddBugcheckTriageThread(v8, v5, v6);
    v9 = a1[4];
    if ( v9 )
      IopAddBugcheckTriageThread(v9, v5, v6);
    if ( a1[8] )
      IopAddBugcheckTriageDevice();
    v10 = a1[7];
    if ( v10 )
      IopAddBugcheckTriageDeviceNode(v10, v5, v6);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
