/*
 * XREFs of MiDeterminePoolType @ 0x14007BF20
 * Callers:
 *     ExProtectPoolEx @ 0x14000DED8 (ExProtectPoolEx.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14000E5C4 (ExpHpIsSpecialPoolHeap.c)
 *     ExGetHeapFromVA @ 0x14000E644 (ExGetHeapFromVA.c)
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     ExpSizeHeapPool @ 0x1401B7B34 (ExpSizeHeapPool.c)
 *     MmDeterminePoolType @ 0x1402B938C (MmDeterminePoolType.c)
 *     MiGenerateAccessViolation @ 0x1402BC210 (MiGenerateAccessViolation.c)
 *     ExAllocateHeapSpecialPool @ 0x14031EBAC (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14031EE54 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  int SystemRegionType; // edx
  __int64 result; // rax

  SystemRegionType = MiGetSystemRegionType(a1);
  result = 1LL;
  if ( SystemRegionType == 1 )
    return 33LL;
  if ( ((SystemRegionType - 5) & 0xFFFFFFF7) == 0 )
    return 0LL;
  if ( (unsigned int)(SystemRegionType - 6) > 1 )
    return 32LL;
  return result;
}
