/*
 * XREFs of MiDbgReleaseAddress @ 0x1402D0D9C
 * Callers:
 *     MiDbgCopyMemory @ 0x1402D0648 (MiDbgCopyMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KeFlushSingleCurrentTb @ 0x140166B0C (KeFlushSingleCurrentTb.c)
 *     MiRealVaToFlushType @ 0x1401746D0 (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  int v8; // edx
  _QWORD *v9; // r8
  int v10; // r9d
  unsigned __int64 LeafVa; // rax
  unsigned int v12; // edx

  v3 = *a2;
  if ( !*a2 )
    return;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v6 = (a1 >> 18) & 0x3FFFFFF8;
    v7 = 0xFFFFF6FB40000000uLL;
  }
  else
  {
    v6 = (a1 >> 9) & 0x7FFFFFFFF8LL;
    v7 = 0xFFFFF68000000000uLL;
  }
  _InterlockedAdd(&dword_1404660D4, 1u);
  if ( MiPteInShadowRange(v7 + v6) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = v10;
      if ( !HIBYTE(word_1404658EC) )
      {
LABEL_10:
        if ( ((unsigned __int8)v3 & (unsigned __int8)v10) != 0 )
          v3 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_10;
    }
  }
  *v9 = v3;
  if ( v8 )
    MiWritePteShadow((__int64)v9);
  _InterlockedDecrement(&dword_1404660D4);
  LeafVa = MiGetLeafVa(a1);
  v12 = MiRealVaToFlushType(LeafVa);
  if ( (a3 & 4) != 0 )
    KeFlushSingleCurrentTb(a1, v12);
  else
    KeFlushSingleTb(a1, v12, 2u);
}
