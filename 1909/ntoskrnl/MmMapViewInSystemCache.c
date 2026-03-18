/*
 * XREFs of MmMapViewInSystemCache @ 0x140074DD0
 * Callers:
 *     CcGetVacbMiss @ 0x140076EB0 (CcGetVacbMiss.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1400226D8 (MiCompareTbFlushTimeStamp.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MiManageSubsectionView @ 0x1400750D0 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140075F40 (MiGetSystemCacheReverseMap.c)
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 *     MiGetPteLink @ 0x140076E80 (MiGetPteLink.c)
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiRemoveSystemCacheReferences @ 0x1402C507C (MiRemoveSystemCacheReferences.c)
 */

__int64 __fastcall MmMapViewInSystemCache(__int64 a1, __int64 *a2, _QWORD *a3, _DWORD *a4)
{
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // r14
  BOOL v10; // edx
  int v11; // ecx
  __int64 v12; // rbp
  __int64 *v13; // rsi
  __int64 result; // rax
  __int64 v15; // rcx
  _WORD *v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // r11
  _QWORD *SystemCacheReverseMap; // r13
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r11
  __int64 v38; // r11
  __int64 v39; // rax
  int PteLink; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // r10
  __int64 v46; // r10
  __int64 v47; // r10
  __int64 v48; // r10
  signed __int32 v49[8]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v50; // [rsp+30h] [rbp-138h] BYREF
  __int64 *v51; // [rsp+38h] [rbp-130h]
  __int64 *v52; // [rsp+40h] [rbp-128h]
  _QWORD v53[24]; // [rsp+50h] [rbp-118h] BYREF

  v52 = a2;
  memset(v53, 0, 0xB8uLL);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    return 3221225608LL;
  v8 = MiSectionControlArea(a1);
  v9 = v8;
  v10 = (*a4 & 0xFFF) != 0;
  v11 = *a4 >> 12;
  v12 = (unsigned int)(v10 + v11);
  if ( !(v10 + v11) )
    KeBugCheckEx(0x1Au, 0x103087uLL, v8, 0LL, 0LL);
  v51 = (__int64 *)MiOffsetToProtos(v8, *a3, &v50);
  v13 = v51;
  result = MiAddViewsForSection(v51, v12 + v50, 5);
  if ( (int)result < 0 )
  {
    ++dword_140466FA0;
    return result;
  }
  v15 = *(_WORD *)(v9 + 60) & 0x3FF;
  v16 = *(_WORD **)(qword_140465E88 + 8 * v15);
  if ( *a2 )
  {
    v18 = (((unsigned __int64)*a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( MiGetPteLink(*(_QWORD *)(v18 + 24)) == 2 )
    {
      PteLink = MiGetPteLink(*(_QWORD *)(v18 + 16));
      if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFF) )
      {
        LODWORD(v53[1]) = 20;
        v53[3] = 0LL;
        MiInsertTbFlushEntry((__int64)v53, (__int64)(v18 << 25) >> 16, 64LL, 0);
        MiFlushTbList((int *)v53, v41, v42, v43);
      }
    }
  }
  else
  {
    v17 = MiObtainSystemCacheView(*(_QWORD *)(qword_140465E88 + 8 * v15));
    v18 = v17;
    if ( !v17 )
    {
      ++dword_140466FA0;
      MiRemoveSystemCacheReferences((ULONG_PTR)v13);
      return 3221225495LL;
    }
    *a2 = v17 << 25 >> 16;
  }
  if ( !MiPteInShadowRange(v18) )
    goto LABEL_8;
  if ( !(unsigned int)MiPteHasShadow(v20) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v19 & 1) != 0 )
    {
      v19 |= v44;
    }
LABEL_8:
    *(_QWORD *)v18 = v19;
    goto LABEL_9;
  }
  if ( !HIBYTE(word_1404658EC) && (v19 & 1) != 0 )
    v19 |= v44;
  *(_QWORD *)v18 = v19;
  MiWritePteShadow(v18, v19);
LABEL_9:
  if ( !MiPteInShadowRange(v18 + 8) )
  {
LABEL_10:
    *(_QWORD *)(v18 + 8) = v21;
    goto LABEL_11;
  }
  if ( !(unsigned int)MiPteHasShadow(v22) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v21 & 1) != 0 )
    {
      v21 |= v45;
    }
    goto LABEL_10;
  }
  if ( !HIBYTE(word_1404658EC) && (v21 & 1) != 0 )
    v21 |= v45;
  *(_QWORD *)(v18 + 8) = v21;
  MiWritePteShadow(v18 + 8, v21);
LABEL_11:
  if ( !MiPteInShadowRange(v18 + 16) )
  {
LABEL_12:
    *(_QWORD *)(v18 + 16) = v23;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiPteHasShadow(v24) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v23 & 1) != 0 )
    {
      v23 |= v46;
    }
    goto LABEL_12;
  }
  if ( !HIBYTE(word_1404658EC) && (v23 & 1) != 0 )
    v23 |= v46;
  *(_QWORD *)(v18 + 16) = v23;
  MiWritePteShadow(v18 + 16, v23);
LABEL_13:
  if ( MiPteInShadowRange(v18 + 24) )
  {
    if ( (unsigned int)MiPteHasShadow(v26) )
    {
      if ( !HIBYTE(word_1404658EC) && (v25 & 1) != 0 )
        v25 |= v47;
      *(_QWORD *)(v18 + 24) = v25;
      MiWritePteShadow(v18 + 24, v25);
      goto LABEL_15;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v25 & 1) != 0 )
    {
      v25 |= v47;
    }
  }
  *(_QWORD *)(v18 + 24) = v25;
LABEL_15:
  v27 = v18 + 8 * v12;
  v28 = v13[1] + 8LL * *((unsigned int *)v13 + 11);
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(*a2, v25);
  v31 = (unsigned __int64)(*v16 & 0x3FF) << 6;
  v32 = *a3 >> 2;
  SystemCacheReverseMap[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  v33 = v12 & 0x3F | v32 & 0x3FFFFFFFFFFF0000LL | v31;
  v34 = (unsigned __int64)v51;
  SystemCacheReverseMap[3] = v51;
  SystemCacheReverseMap[4] = v33;
  if ( !*(_QWORD *)(v9 + 64) )
    SystemCacheReverseMap[3] = v34 | 1;
  for ( ; v18 < v27; v29 = v37 + 8 )
  {
    if ( v29 >= v28 )
    {
      v34 = *(_QWORD *)(v34 + 16);
      v38 = *(_QWORD *)(v34 + 8);
      v39 = *(unsigned int *)(v34 + 44);
      SystemCacheReverseMap[3] |= 1uLL;
      v28 = v38 + 8 * v39;
    }
    if ( MiPteInShadowRange(v18) )
    {
      if ( (unsigned int)MiPteHasShadow(v36) )
      {
        if ( !HIBYTE(word_1404658EC) && (v35 & 1) != 0 )
          v35 |= v48;
        *(_QWORD *)v18 = v35;
        MiWritePteShadow(v18, v35);
        goto LABEL_22;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v35 & 1) != 0 )
      {
        v35 |= v48;
      }
    }
    *(_QWORD *)v18 = v35;
LABEL_22:
    v18 += 8LL;
  }
  _InterlockedOr(v49, 0);
  SystemCacheReverseMap[2] = *v52;
  MiManageSubsectionView(v34, SystemCacheReverseMap, (2 * (unsigned __int8)SystemCacheReverseMap[3]) & 2 | 1u);
  return 0LL;
}
