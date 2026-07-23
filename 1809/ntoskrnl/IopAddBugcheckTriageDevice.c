/*
 * XREFs of IopAddBugcheckTriageDevice @ 0x1402871F0
 * Callers:
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286EF0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286F98 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1402872F8 (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191F34 (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140287644 (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDevice(__int64 a1)
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
    if ( !KiIsAddressRangeValid(a1, 336LL) )
      break;
    v4 = *(_WORD *)(a1 + 2);
    if ( v4 <= 0x3000u && (v5 = v4 + 7, KiIsAddressRangeValid(a1, (v4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)) )
      v6 = v5 & 0xFFFFFFF8;
    else
      v6 = 336;
    IoAddTriageDumpDataBlock(a1, v6);
    v7 = *(_QWORD *)(a1 + 312);
    if ( KiIsAddressRangeValid(v7, 104LL) )
      IoAddTriageDumpDataBlock(v7, 104);
    v8 = *(_QWORD *)(a1 + 8);
    if ( KiIsAddressRangeValid(v8, 336LL) )
    {
      IoAddTriageDumpDataBlock(v8, 336);
      v10 = *(_OWORD *)(v8 + 56);
      IopAddBugcheckTriageUnicodeString(&v10);
    }
    a1 = *(_QWORD *)(a1 + 24);
    if ( !a1 || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
