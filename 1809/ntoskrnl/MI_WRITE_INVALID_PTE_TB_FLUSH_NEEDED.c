/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x14007F920
 * Callers:
 *     MiTerminateWsle @ 0x14007AC90 (MiTerminateWsle.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140121FC0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

_BOOL8 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char v3; // r8
  _QWORD *v4; // r9
  BOOL v5; // r10d
  int v6; // r8d
  bool v8; // zf

  v5 = MiPteInShadowRange(a1);
  if ( v5 && (unsigned int)MiPteHasShadow(v2, v1) )
    v3 |= 0x20u;
  if ( (MiFlags & 0x800) != 0 )
  {
    v3 = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v3 & 0x20) != 0 )
  {
    v6 = 0;
    if ( !v5 )
      goto LABEL_7;
    if ( (unsigned int)MiPteHasShadow((unsigned int)MiFlags, v1) )
    {
      v6 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v8 = (v1 & 1) == 0;
        goto LABEL_20;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v8 = (v1 & 1) == 0;
LABEL_20:
      if ( !v8 )
        v1 |= 0x8000000000000000uLL;
    }
LABEL_7:
    *v4 = v1;
    if ( v6 )
      MiWritePteShadow(v4);
    return 1LL;
  }
  return (MI_INTERLOCKED_EXCHANGE_PTE(v4, v1) & 0x20) != 0;
}
