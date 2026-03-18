/*
 * XREFs of IopAddBugcheckTriageUnicodeString @ 0x14029C8D0
 * Callers:
 *     IopAddBugcheckTriageDevice @ 0x14029C47C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C584 (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x140199F08 (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 */

__int64 __fastcall IopAddBugcheckTriageUnicodeString(__int64 a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // ebx
  unsigned __int64 v4; // rdi

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  if ( v1 )
  {
    if ( v1 > 0x100u )
    {
      if ( KiIsAddressRangeValid(*(_QWORD *)(a1 + 8), 256LL) )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 8), (PVOID)0x100);
        return (unsigned int)-2147483643;
      }
    }
    else
    {
      v4 = ((unsigned __int64)v1 + 7) >> 3;
      if ( KiIsAddressRangeValid(*(_QWORD *)(a1 + 8), 8 * v4) )
        IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 8), (PVOID)(unsigned int)(8 * v4));
      else
        return (unsigned int)-1073741823;
    }
  }
  return v2;
}
