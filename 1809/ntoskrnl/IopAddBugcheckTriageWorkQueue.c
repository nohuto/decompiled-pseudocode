/*
 * XREFs of IopAddBugcheckTriageWorkQueue @ 0x1402873F0
 * Callers:
 *     IopAddBugcheckPnpTriageData @ 0x140286B98 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286C00 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286CA8 (IopAddBugcheckPowerTriageData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191CCC (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191DD4 (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageThread @ 0x140287254 (IopAddBugcheckTriageThread.c)
 */

__int64 __fastcall IopAddBugcheckTriageWorkQueue(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r14d
  _QWORD **v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp

  v1 = 0;
  v3 = 0;
  if ( KiIsAddressRangeValid(a1, 688LL) )
  {
    IoAddTriageDumpDataBlock(a1, 688);
    v4 = (_QWORD **)(a1 + 672);
    v5 = *v4;
    if ( *v4 )
    {
      v6 = v4;
      while ( v5 != v4 && v3 < 10 )
      {
        ++v3;
        if ( !KiIsAddressRangeValid((__int64)v5, 16LL) || (_QWORD *)v5[1] != v6 )
          return (unsigned int)-1073741823;
        IopAddBugcheckTriageThread((__int64)(v5 - 65));
        v6 = v5;
        v5 = (_QWORD *)*v5;
        if ( !v5 )
          return v1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
