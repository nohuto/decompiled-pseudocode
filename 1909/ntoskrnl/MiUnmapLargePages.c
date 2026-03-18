/*
 * XREFs of MiUnmapLargePages @ 0x140171A50
 * Callers:
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     MiUnmapLargeDriver @ 0x14089A04C (MiUnmapLargeDriver.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnSystemVa @ 0x1400E6D50 (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiUnmapLargePages(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // esi
  unsigned __int64 v4; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r11
  __int64 v11; // rdx
  int v12; // r8d
  _QWORD *v13; // r11
  bool v14; // zf

  v3 = 13;
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
          v12 = 1;
          if ( !HIBYTE(word_1404658EC) )
          {
            v14 = (v11 & 1) == 0;
            goto LABEL_14;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v14 = (v11 & 1) == 0;
LABEL_14:
          if ( !v14 )
            v11 |= 0x8000000000000000uLL;
        }
      }
      *v13 = v11;
      if ( v12 )
        MiWritePteShadow((__int64)v13);
      v7 = (unsigned __int64)(v13 + 1);
    }
    v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  }
  return MiReturnSystemVa(a1, a1 + v4, v3);
}
