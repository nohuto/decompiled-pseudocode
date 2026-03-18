/*
 * XREFs of IopAddBugcheckTriageThread @ 0x14029C7D0
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140295F8C (IopAddBugcheckTriageDataFromParameters.c)
 *     IopAddBugcheckPnpTriageData @ 0x14029C114 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14029C17C (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14029C224 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14029C96C (IopAddBugcheckTriageWorkQueue.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x140199F08 (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x140296C90 (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x14029C674 (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rsi
  unsigned int MaxValidMemorySize; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r14

  v1 = 0;
  v3 = 0;
  if ( KiIsAddressRangeValid(MaxDataSize, 2080LL) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x820);
    if ( (*(_DWORD *)(MaxDataSize + 120) & 0x20000) != 0 )
    {
      v4 = *(_QWORD *)(MaxDataSize + 56);
      v5 = *(_QWORD *)(MaxDataSize + 88);
      if ( (unsigned __int64)(v4 - v5) >= 0x3FFF )
        v6 = 0x3FFF;
      else
        v6 = v4 - v5;
      v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v7, v6);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v7, (PVOID)MaxValidMemorySize);
    }
    v9 = (_QWORD *)(MaxDataSize + 1664);
    v10 = *(_QWORD **)(MaxDataSize + 1664);
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
