/*
 * XREFs of MiUnmapLargePages @ 0x1402C5D94
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     MiUnmapLargeDriver @ 0x14085EBDC (MiUnmapLargeDriver.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, signed int a3)
{
  signed int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r11
  __int64 v10; // rdx
  int v11; // r8d
  __int64 *v12; // r11
  bool v13; // zf

  v3 = 14;
  v4 = a2;
  if ( a3 != 9 )
    v3 = a3;
  if ( (a2 & 0x1FFFFF) != 0 )
  {
    v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = v6 + (a2 >> 21 << 12);
    v8 = v6 + 8 * (((a1 & 0xFFF) + a2 + 4095) >> 12);
    while ( v7 < v8 )
    {
      if ( !MI_READ_PTE_LOCK_FREE(v7) )
        break;
      if ( MiPteInShadowRange(v9) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v11 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
            v13 = (v10 & 1) == 0;
            goto LABEL_12;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v13 = (v10 & 1) == 0;
LABEL_12:
          if ( !v13 )
            v10 |= 0x8000000000000000uLL;
        }
      }
      *v12 = v10;
      if ( v11 )
        MiWritePteShadow((__int64)v12, v10);
      v7 = (unsigned __int64)(v12 + 1);
    }
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  return MiReturnSystemVa(a1, a1 + v4, v3);
}
