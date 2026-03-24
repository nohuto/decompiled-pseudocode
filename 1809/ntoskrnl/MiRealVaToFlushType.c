/*
 * XREFs of MiRealVaToFlushType @ 0x14016A848
 * Callers:
 *     MiFlushValidPteFromTb @ 0x14016A7B0 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x1402BAE0C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402BB384 (MiDbgWriteCheck.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  int SystemRegionType; // eax
  unsigned int v2; // ecx

  if ( a1 < 0xFFFF800000000000uLL || a1 >= qword_14043A528 && a1 < qword_14043A528 + 276840448 )
  {
    return 1;
  }
  else
  {
    SystemRegionType = MiGetSystemRegionType(a1);
    v2 = 0;
    if ( SystemRegionType == 1 )
      return 2;
  }
  return v2;
}
