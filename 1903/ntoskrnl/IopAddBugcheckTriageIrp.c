/*
 * XREFs of IopAddBugcheckTriageIrp @ 0x14029C674
 * Callers:
 *     IopAddBugcheckPowerTriageData @ 0x14029C224 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C584 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14029C7D0 (IopAddBugcheckTriageThread.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x140199F08 (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C584 (IopAddBugcheckTriageDeviceNode.c)
 */

__int64 __fastcall IopAddBugcheckTriageIrp(__int64 MaxDataSize, char a2)
{
  int v4; // r12d
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  char v7; // si
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  int v10; // ebp
  int v11; // r15d
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r14

  v4 = 0;
  v5 = 0;
  if ( !KiIsAddressRangeValid(MaxDataSize, 208LL) )
    return (unsigned int)-1073741823;
  v6 = *(_WORD *)(MaxDataSize + 2);
  if ( v6 > 0x800u
    || (v7 = *(_BYTE *)(MaxDataSize + 66), v7 > 64)
    || (v8 = v6, v9 = ((unsigned __int64)v6 + 7) >> 3, !KiIsAddressRangeValid(MaxDataSize, 8 * v9)) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0xD0);
    return (unsigned int)-1073741823;
  }
  IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)(unsigned int)(8 * v9));
  if ( a2 == 1 )
  {
    v10 = 0;
    v11 = v7;
    if ( v7 > 0 )
    {
      v12 = v8 + MaxDataSize;
      while ( MaxDataSize + 280 + 72LL * (char)v10 <= v12 )
      {
        v13 = *(_QWORD *)(MaxDataSize + 72LL * (char)v10 + 248);
        if ( v13 )
        {
          while ( 1 )
          {
            ++v4;
            if ( !KiIsAddressRangeValid(v13, 336LL) )
              break;
            v14 = *(_QWORD *)(v13 + 312);
            if ( !KiIsAddressRangeValid(v14, 104LL) )
              break;
            v13 = *(_QWORD *)(v14 + 48);
            if ( !v13 )
            {
              v5 = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(v14 + 40));
              goto LABEL_17;
            }
            if ( v4 >= 10 )
              goto LABEL_17;
          }
          v5 = -1073741823;
        }
LABEL_17:
        if ( ++v10 >= v11 )
          return v5;
      }
      return (unsigned int)-1073741823;
    }
  }
  return v5;
}
