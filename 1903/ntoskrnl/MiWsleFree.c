/*
 * XREFs of MiWsleFree @ 0x140025750
 * Callers:
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiIsAddressGlobal @ 0x14006D7F0 (MiIsAddressGlobal.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1400DBFD0 (MiRewriteTrimPteAsDemandZero.c)
 *     MiMakeProtoTransition @ 0x140115FD0 (MiMakeProtoTransition.c)
 *     MiUserPdeOrAbove @ 0x14011A7F0 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiReleasePageFileSpace @ 0x1401248E4 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 MiWsleFree(__int64 a1, unsigned __int64 a2, char a3, ...)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  ULONG_PTR v8; // r14
  char v9; // r13
  BOOL v10; // r12d
  int PagePrivilege; // eax
  unsigned __int64 v12; // rcx
  int v13; // ebx
  volatile signed __int32 *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // esi
  __int64 v18; // rdx
  int v19; // eax
  signed int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v25; // rdi
  _QWORD *MmInternal; // rbx
  unsigned __int64 UltraMapping; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 *v31; // r8
  _QWORD *v32; // r11
  _QWORD *v33; // rdi
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rbp
  unsigned __int64 v37; // rbx
  __int64 v38; // r9
  char v39; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  ULONG_PTR v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  char v46; // al
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rbx
  char v51; // dl
  __int64 v52; // r10
  unsigned __int64 ContainingPageTable; // rsi
  char v54; // cl
  char v55; // cl
  char v56; // al
  char v57; // al
  __int64 v58; // rax
  __int64 v59; // r8
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v61; // rax
  __int64 v62; // r8
  char v63; // al
  int v64; // [rsp+30h] [rbp-78h]
  int v65; // [rsp+34h] [rbp-74h] BYREF
  int v66; // [rsp+38h] [rbp-70h] BYREF
  int v67; // [rsp+3Ch] [rbp-6Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h]
  unsigned __int64 v69; // [rsp+48h] [rbp-60h]
  __int64 v70[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int16 v72; // [rsp+B8h] [rbp+10h]
  __int64 v74; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  va_list va1; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v74 = va_arg(va1, _QWORD);
  v3 = a1;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v69 = v4;
  BugCheckParameter2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((__int64 *)va) >> 12) & 0xFFFFFFFFFLL;
  v8 = 48 * BugCheckParameter2 - 0x58000000000LL;
  if ( v6 < v7 || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    v9 = HIBYTE(v5) & 0xF | (16 * ((v5 >> 60) & 7));
  else
    v9 = (*(_BYTE *)v8 >> 1) & 7;
  v10 = (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0;
  if ( ((*(_QWORD *)(v8 + 40) >> 57) & 1LL) != 0 )
  {
    if ( *(__int64 *)(v8 + 8) >= 0 || (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
      goto LABEL_56;
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 184) & 7u) >= 2 )
      goto LABEL_56;
    PagePrivilege = MiGetPagePrivilege(48 * BugCheckParameter2 - 0x58000000000LL, 0, 0LL);
    v7 = 0xFFFFF68000000000uLL;
    if ( (PagePrivilege & 0xFFFFFFFD) != 0 )
      goto LABEL_56;
    if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 )
    {
      v12 = v4 << 25 >> 16;
      if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_56;
    }
  }
  if ( *(_WORD *)(v8 + 32) == 1 && (*(_BYTE *)(v8 + 34) & 0xC0) == 0x40 && (*(_BYTE *)(v8 + 35) & 0x40) == 0 )
  {
    v13 = 1;
    goto LABEL_12;
  }
LABEL_56:
  v13 = 0;
LABEL_12:
  v14 = (volatile signed __int32 *)(v8 + 24);
  v65 = 0;
  v64 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v65);
      while ( *(__int64 *)v14 < 0 );
    }
    while ( _interlockedbittestandset64(v14, 0x3FuLL) );
    v7 = 0xFFFFF68000000000uLL;
  }
  v15 = 0x2AAAAAAAAAAAAAABLL;
  v16 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v13 )
  {
    if ( (*(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(v8 + 32) != 1 )
    {
LABEL_32:
      v13 = 0;
      goto LABEL_33;
    }
    v17 = 4;
    v18 = (__int64)(v8 + 0x58000000000LL) / 48;
    v19 = *(unsigned __int8 *)(48 * v18 - 0x58000000000LL + 34) >> 6;
    if ( !v19 || v19 == 3 )
    {
      v17 = 12;
    }
    else if ( v19 == 2 )
    {
      v17 = 28;
    }
    v20 = v17 | 0xA0000000;
    v21 = v20 & 0x1F;
    v22 = (v18 & 0xFFFFFFFFFLL) << 12;
    if ( v7 )
    {
      v23 = v22 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x121;
    }
    else
    {
      v23 = v22 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x25;
      v3 = a1;
      if ( (unsigned int)MiIsAddressGlobal(0LL, v22, v22 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x21) )
        v23 = v59 | 0x104;
    }
    if ( (v20 & 5) == 4 && v20 < 0 )
      v23 |= 0x42uLL;
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = v23 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140465BEC & 1 | 0xA000000000000LL) << 8);
    MmInternal = CurrentPrcb->MmInternal;
    if ( !MmInternal
      || (UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL),
          v28 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          MmInternal[1543] = v28,
          !UltraMapping) )
    {
      v28 = (((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
             + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
          - 0x98000000000LL;
    }
    if ( (unsigned int)MiPteInShadowRange(v28, 0xFFFFF68000000000uLL, v28, 0x7FFFFFFFF8LL) )
    {
      if ( (unsigned int)MiPteHasShadow(v30) )
      {
        if ( !HIBYTE(word_140465BEC) )
          v25 |= 0x8000000000000000uLL;
        *v31 = v25;
        MiWritePteShadow(v31, v25);
LABEL_28:
        v33 = v32;
        v34 = v32 + 511;
        do
        {
          if ( *v33 | *v34 )
            break;
          ++v33;
          --v34;
        }
        while ( v33 <= v34 );
        LOBYTE(v29) = 17;
        MiUnmapPageInHyperSpaceWorker(v32, v29, 0x80000000LL);
        if ( v33 > v34 )
        {
          MiRewriteTrimPteAsDemandZero(v3, v8);
          v13 = v64;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        v25 |= 0x8000000000000000uLL;
    }
    *v31 = v25;
    goto LABEL_28;
  }
LABEL_33:
  v35 = 0LL;
  v36 = 0LL;
  if ( v13 || (v74 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v69);
    v54 = *(_BYTE *)(v8 + 34) & 0xC7;
    *(_QWORD *)(v8 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v8 + 34) = v54;
    v55 = *(_BYTE *)(v8 + 35);
    *(_QWORD *)v14 &= 0xC000000000000000uLL;
    *(_BYTE *)(v8 + 35) = v55 & 0xDF;
    *(_WORD *)(v8 + 32) = 0;
    v35 = MiCapturePageFileInfoInline(v8 + 16, 0LL);
    if ( v35 )
      v36 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL));
    MiInsertPageInFreeOrZeroedList((__int64)(v8 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    v67 = 0;
    v14 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
    while ( _interlockedbittestandset64(v14, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v67);
      while ( *(__int64 *)v14 < 0 );
    }
    MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
  }
  else
  {
    if ( (v74 & 0x42) != 0 )
    {
      v16 = *(unsigned __int8 *)(v8 + 34);
      if ( (v16 & 0x10) == 0 )
      {
        v15 = (unsigned __int8)v16;
        LOBYTE(v15) = !_bittest64((const signed __int64 *)(v8 + 16), 0xAu) & ~((unsigned __int8)v16 >> 3);
        if ( (v15 & 1) != 0 )
        {
          v58 = MiCapturePageFileInfoInline(v8 + 16, 1LL);
          v16 = *(unsigned __int8 *)(v8 + 34);
          v35 = v58;
        }
        LOBYTE(v16) = v16 | 0x10;
        *(_BYTE *)(v8 + 34) = v16;
      }
      if ( v35 )
        v36 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL));
    }
    if ( v10 )
    {
      v37 = -1LL;
    }
    else
    {
      v48 = ((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v49 = *(_QWORD *)v48;
      if ( v48 >= 0xFFFFF6FB7DBED000uLL
        && v48 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v49 & 1) != 0
        && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v61 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v48 >> 3) & 0x1FF));
          v62 = v49 | 0x20;
          if ( (v61 & 0x20) == 0 )
            v62 = v49;
          v49 = v62;
          if ( (v61 & 0x42) != 0 )
            v49 = v62 | 0x42;
        }
      }
      v70[0] = v49;
      v37 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v70) >> 12) & 0xFFFFFFFFFLL;
    }
    v38 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (a3 & 1) != 0
      && (*(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v8 + 32) == 1
      && (*(_BYTE *)(v8 + 34) & 0x10) == 0
      && (unsigned int)MiGetPfnPriority(v8, v15, v16, 0x3FFFFFFFFFFFFFFFLL) == 5 )
    {
      *(_BYTE *)(v8 + 35) = *(_BYTE *)(v8 + 35) & 0xF8 | 4;
    }
    v39 = *(_BYTE *)(v8 + 34);
    BugCheckParameter4 = v38 & *(_QWORD *)v14;
    if ( (v39 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, BugCheckParameter2, v39 & 7, BugCheckParameter4);
    v41 = BugCheckParameter4 - 1;
    v42 = *(_QWORD *)v14 ^ v38 & ((BugCheckParameter4 - 1) ^ *(_QWORD *)v14);
    *(_QWORD *)v14 = v42;
    if ( !v41 )
    {
      if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) != 0 )
      {
        MiMakeProtoTransition(v8);
        v42 = *(_QWORD *)v14;
      }
      --*(_WORD *)(v8 + 32);
      v43 = (v42 >> 62) & 1;
      if ( *(_WORD *)(v8 + 32) )
      {
        v56 = *(_BYTE *)(v8 + 34);
        if ( (_DWORD)v43 )
        {
          v57 = v56 | 7;
        }
        else if ( (v56 & 0x10) != 0 )
        {
          v57 = v56 & 0xF8 | 3;
        }
        else
        {
          v57 = v56 & 0xF8 | 2;
        }
        *(_BYTE *)(v8 + 34) = v57;
        if ( (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v8 + 16) )
          *(_BYTE *)(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) + 667LL) = 1;
      }
      else if ( (_DWORD)v43 )
      {
        v63 = *(_BYTE *)(v8 + 35);
        if ( (v63 & 0x10) != 0 )
          *(_BYTE *)(v8 + 35) = v63 & 0xEF;
        MiReleasePageFileSpace(
          *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)),
          *(_QWORD *)(v8 + 16),
          1LL);
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
      }
      else
      {
        v44 = *(_QWORD *)(v8 + 16);
        v45 = -9LL;
        if ( (v44 & 0x400) != 0 )
          v45 = -2049LL;
        *(_QWORD *)(v8 + 16) = v44 & v45;
        v46 = *(_BYTE *)(v8 + 34);
        if ( (v46 & 0x10) == 0 )
          *(_BYTE *)(v8 + 34) = v46 & 0xF8 | 2;
        MiInsertPageInList(v8);
      }
    }
    if ( v37 != -1LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
      v50 = 48 * v37;
      v14 = (volatile signed __int32 *)(v50 - 0x58000000000LL + 24);
      v66 = 0;
      while ( _interlockedbittestandset64(v14, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v66);
        while ( *(__int64 *)v14 < 0 );
      }
      v51 = *(_BYTE *)(v50 - 0x58000000000LL + 34);
      v52 = *(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v51 & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, v50 / 48, v51 & 7, *(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)v14 ^= ((v52 - 1) ^ *(_QWORD *)v14) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v52 == 1 )
        MiPfnShareCountIsZero(v50 - 0x58000000000LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v35 )
    MiReleasePageFileInfo(v36, v35, 1LL);
  LOBYTE(v72) = v9;
  HIBYTE(v72) = (2 * v10) | 1;
  return v72;
}
