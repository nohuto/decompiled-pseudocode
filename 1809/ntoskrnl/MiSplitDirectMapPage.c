/*
 * XREFs of MiSplitDirectMapPage @ 0x1402B6F14
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x140118A14 (MiUpdateTransitionPteFrame.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 */

ULONG_PTR __fastcall MiSplitDirectMapPage(_WORD *a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  __int16 v6; // r8
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 i; // r14
  __int64 Page; // rax
  ULONG_PTR v11; // rdi
  __int64 v12; // rsi
  unsigned __int8 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int128 v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // r11
  __int16 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  __int64 v28; // rdx
  int v29; // r8d
  __int64 *v30; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v33; // [rsp+20h] [rbp-30h] BYREF
  __int128 v34; // [rsp+30h] [rbp-20h] BYREF
  __int64 v35; // [rsp+40h] [rbp-10h]
  unsigned __int64 v36; // [rsp+48h] [rbp-8h]

  v5 = 48 * a3 - 0x58000000000LL;
  v6 = _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v7 = *(_QWORD *)a1;
  v8 = (unsigned __int16)(*(_WORD *)(a2 + 8) & v6) | *(unsigned __int16 *)(a2 + 10);
  for ( i = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)); ; MiWaitForFreePage(i) )
  {
    Page = MiGetPage(i, v8, 0);
    v11 = Page;
    if ( Page != -1 )
      break;
  }
  v12 = 48 * Page - 0x58000000000LL;
  v13 = MiLockPageInline(v5);
  MiLockNestedPageAtDpcInline(v12, v14, v15);
  MiFinalizePageAttribute(v12, *(unsigned __int8 *)(v5 + 34) >> 6, 1u);
  v16 = *(_QWORD *)(v12 + 40);
  v17 = *(_OWORD *)(v5 + 16);
  v33 = *(_OWORD *)v5;
  v18 = *(__m128i *)(v5 + 32);
  v34 = v17;
  v35 = v18.m128i_i64[0];
  v36 = *(_QWORD *)(v12 + 40) ^ (_mm_srli_si128(v18, 8).m128i_u64[0] ^ v16) & 0x3FFFFFFFFFFFFFFLL;
  LOWORD(v16) = a1[16];
  v36 &= ~0x10000000000000uLL;
  MiSwizzleInvalidPte(16 * (v16 & 0x3E));
  if ( !MiPteInShadowRange((unsigned __int64)&v34) )
  {
LABEL_13:
    *(_QWORD *)&v34 = v19;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v19 & 1) != 0 )
    {
      v19 |= v20;
    }
    goto LABEL_13;
  }
  if ( HIBYTE(word_14043B26C) == v21 && (v19 & 1) != 0 )
    v19 |= v20;
  *(_QWORD *)&v34 = v19;
  MiWritePteShadow((__int64)&v34, v19);
LABEL_14:
  MiCopyPfnEntryEx(v12, (__int64)&v33);
  *(_BYTE *)(v12 + 34) |= 0x10u;
  *(_WORD *)(v12 + 32) = v22;
  MiAddLockedPageCharge(v23, 1);
  MiDereferenceControlAreaPfnList(v7, 0LL, v24, 2);
  MiCopyPage(v11, a3, 0LL, 6);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v25 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000);
  v26 = MI_READ_PTE_LOCK_FREE(v25 + 8LL * ((*(_DWORD *)(v5 + 8) >> 3) & 0x1FF));
  MiUpdateTransitionPteFrame(v26, v11);
  if ( !MiPteInShadowRange(v27) )
    goto LABEL_21;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v29 = 1;
    if ( HIBYTE(word_14043B26C) )
      goto LABEL_21;
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
  {
    goto LABEL_21;
  }
  if ( (v28 & 1) != 0 )
    v28 |= 0x8000000000000000uLL;
LABEL_21:
  *v30 = v28;
  if ( v29 )
    MiWritePteShadow((__int64)v30, v28);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v30, 0x11u, 0x80000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v13);
  return v11;
}
