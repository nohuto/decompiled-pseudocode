/*
 * XREFs of IopAddBugcheckTriageDeviceNode @ 0x140287108
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140281C68 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286D00 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140286F44 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageIrp @ 0x1402871F8 (IopAddBugcheckTriageIrp.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191CEC (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191DF4 (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDevice @ 0x140287000 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageIrp @ 0x1402871F8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140287454 (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDeviceNode(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !KiIsAddressRangeValid(a1, 88LL) )
      break;
    IoAddTriageDumpDataBlock(a1, 88);
    v8 = *(_OWORD *)(a1 + 40);
    IopAddBugcheckTriageUnicodeString(&v8);
    v8 = *(_OWORD *)(a1 + 56);
    IopAddBugcheckTriageUnicodeString(&v8);
    v4 = *(_QWORD *)(a1 + 72);
    if ( v4 )
      IopAddBugcheckTriageIrp(v4, 0LL);
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      if ( KiIsAddressRangeValid(*(_QWORD *)(a1 + 80), 56LL) )
      {
        IoAddTriageDumpDataBlock(v5, 56);
        v6 = *(_QWORD *)(v5 + 16);
        if ( v6 )
          IopAddBugcheckTriageIrp(v6, 0LL);
      }
    }
    IopAddBugcheckTriageDevice(*(_QWORD *)(a1 + 32));
    a1 = *(_QWORD *)(a1 + 16);
    if ( !a1 || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
