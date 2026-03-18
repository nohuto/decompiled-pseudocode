/*
 * XREFs of MiSplitDirectMapPage @ 0x1402CCD08
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x1400C328C (MiUpdateTransitionPteFrame.c)
 *     MiAddLockedPageCharge @ 0x1400CBA88 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A020 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 */

ULONG_PTR __fastcall MiSplitDirectMapPage(_WORD *a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  signed __int32 v6; // r8d
  __int64 v7; // r13
  unsigned int v8; // esi
  __int64 i; // r14
  __int64 Page; // rax
  ULONG_PTR v11; // rdi
  __int64 v12; // rsi
  unsigned __int8 v13; // r14
  __int128 v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // r11
  __int64 v23; // rdx
  int v24; // r8d
  __int64 *v25; // r11
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v28; // [rsp+38h] [rbp-29h] BYREF
  __int128 v29; // [rsp+48h] [rbp-19h] BYREF
  __m128i v30; // [rsp+58h] [rbp-9h]
  _QWORD v31[6]; // [rsp+68h] [rbp+7h] BYREF

  v5 = 48 * a3 - 0x58000000000LL;
  v6 = _InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u);
  v7 = *(_QWORD *)a1;
  v8 = *(_DWORD *)(a2 + 8) & v6 | *(_DWORD *)(a2 + 12);
  for ( i = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)); ; MiWaitForFreePage(i) )
  {
    Page = MiGetPage(i, v8, 0LL);
    v11 = Page;
    if ( Page != -1 )
      break;
  }
  v12 = 48 * Page - 0x58000000000LL;
  v13 = MiLockPageInline(v5);
  MiLockNestedPageAtDpcInline(v12);
  MiFinalizePageAttribute(v12, *(unsigned __int8 *)(v5 + 34) >> 6, 1u);
  v14 = *(_OWORD *)(v5 + 16);
  v28 = *(_OWORD *)v5;
  v15 = *(__m128i *)(v5 + 32);
  v29 = v14;
  v30 = v15;
  memset(v31, 0, sizeof(v31));
  v15.m128i_i64[0] = _mm_srli_si128(v15, 8).m128i_u64[0];
  v16 = v15.m128i_i64[0] ^ *(_QWORD *)(v12 + 40);
  v30.m128i_i64[1] = v15.m128i_i64[0];
  v31[5] = *(_QWORD *)(v12 + 40) ^ v16 & 0x3FFFFFFFFFFFFFFLL;
  v30.m128i_i64[1] = v31[5];
  LOWORD(v16) = a1[16];
  v30.m128i_i64[1] = v31[5] & 0xFFEFFFFFFFFFFFFFuLL;
  MiSwizzleInvalidPte(16 * (v16 & 0x3E));
  if ( !MiPteInShadowRange((unsigned __int64)&v29) )
  {
LABEL_13:
    *(_QWORD *)&v29 = v17;
    goto LABEL_14;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v17 & 1) != 0 )
    {
      v17 |= v18;
    }
    goto LABEL_13;
  }
  if ( !HIBYTE(word_1404658EC) && (v17 & 1) != 0 )
    v17 |= v18;
  *(_QWORD *)&v29 = v17;
  MiWritePteShadow((__int64)&v29);
LABEL_14:
  MiCopyPfnEntryEx(v12, &v28);
  *(_BYTE *)(v12 + 34) |= 0x10u;
  *(_WORD *)(v12 + 32) = 0;
  MiAddLockedPageCharge(v12, 1);
  MiDereferenceControlAreaPfnList(v7, 0LL, v19, 2);
  MiCopyPage(v11, a3, 0LL, 6);
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v20 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000);
  v21 = MI_READ_PTE_LOCK_FREE(v20 + 8LL * ((*(_DWORD *)(v5 + 8) >> 3) & 0x1FF));
  MiUpdateTransitionPteFrame(v21, v11);
  if ( !MiPteInShadowRange(v22) )
    goto LABEL_21;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v24 = 1;
    if ( HIBYTE(word_1404658EC) )
      goto LABEL_21;
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
  {
    goto LABEL_21;
  }
  if ( (v23 & 1) != 0 )
    v23 |= 0x8000000000000000uLL;
LABEL_21:
  *v25 = v23;
  if ( v24 )
    MiWritePteShadow((__int64)v25);
  LOBYTE(v23) = 17;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v25, v23, 0x80000000LL);
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
