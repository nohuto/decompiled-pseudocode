/*
 * XREFs of MiActOnPte @ 0x14009404C
 * Callers:
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 * Callees:
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MI_IS_RESET_PTE @ 0x140081D30 (MI_IS_RESET_PTE.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiUpdatePfnPriority @ 0x140082AA8 (MiUpdatePfnPriority.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiGetVaAge @ 0x1400880A0 (MiGetVaAge.c)
 *     MI_CLEAR_RESET_PTE @ 0x140093824 (MI_CLEAR_RESET_PTE.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400946E4 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiUpdateWsleAge @ 0x1400947F4 (MiUpdateWsleAge.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiCheckUserVirtualAddress @ 0x140098DE0 (MiCheckUserVirtualAddress.c)
 *     MiSharedVaToPartition @ 0x14010982C (MiSharedVaToPartition.c)
 *     MiUpdatePageTableUseCount @ 0x14010FC78 (MiUpdatePageTableUseCount.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 *a4,
        int a5,
        __int64 a6,
        struct _KEVENT **a7,
        __int64 *a8)
{
  __int64 *v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  _KPROCESS *Process; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // r15d
  struct _KEVENT *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r11
  int v20; // r15d
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // rbx
  __int64 v25; // rdx
  char v26; // cl
  char v27; // dl
  __int64 *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r8d
  unsigned __int64 v33; // rsi
  __int64 v34; // rcx
  char updated; // al
  __int64 v36; // r8
  __int64 v37; // r12
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned int v40; // r9d
  char v41; // al
  unsigned int v42; // esi
  BOOL v43; // edi
  __int16 v44; // r9
  _DWORD *v45; // r11
  char v46; // al
  int v47; // eax
  ULONG_PTR v48; // rcx
  __int16 v49; // dx
  unsigned int v50; // edi
  char v51; // al
  __int64 *v52; // r14
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // r9d
  __int64 *v57; // r14
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // r9d
  int v62; // r11d
  bool v63; // zf
  char v64; // r8
  bool v65; // zf
  char v66; // r8
  bool v67; // zf
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // r9d
  char v72; // r8
  bool v73; // zf
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // r8d
  char v80; // r9
  bool v81; // zf
  int v82; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v83; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int16 *v84; // [rsp+30h] [rbp-10h]
  int v87; // [rsp+98h] [rbp+58h] BYREF

  v8 = a4;
  v9 = (unsigned __int64)a4;
  v10 = a3;
  *a8 = 0LL;
  if ( !a4 )
    v9 = a3;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v84 = &Process[1].IdealNode[12];
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = MI_READ_PTE_LOCK_FREE(v9);
      v83 = v12;
      v13 = v12;
      if ( (v12 & 1) == 0 )
        break;
      v20 = a5;
      if ( !v8 )
      {
        v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v83) >> 12) & 0xFFFFFFFFFLL);
        if ( ((*(_QWORD *)(v21 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
          return 3221226548LL;
        v24 = v21 - 0x58000000000LL;
        v25 = *(_QWORD *)(v21 - 0x58000000000LL + 8);
        if ( v25 >= 0 )
        {
          if ( v20 == 1 )
            return 3221226548LL;
          if ( !v20 )
            return 274LL;
        }
        else if ( MiLocateCloneAddress(Process, v25 | 0x8000000000000000uLL) )
        {
          return 3221226548LL;
        }
        v82 = v23;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v82, v25, v22);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
          v20 = a5;
        }
        if ( (*(_BYTE *)(a1 + 48) & 7) == 6 && (unsigned int)MiRotatedToFrameBuffer(v10) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
LABEL_27:
        if ( v20 == 2 )
        {
          updated = MiUpdatePfnPriority(v24);
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v37 = (__int64)v84;
          if ( updated != -1 && !v8 )
          {
            LOBYTE(v36) = updated;
            MiUpdateWsleAge(v84, v10, v36);
          }
          v38 = *(_QWORD *)(v24 + 8);
          if ( v38 >= 0 && !v8 )
            MiDemoteCombinedPte(v37, v10, v38 | 0x8000000000000000uLL);
          return 0LL;
        }
        v26 = *(_BYTE *)(v24 + 34);
        if ( (v26 & 8) != 0 )
        {
          v50 = -1073740748;
          goto LABEL_62;
        }
        v27 = v26 & 0x10;
        if ( v20 == 1 )
        {
          if ( !v27 && (*(_DWORD *)(v24 + 16) & 4) == 0 )
            *(_BYTE *)(v24 + 34) = v26 | 0x10;
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v24 + 16)) )
            MI_CLEAR_RESET_PTE(v24 + 16);
          else
            v62 = -1073740748;
          v50 = v62;
          goto LABEL_62;
        }
        if ( v27 )
          *(_BYTE *)(v24 + 34) = v26 & 0xEF;
        v28 = (__int64 *)(v24 + 16);
        v29 = MiCapturePageFileInfoInline(v24 + 16, 1LL);
        *a8 = v29;
        if ( v29 )
          *a7 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL));
        MiUpdatePageFileHighInPte(*v28, 1LL);
        if ( !MiPteInShadowRange(v24 + 16) )
        {
LABEL_35:
          *v28 = v30;
          if ( v32 )
            MiWritePteShadow(v24 + 16);
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v8 || (v83 & 0x42) == 0 )
            return 0LL;
          MiWriteValidPteNewProtection(v10, v83 & 0xFFFFFFFFFFFFFF9DuLL);
          v33 = (__int64)(v10 << 25) >> 16;
          if ( (unsigned __int8)MiGetVaAge(v34, v33) < 7u )
            MiSetVaAgeList((__int64)v84, v33, 1u, 1u);
          return 3221225505LL;
        }
        if ( (unsigned int)MiPteHasShadow(v31, v30) )
        {
          v32 = 1;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_35;
          v63 = (v30 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
            goto LABEL_35;
          v63 = (v30 & 1) == 0;
        }
        if ( !v63 )
          v30 |= 0x8000000000000000uLL;
        goto LABEL_35;
      }
      v24 = MiLockLeafPage(v8, 0);
      if ( v24 )
      {
        v83 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
        if ( (v83 & 1) != 0 )
          goto LABEL_27;
LABEL_101:
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v12 & 0x400) != 0 )
      return 0LL;
    if ( (v12 & 0x800) == 0 )
      break;
    if ( v8 )
      v39 = MiLockLeafPage(v8, 0);
    else
      v39 = MiLockTransitionLeafPage(v10);
    v40 = 0;
    v24 = v39;
    if ( v39 )
    {
      if ( v8 )
      {
        v83 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
        if ( (v83 & 1) != 0 )
          goto LABEL_101;
      }
      if ( a5 == 2 )
      {
        MiUpdatePfnPriority(v24);
        v50 = 0;
        goto LABEL_62;
      }
      v41 = *(_BYTE *)(v24 + 34);
      v42 = v40;
      if ( (v41 & 7) == 2 )
      {
        if ( a5 == 1 )
        {
          v43 = MI_IS_RESET_PTE(*(_QWORD *)(v24 + 16));
          if ( v43 )
          {
            MI_CLEAR_RESET_PTE((unsigned __int64)v45);
            v44 = 0;
          }
          v42 = v43 ? 0 : 0xC0000434;
          if ( (*v45 & 4) != 0 )
            goto LABEL_61;
          v46 = *(_BYTE *)(v24 + 34) | 0x10;
          *(_BYTE *)(v24 + 34) = v46;
          if ( *(_WORD *)(v24 + 32) != v44 )
          {
            *(_BYTE *)(v24 + 34) = v46 & 0xF8 | 3;
            goto LABEL_61;
          }
          v47 = MiUnlinkPageFromList(v24, 0);
          v48 = v24;
          if ( !v47 )
          {
            MiDiscardTransitionPte(v24);
            v42 = -1073740748;
            goto LABEL_61;
          }
          v49 = 8;
          goto LABEL_60;
        }
        if ( (v41 & 0x28) != 0 )
          goto LABEL_61;
        v57 = (__int64 *)(v24 + 16);
        v58 = MiCapturePageFileInfoInline(v24 + 16, 1LL);
        *a8 = v58;
        if ( v58 )
          *a7 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL));
        v83 = MiUpdatePageFileHighInPte(*v57, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        if ( !MiPteInShadowRange(v24 + 16) )
        {
LABEL_85:
          *v57 = v59;
          if ( v61 )
            MiWritePteShadow(v24 + 16);
          goto LABEL_61;
        }
        if ( (unsigned int)MiPteHasShadow(v60, v59) )
        {
          v61 = 1;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_85;
          v65 = (v64 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
            goto LABEL_85;
          v65 = (v64 & 1) == 0;
        }
        if ( !v65 )
          v59 |= 0x8000000000000000uLL;
        goto LABEL_85;
      }
      if ( (v41 & 7) != 3 )
        goto LABEL_61;
      if ( a5 == 1 )
      {
        v42 = -1073740748;
        goto LABEL_61;
      }
      if ( (v41 & 8) != 0 || a5 || (v41 & 0x20) != 0 )
        goto LABEL_61;
      v51 = v41 & 0xEF;
      *(_BYTE *)(v24 + 34) = v51;
      if ( *(_WORD *)(v24 + 32) == (_WORD)v40 )
        MiUnlinkPageFromList(v24, 0);
      else
        *(_BYTE *)(v24 + 34) = v51 & 0xF8 | 2;
      v52 = (__int64 *)(v24 + 16);
      v53 = MiCapturePageFileInfoInline(v24 + 16, 1LL);
      *a8 = v53;
      if ( v53 )
        *a7 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v24 + 40) >> 40) & 0x3FFLL));
      v83 = MiUpdatePageFileHighInPte(*v52, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
      if ( !MiPteInShadowRange(v24 + 16) )
      {
LABEL_73:
        *v52 = v54;
        if ( v56 )
          MiWritePteShadow(v24 + 16);
        if ( *(_WORD *)(v24 + 32) )
          goto LABEL_61;
        v49 = 4;
        v48 = v24;
LABEL_60:
        MiInsertPageInList(v48, v49);
LABEL_61:
        v50 = v42;
LABEL_62:
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v50;
      }
      if ( (unsigned int)MiPteHasShadow(v55, v54) )
      {
        v56 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_73;
        v67 = (v66 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_73;
        v67 = (v66 & 1) == 0;
      }
      if ( !v67 )
        v54 |= 0x8000000000000000uLL;
      goto LABEL_73;
    }
  }
  v14 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( !v12 )
  {
    if ( v8 || a5 || MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v87, a1) || v87 == 24 )
      return 3221226548LL;
    MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16, 1LL);
    v68 = MiSwizzleInvalidPte(0x100000000LL);
    v83 = (32LL * (v87 & 0x1F)) | v68 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( MiPteInShadowRange(v10) )
    {
      if ( (unsigned int)MiPteHasShadow(v70, v69) )
      {
        v71 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_149;
        v73 = (v72 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_149;
        v73 = (v72 & 1) == 0;
      }
      if ( !v73 )
        v69 |= 0x8000000000000000uLL;
    }
LABEL_149:
    *(_QWORD *)v10 = v69;
    if ( !v71 )
      return 0LL;
    goto LABEL_152;
  }
  v15 = *(struct _KEVENT **)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  if ( v8 )
  {
    if ( a2 == 1 )
    {
      v15 = (struct _KEVENT *)MiSharedVaToPartition(&Process[1].IdealNode[12], (__int64)(v10 << 25) >> 16, v8);
    }
    else if ( (*(_DWORD *)(a1 + 48) & 0x4000) != 0 || (v75 = *(_QWORD *)(a1 + 72)) == 0 )
    {
      v15 = *(struct _KEVENT **)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
    }
    else
    {
      v15 = *(struct _KEVENT **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v75 + 60LL) & 0x3FF));
    }
  }
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v13) )
  {
    if ( v14 == 1 )
      return 3221226548LL;
    v76 = MiCapturePageFileInfoInline(&v83, 1LL);
    *a8 = v76;
    if ( !v76 )
      return 0LL;
    *a7 = v15;
    if ( !v8 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      v8 = (__int64 *)v10;
    }
    if ( MiPteInShadowRange((unsigned __int64)v8) )
    {
      if ( (unsigned int)MiPteHasShadow(v78, v77) )
      {
        v79 = 1;
        if ( HIBYTE(word_14043B26C) == v80 )
        {
          v81 = (v77 & 1) == 0;
          goto LABEL_174;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v81 = (v77 & 1) == 0;
LABEL_174:
        if ( !v81 )
          v77 |= 0x8000000000000000uLL;
      }
    }
    *v8 = v77;
    if ( !v79 )
      return 0LL;
    v74 = (unsigned __int64)v8;
    goto LABEL_178;
  }
  if ( v14 != 1 )
  {
    if ( (v13 & 2) != 0 )
    {
      MiReleasePageFileSpace(v15, v13);
      v13 &= ~2uLL;
    }
    v83 = MiUpdatePageFileHighInPte(v13, 1LL);
LABEL_15:
    if ( v8 )
      v10 = (unsigned __int64)v8;
    if ( !MiPteInShadowRange(v10) )
    {
LABEL_18:
      *(_QWORD *)v10 = v18;
      return 0LL;
    }
    if ( !(unsigned int)MiPteHasShadow(v17, v16) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v18 & 1) != 0 )
      {
        v18 |= 0x8000000000000000uLL;
      }
      goto LABEL_18;
    }
    if ( !HIBYTE(word_14043B26C) && (v18 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    *(_QWORD *)v10 = v18;
LABEL_152:
    v74 = v10;
LABEL_178:
    MiWritePteShadow(v74);
    return 0LL;
  }
  if ( MI_IS_RESET_PTE(v13) )
  {
    MI_CLEAR_RESET_PTE((unsigned __int64)&v83);
    goto LABEL_15;
  }
  return 3221226548LL;
}
