/*
 * XREFs of MiDbgReleaseAddress @ 0x1402BAFFC
 * Callers:
 *     MiDbgCopyMemory @ 0x1402BA940 (MiDbgCopyMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeFlushSingleCurrentTb @ 0x140156FD8 (KeFlushSingleCurrentTb.c)
 *     MiRealVaToFlushType @ 0x14016A948 (MiRealVaToFlushType.c)
 */

void __fastcall MiDbgReleaseAddress(unsigned __int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  __int64 *v6; // r9
  unsigned __int64 v7; // r11
  int v8; // r10d
  unsigned __int64 LeafVa; // rax
  unsigned int v10; // edx
  unsigned __int64 v11; // r11

  if ( !*a2 )
    return;
  _InterlockedAdd(&dword_14043BA14, 1u);
  if ( MiPteInShadowRange(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = v8;
      if ( !HIBYTE(word_14043B26C) )
      {
LABEL_7:
        if ( ((unsigned __int8)v4 & (unsigned __int8)v8) != 0 )
          v4 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      goto LABEL_7;
    }
  }
  *v6 = v4;
  if ( v5 )
    MiWritePteShadow((__int64)v6, v4);
  _InterlockedDecrement(&dword_14043BA14);
  LeafVa = MiGetLeafVa(v7);
  v10 = MiRealVaToFlushType(LeafVa);
  if ( (a3 & 4) != 0 )
    KeFlushSingleCurrentTb(v11, v10);
  else
    KeFlushSingleTb(v11, v10, 2u);
}
