/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1401427A4
 * Callers:
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140129B04 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

_BOOL8 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(unsigned __int64 a1)
{
  __int64 v1; // rdx
  char v2; // r8
  volatile __int64 *v3; // r9
  BOOL v4; // r10d
  int v5; // r8d
  bool v7; // zf

  v4 = MiPteInShadowRange(a1);
  if ( v4 && (unsigned int)MiPteHasShadow() )
    v2 |= 0x20u;
  if ( (MiFlags & 0x800) != 0 )
  {
    v2 = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v2 & 0x20) != 0 )
  {
    v5 = 0;
    if ( !v4 )
      goto LABEL_7;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
        v7 = (v1 & 1) == 0;
        goto LABEL_20;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v7 = (v1 & 1) == 0;
LABEL_20:
      if ( !v7 )
        v1 |= 0x8000000000000000uLL;
    }
LABEL_7:
    *v3 = v1;
    if ( v5 )
      MiWritePteShadow((__int64)v3);
    return 1LL;
  }
  return (MI_INTERLOCKED_EXCHANGE_PTE(v3, v1) & 0x20) != 0;
}
