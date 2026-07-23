/*
 * XREFs of MmMapViewInSystemCache @ 0x1400AD870
 * Callers:
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiCompareTbFlushTimeStamp @ 0x14009825C (MiCompareTbFlushTimeStamp.c)
 *     MiObtainSystemCacheView @ 0x1400AD160 (MiObtainSystemCacheView.c)
 *     MiGetPteLink @ 0x1400AD6E4 (MiGetPteLink.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiRemoveSystemCacheReferences @ 0x1402AC2CC (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, _QWORD *a3)
{
  int v3; // eax
  ULONG_PTR v6; // rax
  _DWORD *v7; // r9
  ULONG_PTR v8; // r15
  BOOL v9; // edx
  int v10; // ecx
  __int64 v11; // r14
  __int64 *v12; // rbp
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int16 *v17; // r12
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rbp
  __int64 SystemCacheReverseMap; // r11
  unsigned __int64 Process; // rcx
  __int16 v34; // dx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r14
  __int128 v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rax
  int PteLink; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r11
  __int64 v45; // r11
  __int64 v46; // r11
  __int64 v47; // r11
  signed __int32 v49[8]; // [rsp+0h] [rbp-178h] BYREF
  __int64 v50; // [rsp+30h] [rbp-148h] BYREF
  __int64 *v51; // [rsp+38h] [rbp-140h]
  __int128 v52; // [rsp+40h] [rbp-138h]
  __int64 *v53; // [rsp+50h] [rbp-128h]
  int v54; // [rsp+60h] [rbp-118h] BYREF
  __int16 v55; // [rsp+64h] [rbp-114h]
  __int64 v56; // [rsp+68h] [rbp-110h]
  __int64 v57; // [rsp+70h] [rbp-108h]
  __int64 v58; // [rsp+78h] [rbp-100h]

  v3 = *(_DWORD *)(a1 + 56);
  v51 = a2;
  if ( (v3 & 0x20) != 0 )
    return 3221225608LL;
  v6 = MiSectionControlArea(a1);
  v8 = v6;
  v9 = (*v7 & 0xFFF) != 0;
  v10 = *v7 >> 12;
  v11 = (unsigned int)(v9 + v10);
  if ( !(v9 + v10) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v6, 0LL, 0LL);
  v53 = (__int64 *)MiOffsetToProtos(v6, *a3, &v50);
  v12 = v53;
  result = MiAddViewsForSection(v53, v11 + v50, 5LL);
  if ( (int)result < 0 )
  {
    ++dword_14043C860;
    return result;
  }
  v16 = *(_WORD *)(v8 + 60) & 0x3FF;
  v17 = *(__int16 **)(qword_14043B808 + 8 * v16);
  if ( *a2 )
  {
    v19 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v19 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v19 + 16));
      if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
      {
        v56 = 20LL;
        v54 = 0;
        v55 = 0;
        v57 = 0LL;
        v58 = 0LL;
        MiInsertTbFlushEntry(&v54, (__int64)(v19 << 25) >> 16, 64LL);
        MiFlushTbList(&v54, v41, v42, v43);
      }
    }
  }
  else
  {
    v18 = (unsigned __int64)MiObtainSystemCacheView(*(_QWORD *)(qword_14043B808 + 8 * v16), v14, v15);
    v19 = v18;
    if ( !v18 )
    {
      ++dword_14043C860;
      MiRemoveSystemCacheReferences((ULONG_PTR)v12);
      return 3221225495LL;
    }
    *a2 = (__int64)(v18 << 25) >> 16;
  }
  if ( !MiPteInShadowRange(v19) )
    goto LABEL_8;
  if ( !(unsigned int)MiPteHasShadow(v21, v20) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v20 & 1) != 0 )
    {
      v20 |= v44;
    }
LABEL_8:
    *(_QWORD *)v19 = v20;
    goto LABEL_9;
  }
  if ( !HIBYTE(word_14043B26C) && (v20 & 1) != 0 )
    v20 |= v44;
  *(_QWORD *)v19 = v20;
  MiWritePteShadow(v19);
LABEL_9:
  if ( !MiPteInShadowRange(v19 + 8) )
  {
LABEL_10:
    *(_QWORD *)(v19 + 8) = v22;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiPteHasShadow(v23, v22) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v22 & 1) != 0 )
    {
      v22 |= v45;
    }
    goto LABEL_10;
  }
  if ( !HIBYTE(word_14043B26C) && (v22 & 1) != 0 )
    v22 |= v45;
  *(_QWORD *)(v19 + 8) = v22;
  MiWritePteShadow(v19 + 8);
LABEL_11:
  if ( !MiPteInShadowRange(v19 + 16) )
  {
LABEL_12:
    *(_QWORD *)(v19 + 16) = v24;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiPteHasShadow(v25, v24) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v24 & 1) != 0 )
    {
      v24 |= v46;
    }
    goto LABEL_12;
  }
  if ( !HIBYTE(word_14043B26C) && (v24 & 1) != 0 )
    v24 |= v46;
  *(_QWORD *)(v19 + 16) = v24;
  MiWritePteShadow(v19 + 16);
LABEL_13:
  if ( MiPteInShadowRange(v19 + 24) )
  {
    if ( (unsigned int)MiPteHasShadow(v27, v26) )
    {
      if ( !HIBYTE(word_14043B26C) && (v26 & 1) != 0 )
        v26 |= v47;
      *(_QWORD *)(v19 + 24) = v26;
      MiWritePteShadow(v19 + 24);
      goto LABEL_15;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v26 & 1) != 0 )
    {
      v26 |= v47;
    }
  }
  *(_QWORD *)(v19 + 24) = v26;
LABEL_15:
  v28 = v12[1];
  v29 = v19 + 8 * v11;
  v30 = v28 + 8 * v50;
  v31 = v28 + 8LL * *((unsigned int *)v12 + 11);
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(*v51);
  *((_QWORD *)&v52 + 1) = *((_QWORD *)&v52 + 1) & 0xFFFF000000000000uLL | (*a3 >> 18);
  Process = v52 & 0xFFFFFFFFFFFF0000uLL;
  v34 = *v17;
  *(_QWORD *)(SystemCacheReverseMap + 16) &= 0xFFFFFFFFFFFFFFFCuLL;
  v35 = v11 & 0x3F | Process | ((unsigned __int64)(v34 & 0x3FF) << 6);
  v36 = (unsigned __int64)v53;
  *(_QWORD *)&v52 = v35;
  v37 = v52;
  *(_QWORD *)(SystemCacheReverseMap + 24) = v53;
  *(_OWORD *)(SystemCacheReverseMap + 32) = v37;
  if ( !*(_QWORD *)(v8 + 64) )
    *(_QWORD *)(SystemCacheReverseMap + 24) = v36 | 1;
  for ( ; v19 < v29; v30 += 8LL )
  {
    if ( v30 >= v31 )
    {
      v36 = *(_QWORD *)(v36 + 16);
      v30 = *(_QWORD *)(v36 + 8);
      v39 = *(unsigned int *)(v36 + 44);
      *(_QWORD *)(SystemCacheReverseMap + 24) |= 1uLL;
      v31 = v30 + 8 * v39;
    }
    v38 = (v30 << 16) | 0x400;
    if ( qword_14043B180 )
    {
      if ( (qword_14043B180 & v38) != 0 )
        v38 = (v30 << 16) | 0x410;
      else
        v38 |= qword_14043B180;
    }
    if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(Process, v38) )
      {
        if ( !HIBYTE(word_14043B26C) && (v38 & 1) != 0 )
          v38 |= 0x8000000000000000uLL;
        *(_QWORD *)v19 = v38;
        MiWritePteShadow(v19);
        goto LABEL_25;
      }
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(Process + 1740) & 0x1000) != 0 && (v38 & 1) != 0 )
        v38 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v19 = v38;
LABEL_25:
    v19 += 8LL;
  }
  _InterlockedOr(v49, 0);
  *(_QWORD *)(SystemCacheReverseMap + 16) = *v51;
  MiManageSubsectionView(
    v36,
    SystemCacheReverseMap,
    (2 * (unsigned __int8)*(_QWORD *)(SystemCacheReverseMap + 24)) & 2 | 1u);
  return 0LL;
}
