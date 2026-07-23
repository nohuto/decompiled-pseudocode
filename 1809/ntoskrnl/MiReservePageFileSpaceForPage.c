/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1400817F0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x14003DD60 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x140081310 (MiReservePageFileSpace.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MI_IS_RESET_PTE @ 0x140081D30 (MI_IS_RESET_PTE.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiReservePageFileSpaceForPage(struct _KEVENT *a1, unsigned __int64 a2, char a3, _WORD *a4)
{
  unsigned int v4; // ebp
  __int64 *v5; // rbx
  unsigned __int64 v9; // rsi
  BOOL v10; // r15d
  ULONG_PTR v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  char v21; // dl
  BOOL v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r10
  __int64 v26; // r11
  bool v27; // cf
  __int64 v28; // rbx
  __int64 updated; // rax
  __int16 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // r11
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r8
  int v45; // [rsp+20h] [rbp-58h] BYREF
  __int64 v46; // [rsp+28h] [rbp-50h] BYREF
  __int64 v47; // [rsp+30h] [rbp-48h] BYREF
  int v49; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v5 = (__int64 *)a2;
  v9 = 0LL;
  v49 = 0;
  while ( 1 )
  {
    v10 = 0;
    if ( a3 >= 0 )
    {
      v11 = MiLockLeafPage(v5, 0);
      v10 = v11 != 0;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
    v46 = v12;
    v13 = v12;
    if ( (v12 & 1) != 0 )
      break;
    if ( (v12 & 0x400) != 0 )
      goto LABEL_66;
    if ( (v12 & 0x800) == 0 )
    {
      if ( !v12 )
      {
        if ( (a3 & 2) != 0 )
        {
          v40 = MiSwizzleInvalidPte(8LL * (a3 & 0x7C));
          v16 = 1;
          v46 = v40;
          v49 = 1;
          v13 = v40;
          goto LABEL_15;
        }
        goto LABEL_66;
      }
      v23 = MiInvalidPteConforms(v12);
      v16 = 1;
      if ( !v23 || ((v13 >> 5) & 0xF) == 0 )
        goto LABEL_18;
LABEL_15:
      if ( (v13 & 2) == 0 )
      {
        if ( v11 && (*(_BYTE *)(v11 + 34) & 0x28) != 0 )
          goto LABEL_18;
        if ( (v13 & 4) == 0 )
        {
LABEL_30:
          if ( (a3 & 1) == 0 )
          {
            v24 = *((_QWORD *)&a1[297].Header.WaitListHead.Flink + ((unsigned __int8)HIBYTE(*a4) >> 4));
            v47 = v13;
            MiSetNonResidentPteHeat(&v47, 0LL);
            v27 = (v13 & 0x400) != 0;
            v28 = v47;
            if ( !v27 )
            {
              v28 = v47 & 0xFFFFFFFFFFFFFFF9uLL;
              v47 &= 0xFFFFFFFFFFFFFFF9uLL;
            }
            if ( v24 )
            {
              if ( v28 )
                updated = MiUpdatePageFileHighInPte(v28, v26);
              else
                updated = MiSwizzleInvalidPte(v25 & 0xFFFFFFFF00000000uLL);
              v28 = updated ^ (unsigned __int16)(updated ^ (v30 << 12)) & 0xF000 | 2;
              v47 = v28;
            }
            if ( !v11 )
            {
              if ( MiPteInShadowRange(a2) )
              {
                if ( (unsigned int)MiPteHasShadow(v39, v38) )
                {
                  if ( !HIBYTE(word_14043B26C) && (v28 & 1) != 0 )
                    v28 |= 0x8000000000000000uLL;
                  *(_QWORD *)v34 = v28;
                  MiWritePteShadow(v34);
                  goto LABEL_44;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v28 & 1) != 0 )
                {
                  v28 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v34 = v28;
              goto LABEL_44;
            }
            if ( !*(_WORD *)(v11 + 32) && (*(_BYTE *)(v11 + 34) & 0x10) != 0 && !v4 )
            {
              MiUnlinkPageFromList(v11, 0);
              v4 = 1;
            }
            if ( MiPteInShadowRange(v11 + 16) )
            {
              if ( !(unsigned int)MiPteHasShadow(v32, v31) )
              {
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v28 & 1) != 0 )
                {
                  v28 |= 0x8000000000000000uLL;
                }
                goto LABEL_40;
              }
              if ( !HIBYTE(word_14043B26C) && (v28 & 1) != 0 )
                v28 |= 0x8000000000000000uLL;
              *(_QWORD *)(v11 + 16) = v28;
              MiWritePteShadow(v11 + 16);
            }
            else
            {
LABEL_40:
              *(_QWORD *)(v11 + 16) = v28;
            }
            if ( v4 )
              MiInsertPageInList(v11, 8);
            v34 = a2;
LABEL_44:
            if ( v49 && v34 <= 0xFFFFF6BFFFFFFF78uLL && v34 >= 0xFFFFF68000000000uLL )
            {
              UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v34 << 25) >> 16, 0xFFFFF68000000000uLL, v33);
              MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
            }
          }
LABEL_45:
          LOBYTE(v16) = 1;
          v4 = 1;
          goto LABEL_18;
        }
        if ( !v11 )
          goto LABEL_18;
        if ( (a3 & 1) != 0 )
          goto LABEL_45;
        if ( *(_WORD *)(v11 + 32) )
        {
LABEL_72:
          v9 = MiCapturePageFileInfoInline(v11 + 16, v16);
          *(_BYTE *)(v11 + 34) |= 0x10u;
          goto LABEL_30;
        }
        if ( (unsigned int)MiUnlinkPageFromList(v11, 0) )
        {
          v16 = 1;
          v4 = 1;
          goto LABEL_72;
        }
        MiDiscardTransitionPte(v11);
LABEL_66:
        LOBYTE(v16) = 1;
        goto LABEL_18;
      }
      if ( (a3 & 1) != 0 )
        *(_QWORD *)a4 = v13;
      goto LABEL_18;
    }
    if ( a3 >= 0 )
    {
      LOBYTE(v16) = 1;
      goto LABEL_49;
    }
    v5 = (__int64 *)a2;
    v35 = MiLockTransitionLeafPage(a2);
    v11 = v35;
    if ( v35 )
    {
      LOBYTE(v16) = 1;
      v10 = 1;
      if ( (*(_QWORD *)(v35 + 40) & 0x200000000000000LL) != 0 )
        goto LABEL_22;
LABEL_49:
      if ( *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)) == a1 )
      {
        v46 = MI_READ_PTE_LOCK_FREE(v11 + 16);
        v13 = v46;
        if ( !(unsigned int)MI_IS_RESET_PTE(v46, v36, v37) || (*(_BYTE *)(v11 + 34) & 0x10) != 0 )
          goto LABEL_15;
      }
      goto LABEL_18;
    }
  }
  if ( a3 >= 0 )
  {
    LOBYTE(v16) = 1;
  }
  else
  {
    v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v46) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    LOBYTE(v16) = 1;
    if ( (a3 & 1) == 0 )
    {
      v45 = 0;
      v10 = 1;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v45, v14, v15);
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
        LOBYTE(v16) = 1;
      }
    }
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) != 0 )
      goto LABEL_18;
  }
  if ( (*(_BYTE *)v11 & 1) != 0
    && *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v11 + 40) >> 40) & 0x3FFLL)) == a1
    && (*(_BYTE *)(v11 + 35) & 8) == 0 )
  {
    v13 = *(_QWORD *)(v11 + 16);
    if ( MiPteInShadowRange(v11 + 16)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 8 * ((v17 >> 3) & 0x1FF));
        v44 = v13 | 0x20;
        if ( (v43 & 0x20) == 0 )
          v44 = v13;
        v13 = v44;
        if ( (v43 & 0x42) != 0 )
          v13 = v44 | 0x42;
      }
    }
    v46 = v13;
    if ( MiInvalidPteConforms(v13)
      && (!(unsigned int)MI_IS_RESET_PTE(v19, v18, v20)
       || (*(_BYTE *)(v11 + 34) & 0x10) != 0
       || a3 < 0 && (v21 & 0x42) != 0) )
    {
      goto LABEL_15;
    }
  }
LABEL_18:
  if ( !v10 )
    goto LABEL_19;
LABEL_22:
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_19:
  if ( v9 )
    MiReleasePageFileInfo(a1, v9, v16);
  return v4;
}
