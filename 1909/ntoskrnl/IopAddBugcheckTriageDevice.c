/*
 * XREFs of IopAddBugcheckTriageDevice @ 0x14029C1DC
 * Callers:
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14029BEDC (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14029BF84 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C2E4 (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x14019A568 (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14029C630 (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDevice(__int64 MaxDataSize)
{
  unsigned int v1; // ebx
  int v3; // ebp
  unsigned __int16 v4; // ax
  int v5; // esi
  unsigned int v6; // esi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !KiIsAddressRangeValid(MaxDataSize, 336LL) )
      break;
    v4 = *(_WORD *)(MaxDataSize + 2);
    if ( v4 <= 0x3000u && (v5 = v4 + 7, KiIsAddressRangeValid(MaxDataSize, (v4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)) )
      v6 = v5 & 0xFFFFFFF8;
    else
      v6 = 336;
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)v6);
    v7 = *(_QWORD *)(MaxDataSize + 312);
    if ( KiIsAddressRangeValid(v7, 104LL) )
      IoAddTriageDumpDataBlock(v7, (PVOID)0x68);
    v8 = *(_QWORD *)(MaxDataSize + 8);
    if ( KiIsAddressRangeValid(v8, 336LL) )
    {
      IoAddTriageDumpDataBlock(v8, (PVOID)0x150);
      v10 = *(_OWORD *)(v8 + 56);
      IopAddBugcheckTriageUnicodeString(&v10);
    }
    MaxDataSize = *(_QWORD *)(MaxDataSize + 24);
    if ( !MaxDataSize || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
