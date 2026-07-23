/*
 * XREFs of IopAddBugcheckTriageThread @ 0x140287544
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140281E58 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x140286E88 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286EF0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286F98 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402876E0 (IopAddBugcheckTriageWorkQueue.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191F34 (KiIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x140281828 (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x1402873E8 (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rsi
  int MaxValidMemorySize; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r14

  v1 = 0;
  v3 = 0;
  if ( KiIsAddressRangeValid(a1, 2064LL) )
  {
    IoAddTriageDumpDataBlock(a1, 2064);
    if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 56);
      v5 = *(_QWORD *)(a1 + 88);
      if ( (unsigned __int64)(v4 - v5) >= 0x3FFF )
        v6 = 0x3FFF;
      else
        v6 = v4 - v5;
      v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v7, v6);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v7, MaxValidMemorySize);
    }
    v9 = (_QWORD *)(a1 + 1648);
    v10 = *(_QWORD **)(a1 + 1648);
    v11 = v9;
    while ( v10 && v10 != v9 && v3 < 10 )
    {
      ++v3;
      if ( !KiIsAddressRangeValid((__int64)(v10 - 4), 208LL) || (_QWORD *)v10[1] != v11 )
        return (unsigned int)-1073741823;
      IopAddBugcheckTriageIrp((__int64)(v10 - 4), 1);
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
