/*
 * XREFs of RemoveListHeadPte @ 0x140076414
 * Callers:
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiGetPteLink @ 0x140076C10 (MiGetPteLink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall RemoveListHeadPte(_QWORD *a1)
{
  __int64 PteLink; // rax
  __int64 v2; // r10
  ULONG_PTR v3; // rax
  ULONG_PTR v4; // r11
  ULONG_PTR v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r9
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  bool v21; // zf

  PteLink = MiGetPteLink(*a1);
  v3 = MI_READ_PTE_LOCK_FREE(v2 + 8 * PteLink);
  if ( (v3 & 0x3E0) != 0 || (v3 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x3800uLL, v4, v3, 0LL);
  v5 = MI_READ_PTE_LOCK_FREE(v4 + 8);
  if ( (v5 & 0x3E0) != 0 || (v5 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x3801uLL, (ULONG_PTR)v6, v5, 0LL);
  v7 = MiGetPteLink(*v6);
  v8 = MiSwizzleInvalidPte(v7 << 28);
  *v9 = v8;
  v12 = (__int64)((((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - v11 - 0x98000000000LL) >> 3;
  if ( v13 == v12 )
  {
    v9[1] = v8;
    return v10;
  }
  MiSwizzleInvalidPte(v12 << 28);
  if ( MiPteInShadowRange(v15 + 8 * v14 + 8) )
  {
    if ( (unsigned int)MiPteHasShadow(v17) )
    {
      v19 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_5;
      v21 = (v16 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_5;
      v21 = (v16 & 1) == 0;
    }
    if ( !v21 )
      v16 |= 0x8000000000000000uLL;
  }
LABEL_5:
  *(_QWORD *)(v18 + 8) = v16;
  if ( v19 )
    MiWritePteShadow(v18 + 8, v16);
  return v10;
}
