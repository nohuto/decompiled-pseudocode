/*
 * XREFs of MiVaIsSessionSpecialPool @ 0x14015FD04
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MmIsSpecialPoolAddress @ 0x1401671B0 (MmIsSpecialPoolAddress.c)
 *     MmQuerySpecialPoolBlockType @ 0x1402AD9C4 (MmQuerySpecialPoolBlockType.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiVaIsSessionSpecialPool(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  _BOOL8 result; // rax
  unsigned __int64 v3; // rax

  result = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 4) & 0x20) == 0
        && (*(_DWORD *)(48
                      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                      - 0x57FFFFFFFF0LL) & 0xF000) == 0x1000LL )
      {
        return 1;
      }
    }
  }
  return result;
}
