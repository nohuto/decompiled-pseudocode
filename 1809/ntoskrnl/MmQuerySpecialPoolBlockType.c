/*
 * XREFs of MmQuerySpecialPoolBlockType @ 0x1402AD7D4
 * Callers:
 *     MiIdentifyPfn @ 0x1400A7EE0 (MiIdentifyPfn.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiVaIsSessionSpecialPool @ 0x14015FC04 (MiVaIsSessionSpecialPool.c)
 */

__int64 __fastcall MmQuerySpecialPoolBlockType(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 13 )
    return 0LL;
  else
    return MiVaIsSessionSpecialPool(v1) ? 33 : 1;
}
