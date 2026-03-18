/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x14002CE60
 * Callers:
 *     MiReservePageFileSpace @ 0x14002F390 (MiReservePageFileSpace.c)
 *     MiOutSwapWorkingSetPte @ 0x1400C51D0 (MiOutSwapWorkingSetPte.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F4A0 (MiIncreaseUsedPtesCount.c)
 *     MI_IS_RESET_PTE @ 0x140023DF0 (MI_IS_RESET_PTE.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x14002DAB0 (MiGetUsedPtesHandle.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiSetNonResidentPteHeat @ 0x1400DBAC0 (MiSetNonResidentPteHeat.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiLockLeafPage @ 0x1400DC870 (MiLockLeafPage.c)
 *     MiInvalidPteConforms @ 0x1400DD400 (MiInvalidPteConforms.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(__int64 a1, unsigned __int64 a2, char a3, _WORD *a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbx
  __int64 v7; // rsi
  BOOL v9; // r12d
  ULONG_PTR v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  unsigned int v16; // r9d
  unsigned __int64 v17; // r8
  char v18; // dl
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // r11
  bool v26; // cf
  unsigned __int64 v27; // rbx
  __int64 v28; // r8
  __int64 updated; // rax
  __int16 v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v32; // r11
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 UsedPtesHandle; // rax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // [rsp+20h] [rbp-58h] BYREF
  __int64 v41; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+30h] [rbp-48h] BYREF
  int v45; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v5 = a2;
  v7 = 0LL;
  v45 = 0;
  while ( 1 )
  {
    v9 = 0;
    if ( a3 >= 0 )
    {
      v10 = MiLockLeafPage(v5, 0LL);
      v9 = v10 != 0;
    }
    else
    {
      v10 = 0LL;
    }
    v11 = MI_READ_PTE_LOCK_FREE(v5);
    v41 = v11;
    v15 = v11;
    if ( (v11 & 1) != 0 )
      break;
    if ( (v11 & 0x400) != 0 )
      goto LABEL_64;
    if ( (v11 & 0x800) == 0 )
    {
      if ( !v11 )
      {
        if ( (a3 & 2) != 0 )
        {
          v34 = MiSwizzleInvalidPte(8LL * (a3 & 0x7C), v12, v13, v14);
          v16 = 1;
          v41 = v34;
          v45 = 1;
          v15 = v34;
          goto LABEL_18;
        }
        goto LABEL_64;
      }
      v20 = MiInvalidPteConforms(v11);
      v16 = 1;
      if ( !v20 || ((v15 >> 5) & 0xF) == 0 )
        goto LABEL_21;
LABEL_18:
      if ( (v15 & 2) == 0 )
      {
        if ( v10 && (*(_BYTE *)(v10 + 34) & 0x28) != 0 )
          goto LABEL_21;
        if ( (v15 & 4) == 0 )
        {
LABEL_33:
          if ( (a3 & 1) == 0 )
          {
            v21 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a4) >> 4) + 7904);
            v42 = v15;
            MiSetNonResidentPteHeat(&v42, 0LL);
            v26 = (v15 & 0x400) != 0;
            v27 = v42;
            if ( !v26 )
            {
              v27 = v42 & 0xFFFFFFFFFFFFFFF9uLL;
              v42 &= 0xFFFFFFFFFFFFFFF9uLL;
            }
            if ( v21 )
            {
              v28 = *(unsigned __int16 *)(v21 + 204);
              if ( v27 )
                updated = MiUpdatePageFileHighInPte(v27, v25, v28);
              else
                updated = MiSwizzleInvalidPte(v24 & 0xFFFFFFFF00000000uLL, v22, v28, v23);
              v27 = updated ^ (unsigned __int16)(updated ^ (v30 << 12)) & 0xF000 | 2;
              v42 = v27;
            }
            if ( !v10 )
            {
              if ( MiPteInShadowRange(a2) )
              {
                if ( (unsigned int)MiPteHasShadow(v33) )
                {
                  if ( !HIBYTE(word_140465BEC) && (v27 & 1) != 0 )
                    v27 |= 0x8000000000000000uLL;
                  *(_QWORD *)v32 = v27;
                  MiWritePteShadow(v32, v27);
                  goto LABEL_47;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                  && (v27 & 1) != 0 )
                {
                  v27 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v32 = v27;
              goto LABEL_47;
            }
            if ( !*(_WORD *)(v10 + 32) && (*(_BYTE *)(v10 + 34) & 0x10) != 0 && !v4 )
            {
              MiUnlinkPageFromList(v10);
              v4 = 1;
            }
            if ( MiPteInShadowRange(v10 + 16) )
            {
              if ( !(unsigned int)MiPteHasShadow(v31) )
              {
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                  && (v27 & 1) != 0 )
                {
                  v27 |= 0x8000000000000000uLL;
                }
                goto LABEL_43;
              }
              if ( !HIBYTE(word_140465BEC) && (v27 & 1) != 0 )
                v27 |= 0x8000000000000000uLL;
              *(_QWORD *)(v10 + 16) = v27;
              MiWritePteShadow(v10 + 16, v27);
            }
            else
            {
LABEL_43:
              *(_QWORD *)(v10 + 16) = v27;
            }
            if ( v4 )
              MiInsertPageInList(v10, 8u);
            v32 = a2;
LABEL_47:
            if ( v45 && v32 <= 0xFFFFF6BFFFFFFF78uLL && v32 >= 0xFFFFF68000000000uLL )
            {
              UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v32 << 25) >> 16);
              MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
            }
          }
LABEL_48:
          v16 = 1;
          v4 = 1;
          goto LABEL_21;
        }
        if ( !v10 )
          goto LABEL_21;
        if ( (a3 & 1) != 0 )
          goto LABEL_48;
        if ( *(_WORD *)(v10 + 32) )
        {
LABEL_75:
          v7 = MiCapturePageFileInfoInline(v10 + 16, v16);
          *(_BYTE *)(v10 + 34) |= 0x10u;
          goto LABEL_33;
        }
        if ( (unsigned int)MiUnlinkPageFromList(v10) )
        {
          v16 = 1;
          v4 = 1;
          goto LABEL_75;
        }
        MiDiscardTransitionPteEx(v10, 0LL);
LABEL_64:
        v16 = 1;
        goto LABEL_21;
      }
      if ( (a3 & 1) != 0 )
        *(_QWORD *)a4 = v15;
      goto LABEL_21;
    }
    if ( a3 >= 0 )
    {
      v16 = 1;
      goto LABEL_57;
    }
    v5 = a2;
    v35 = MiLockTransitionLeafPage(a2);
    v10 = v35;
    if ( v35 )
    {
      v16 = 1;
      v9 = 1;
      if ( (*(_QWORD *)(v35 + 40) & 0x200000000000000LL) != 0 )
        goto LABEL_25;
LABEL_57:
      if ( *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == a1 )
      {
        v41 = MI_READ_PTE_LOCK_FREE(v10 + 16);
        v15 = v41;
        if ( !MI_IS_RESET_PTE(v41) || (*(_BYTE *)(v10 + 34) & 0x10) != 0 )
          goto LABEL_18;
      }
      goto LABEL_21;
    }
  }
  if ( a3 >= 0 )
  {
    v16 = 1;
  }
  else
  {
    v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v16 = 1;
    if ( (a3 & 1) == 0 )
    {
      v40 = 0;
      v9 = 1;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v40);
          while ( *(__int64 *)(v10 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
        v16 = 1;
      }
    }
    if ( (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) != 0 )
      goto LABEL_21;
  }
  if ( (*(_BYTE *)v10 & 1) != 0
    && *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)) == a1
    && (*(_BYTE *)(v10 + 35) & 8) == 0 )
  {
    v15 = *(_QWORD *)(v10 + 16);
    if ( MiPteInShadowRange(v10 + 16)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v38 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v17 >> 3) & 0x1FF));
        v39 = v15 | 0x20;
        if ( (v38 & 0x20) == 0 )
          v39 = v15;
        v15 = v39;
        if ( (v38 & 0x42) != 0 )
          v15 = v39 | 0x42;
      }
    }
    v41 = v15;
    if ( (v15 & 1) == 0
      && (!v15 || !qword_140465B00 || (qword_140465B00 & v15) != 0)
      && (!MI_IS_RESET_PTE(v15) || (*(_BYTE *)(v10 + 34) & 0x10) != 0 || a3 < 0 && (v18 & 0x42) != 0) )
    {
      goto LABEL_18;
    }
  }
LABEL_21:
  if ( !v9 )
    goto LABEL_22;
LABEL_25:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
  if ( v7 )
    MiReleasePageFileInfo(a1, v7, v16);
  return v4;
}
