/*
 * XREFs of IopAddBugcheckTriageUnicodeString @ 0x14029C630
 * Callers:
 *     IopAddBugcheckTriageDevice @ 0x14029C1DC (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C2E4 (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     KiIsAddressRangeValid @ 0x14019A568 (KiIsAddressRangeValid.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
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
