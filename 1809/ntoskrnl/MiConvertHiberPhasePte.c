/*
 * XREFs of MiConvertHiberPhasePte @ 0x14056D080
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReadPteShadow @ 0x14006C540 (MiReadPteShadow.c)
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, __int64 *a2, int a3)
{
  __int64 PteShadow; // r9
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v16; // rdx
  __int64 *v17; // r10
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a2;
  v5 = (unsigned __int64)a2;
  v6 = a1;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  v7 = *(_QWORD *)(v6 + 168);
  v19 = PteShadow;
  if ( v7 )
  {
    if ( (PteShadow & 1) == 0 )
      return 0LL;
    if ( a3 )
      return 0LL;
    v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19);
    if ( !(unsigned int)MiIsPfn((v9 >> 12) & 0xFFFFFFFFFLL)
      || v10 == qword_14043BEA0
      || v10 == qword_14043BE88
      || _bittest64(*(const signed __int64 **)(v13 + 8), (unsigned int)v10) )
    {
      return 0LL;
    }
    v19 = v11 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
    if ( MiPteInShadowRange(v12) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        *v17 = v14;
        MiWritePteShadow((__int64)v17, v16);
        return 0LL;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        *v17 = v14;
        return 0LL;
      }
    }
LABEL_28:
    *v17 = v16;
    return 0LL;
  }
  if ( (PteShadow & 1) != 0 || (PteShadow & 0x400) == 0 || (PteShadow & 4) == 0 )
    return 0LL;
  v19 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 1;
  if ( !MiPteInShadowRange(v5) )
    goto LABEL_28;
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      v16 |= 0x8000000000000000uLL;
    goto LABEL_28;
  }
  if ( !HIBYTE(word_14043B26C) )
    v18 |= 0x8000000000000000uLL;
  *v17 = v18;
  MiWritePteShadow((__int64)v17, v18);
  return 0LL;
}
