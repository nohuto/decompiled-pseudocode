/*
 * XREFs of MmIsSpecialPoolAddress @ 0x1401671B0
 * Callers:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     IopUpdateMinidumpContext @ 0x140281E58 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1402ABBC0 (MmIsNonPagedSystemAddressValid.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     MiVaIsSessionSpecialPool @ 0x14015FD04 (MiVaIsSessionSpecialPool.c)
 */

_BOOL8 __fastcall MmIsSpecialPoolAddress(unsigned __int64 a1)
{
  int SystemRegionType; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( MiIsAddressValid(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
    {
      SystemRegionType = MiGetSystemRegionType(a1);
      if ( SystemRegionType == 7 || SystemRegionType == 13 || MiVaIsSessionSpecialPool(a1) )
        return 1;
    }
  }
  return result;
}
