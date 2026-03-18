/*
 * XREFs of MiDeterminePoolType @ 0x140061A60
 * Callers:
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     MmFreePoolMemory @ 0x14010E4BC (MmFreePoolMemory.c)
 *     ExProtectPoolEx @ 0x14012496C (ExProtectPoolEx.c)
 *     MmDeterminePoolType @ 0x14013C408 (MmDeterminePoolType.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14019CEDC (ExpHpIsSpecialPoolHeap.c)
 *     MiGenerateAccessViolation @ 0x1402D285C (MiGenerateAccessViolation.c)
 *     ExAllocateHeapSpecialPool @ 0x14033EF28 (ExAllocateHeapSpecialPool.c)
 *     ExpFreeHeapSpecialPool @ 0x14033F270 (ExpFreeHeapSpecialPool.c)
 *     ExpSizeHeapPool @ 0x14033F4B8 (ExpSizeHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDeterminePoolType(unsigned __int64 a1)
{
  unsigned __int8 v1; // cl

  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v1 = byte_140467440[((a1 >> 39) & 0x1FF) - 256];
    switch ( v1 )
    {
      case 1u:
        return 33LL;
      case 5u:
        return 0LL;
      case 6u:
        return 1LL;
    }
  }
  return 32LL;
}
