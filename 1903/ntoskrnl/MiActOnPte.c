/*
 * XREFs of MiActOnPte @ 0x1400DE740
 * Callers:
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 * Callees:
 *     MI_IS_RESET_PTE @ 0x140023DF0 (MI_IS_RESET_PTE.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiGetVaAge @ 0x14005B010 (MiGetVaAge.c)
 *     MiCheckUserVirtualAddress @ 0x14005DDB0 (MiCheckUserVirtualAddress.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiUpdatePfnPriority @ 0x14008DD04 (MiUpdatePfnPriority.c)
 *     MiSetVaAgeList @ 0x1400C5760 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiLockLeafPage @ 0x1400DC870 (MiLockLeafPage.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400DFC54 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiRotatedToFrameBuffer @ 0x1400E0420 (MiRotatedToFrameBuffer.c)
 *     MiSharedVaToPartition @ 0x1400F042C (MiSharedVaToPartition.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     MiUpdateWsleAge @ 0x14012AAA8 (MiUpdateWsleAge.c)
 *     MI_CLEAR_RESET_PTE @ 0x14012DE38 (MI_CLEAR_RESET_PTE.c)
 *     MiUpdatePageTableUseCount @ 0x140138218 (MiUpdatePageTableUseCount.c)
 *     MiDemoteCombinedPte @ 0x140141270 (MiDemoteCombinedPte.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        __int64 *a7,
        __int64 *a8)
{
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  _KPROCESS *Process; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // r15d
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // r11
  int v19; // r15d
  unsigned __int64 v20; // rcx
  int v21; // r9d
  ULONG_PTR v22; // rbx
  __int64 v23; // rdx
  int v24; // eax
  char v25; // cl
  char v26; // dl
  __int64 *v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r8d
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r9d
  char v36; // al
  unsigned int v37; // esi
  BOOL v38; // edi
  __int16 v39; // r9
  _DWORD *v40; // r11
  char v41; // al
  int v42; // eax
  ULONG_PTR v43; // rcx
  unsigned int v44; // edx
  int v45; // r8d
  char updated; // al
  __int64 v47; // r8
  __int64 v48; // r12
  __int64 v49; // r8
  __int64 *v50; // r14
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // r9d
  unsigned int v55; // edi
  char v56; // al
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
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // r9d
  char v72; // r8
  bool v73; // zf
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  int v78; // r8d
  char v79; // r9
  bool v80; // zf
  int v81; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v82; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int16 *v83; // [rsp+30h] [rbp-10h]
  int v86; // [rsp+98h] [rbp+58h] BYREF

  v8 = a4;
  v9 = (unsigned __int64)a4;
  v10 = a3;
  *a8 = 0LL;
  if ( !a4 )
    v9 = a3;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v83 = &Process[1].IdealNode[6];
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = MI_READ_PTE_LOCK_FREE(v9);
      v82 = v12;
      v13 = v12;
      if ( (v12 & 1) == 0 )
        break;
      v19 = a5;
      if ( !v8 )
      {
        v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v82) >> 12) & 0xFFFFFFFFFLL);
        if ( ((*(_QWORD *)(v20 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
          return 3221226548LL;
        v22 = v20 - 0x58000000000LL;
        v23 = *(_QWORD *)(v20 - 0x58000000000LL + 8);
        if ( v23 >= 0 )
        {
          if ( v19 == 1 )
            return 3221226548LL;
          if ( !v19 )
            return 274LL;
        }
        else if ( MiLocateCloneAddress(Process, v23 | 0x8000000000000000uLL) )
        {
          return 3221226548LL;
        }
        v81 = v21;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v81);
            while ( *(__int64 *)(v22 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
          v19 = a5;
          v21 = 0;
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 )
        {
          v24 = MiRotatedToFrameBuffer(v10);
          v21 = 0;
          if ( v24 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return 3221226548LL;
          }
        }
LABEL_27:
        if ( v19 == 2 )
        {
          v45 = v21;
          LOBYTE(v45) = v8 == 0LL;
          updated = MiUpdatePfnPriority(v22, a6, v45);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v48 = (__int64)v83;
          if ( updated != -1 && !v8 )
          {
            LOBYTE(v47) = updated;
            MiUpdateWsleAge(v83, v10, v47);
          }
          v49 = *(_QWORD *)(v22 + 8);
          if ( v49 >= 0 && !v8 )
            MiDemoteCombinedPte(v48, v10, v49 | 0x8000000000000000uLL);
          return 0LL;
        }
        v25 = *(_BYTE *)(v22 + 34);
        if ( (v25 & 8) != 0 )
        {
          v55 = -1073740748;
          goto LABEL_68;
        }
        v26 = v25 & 0x10;
        if ( v19 == 1 )
        {
          if ( !v26 && (*(_DWORD *)(v22 + 16) & 4) == 0 )
            *(_BYTE *)(v22 + 34) = v25 | 0x10;
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v22 + 16)) )
            MI_CLEAR_RESET_PTE(v22 + 16);
          else
            v62 = -1073740748;
          v55 = v62;
          goto LABEL_68;
        }
        if ( v26 )
          *(_BYTE *)(v22 + 34) = v25 & 0xEF;
        v27 = (__int64 *)(v22 + 16);
        v28 = MiCapturePageFileInfoInline(v22 + 16, 1LL);
        *a8 = v28;
        if ( v28 )
          *a7 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL));
        MiUpdatePageFileHighInPte(*v27, 1LL);
        if ( !MiPteInShadowRange(v22 + 16) )
        {
LABEL_35:
          *v27 = v29;
          if ( v31 )
            MiWritePteShadow(v22 + 16, v29);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v8 || (v82 & 0x42) == 0 )
            return 0LL;
          MiWriteValidPteNewProtection(v10);
          v32 = (__int64)(v10 << 25) >> 16;
          if ( (unsigned __int8)MiGetVaAge(v33, v32) < 7u )
            MiSetVaAgeList((__int64)v83, v32, 1u, 1u);
          return 3221225505LL;
        }
        if ( (unsigned int)MiPteHasShadow(v30) )
        {
          v31 = 1;
          if ( HIBYTE(word_140465BEC) )
            goto LABEL_35;
          v63 = (v29 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_35;
          v63 = (v29 & 1) == 0;
        }
        if ( !v63 )
          v29 |= 0x8000000000000000uLL;
        goto LABEL_35;
      }
      v22 = MiLockLeafPage(v8, 0);
      if ( v22 )
      {
        v82 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
        if ( (v82 & 1) != 0 )
          goto LABEL_27;
LABEL_103:
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v12 & 0x400) != 0 )
      return 0LL;
    if ( (v12 & 0x800) == 0 )
      break;
    if ( v8 )
      v34 = MiLockLeafPage(v8, 0);
    else
      v34 = MiLockTransitionLeafPage(v10, 0LL);
    v35 = 0;
    v22 = v34;
    if ( v34 )
    {
      if ( v8 )
      {
        v82 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v8);
        if ( (v82 & 1) != 0 )
          goto LABEL_103;
      }
      if ( a5 == 2 )
      {
        MiUpdatePfnPriority(v22, a6, 1);
        v55 = 0;
        goto LABEL_68;
      }
      v36 = *(_BYTE *)(v22 + 34);
      v37 = v35;
      if ( (v36 & 7) == 2 )
      {
        if ( a5 == 1 )
        {
          v38 = MI_IS_RESET_PTE(*(_QWORD *)(v22 + 16));
          if ( v38 )
          {
            MI_CLEAR_RESET_PTE(v40);
            v39 = 0;
          }
          v37 = v38 ? 0 : 0xC0000434;
          if ( (*v40 & 4) != 0 )
            goto LABEL_67;
          v41 = *(_BYTE *)(v22 + 34) | 0x10;
          *(_BYTE *)(v22 + 34) = v41;
          if ( *(_WORD *)(v22 + 32) != v39 )
          {
            *(_BYTE *)(v22 + 34) = v41 & 0xF8 | 3;
            goto LABEL_67;
          }
          v42 = MiUnlinkPageFromList(v22, 0);
          v43 = v22;
          if ( !v42 )
          {
            MiDiscardTransitionPteEx(v22, 0LL);
            v37 = -1073740748;
            goto LABEL_67;
          }
          v44 = 8;
          goto LABEL_55;
        }
        if ( (v36 & 0x28) != 0 )
          goto LABEL_67;
        v50 = (__int64 *)(v22 + 16);
        v51 = MiCapturePageFileInfoInline(v22 + 16, 1LL);
        *a8 = v51;
        if ( v51 )
          *a7 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL));
        v82 = MiUpdatePageFileHighInPte(*v50, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
        if ( !MiPteInShadowRange(v22 + 16) )
        {
LABEL_65:
          *v50 = v52;
          if ( v54 )
            MiWritePteShadow(v22 + 16, v52);
          goto LABEL_67;
        }
        if ( (unsigned int)MiPteHasShadow(v53) )
        {
          v54 = 1;
          if ( HIBYTE(word_140465BEC) )
            goto LABEL_65;
          v65 = (v64 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_65;
          v65 = (v64 & 1) == 0;
        }
        if ( !v65 )
          v52 |= 0x8000000000000000uLL;
        goto LABEL_65;
      }
      if ( (v36 & 7) != 3 )
        goto LABEL_67;
      if ( a5 == 1 )
      {
        v37 = -1073740748;
        goto LABEL_67;
      }
      if ( (v36 & 8) != 0 || a5 || (v36 & 0x20) != 0 )
        goto LABEL_67;
      v56 = v36 & 0xEF;
      *(_BYTE *)(v22 + 34) = v56;
      if ( *(_WORD *)(v22 + 32) == (_WORD)v35 )
        MiUnlinkPageFromList(v22, 0);
      else
        *(_BYTE *)(v22 + 34) = v56 & 0xF8 | 2;
      v57 = (__int64 *)(v22 + 16);
      v58 = MiCapturePageFileInfoInline(v22 + 16, 1LL);
      *a8 = v58;
      if ( v58 )
        *a7 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL));
      v82 = MiUpdatePageFileHighInPte(*v57, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
      if ( !MiPteInShadowRange(v22 + 16) )
      {
LABEL_79:
        *v57 = v59;
        if ( v61 )
          MiWritePteShadow(v22 + 16, v59);
        if ( *(_WORD *)(v22 + 32) )
          goto LABEL_67;
        v44 = 4;
        v43 = v22;
LABEL_55:
        MiInsertPageInList(v43, v44);
LABEL_67:
        v55 = v37;
LABEL_68:
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v55;
      }
      if ( (unsigned int)MiPteHasShadow(v60) )
      {
        v61 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_79;
        v67 = (v66 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_79;
        v67 = (v66 & 1) == 0;
      }
      if ( !v67 )
        v59 |= 0x8000000000000000uLL;
      goto LABEL_79;
    }
  }
  v14 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( !v12 )
  {
    if ( v8 || a5 || MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v86, a1) || v86 == 24 )
      return 3221226548LL;
    MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16, 1LL);
    v68 = MiSwizzleInvalidPte(0x100000000LL);
    v82 = (32LL * (v86 & 0x1F)) | v68 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( !MiPteInShadowRange(v10) )
      goto LABEL_149;
    if ( (unsigned int)MiPteHasShadow(v70) )
    {
      v71 = 1;
      if ( !HIBYTE(word_140465BEC) )
      {
        v73 = (v72 & 1) == 0;
        goto LABEL_147;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v73 = (v72 & 1) == 0;
LABEL_147:
      if ( !v73 )
        v69 |= 0x8000000000000000uLL;
    }
LABEL_149:
    *(_QWORD *)v10 = v69;
    if ( !v71 )
      return 0LL;
LABEL_152:
    v74 = v10;
LABEL_179:
    MiWritePteShadow(v74, v69);
    return 0LL;
  }
  v15 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
  if ( v8 )
  {
    if ( a2 == 1 )
    {
      v15 = MiSharedVaToPartition(&Process[1].IdealNode[6], (__int64)(v10 << 25) >> 16, v8);
    }
    else if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0 || (v75 = *(_QWORD *)(a1 + 72)) == 0 )
    {
      v15 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
    }
    else
    {
      v15 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v75 + 60LL) & 0x3FF));
    }
  }
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v13) )
  {
    if ( v14 == 1 )
      return 3221226548LL;
    v76 = MiCapturePageFileInfoInline(&v82, 1LL);
    *a8 = v76;
    if ( !v76 )
      return 0LL;
    *a7 = v15;
    if ( !v8 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      v8 = (unsigned __int64 *)v10;
    }
    if ( !MiPteInShadowRange((unsigned __int64)v8) )
      goto LABEL_177;
    if ( (unsigned int)MiPteHasShadow(v77) )
    {
      v78 = 1;
      if ( HIBYTE(word_140465BEC) == v79 )
      {
        v80 = (v69 & 1) == 0;
        goto LABEL_175;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v80 = (v69 & 1) == 0;
LABEL_175:
      if ( !v80 )
        v69 |= 0x8000000000000000uLL;
    }
LABEL_177:
    *v8 = v69;
    if ( !v78 )
      return 0LL;
    v74 = (unsigned __int64)v8;
    goto LABEL_179;
  }
  if ( v14 != 1 )
  {
    if ( (v13 & 2) != 0 )
    {
      MiReleasePageFileSpace(v15, v13, 1LL);
      v13 &= ~2uLL;
    }
    v82 = MiUpdatePageFileHighInPte(v13, 1LL);
LABEL_15:
    if ( v8 )
      v10 = (unsigned __int64)v8;
    if ( !MiPteInShadowRange(v10) )
    {
LABEL_18:
      *(_QWORD *)v10 = v17;
      return 0LL;
    }
    if ( (unsigned int)MiPteHasShadow(v16) )
    {
      if ( !HIBYTE(word_140465BEC) && (v17 & 1) != 0 )
        v17 |= 0x8000000000000000uLL;
      *(_QWORD *)v10 = v17;
      v69 = v17;
      goto LABEL_152;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      if ( (v17 & 1) != 0 )
        v17 |= 0x8000000000000000uLL;
      goto LABEL_18;
    }
    *(_QWORD *)v10 = v82;
    return 0LL;
  }
  if ( MI_IS_RESET_PTE(v13) )
  {
    MI_CLEAR_RESET_PTE(&v82);
    goto LABEL_15;
  }
  return 3221226548LL;
}
