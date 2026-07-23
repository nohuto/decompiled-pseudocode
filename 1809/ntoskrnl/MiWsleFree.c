/*
 * XREFs of MiWsleFree @ 0x1400B2BB0
 * Callers:
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14011AB5C (MiRewriteTrimPteAsDemandZero.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 MiWsleFree(__int64 a1, unsigned __int64 a2, char a3, ...)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rdx
  va_list v7; // r8
  ULONG_PTR v8; // r12
  __int64 v9; // rsi
  char v10; // r15
  BOOL v11; // ebp
  unsigned __int64 v12; // rcx
  int v13; // edi
  volatile signed __int32 *v14; // r14
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 ValidPte; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 *MmInternal; // rdi
  unsigned __int64 UltraMapping; // r11
  unsigned __int64 *v23; // r8
  _QWORD *v24; // rdi
  _QWORD *v25; // rbx
  int v26; // eax
  char v27; // bl
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int8 v33; // r8
  __int64 v34; // rbx
  char v35; // dl
  __int64 v36; // r10
  __int64 ContainingPageTable; // r13
  char v38; // cl
  __int16 v39; // r11
  char v40; // cl
  __int16 v41; // dx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  int v47; // [rsp+30h] [rbp-68h] BYREF
  int v48; // [rsp+34h] [rbp-64h] BYREF
  int v49; // [rsp+38h] [rbp-60h] BYREF
  struct _KPRCB *v50; // [rsp+40h] [rbp-58h]
  __int64 v51; // [rsp+48h] [rbp-50h] BYREF
  int v53; // [rsp+A8h] [rbp+10h]
  struct _KEVENT *v54; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v56; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  va_list va1; // [rsp+C0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v56 = va_arg(va1, _QWORD);
  v3 = v56;
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = v56;
  va_copy(v7, va);
  if ( (unsigned __int64)va >= 0xFFFFF6FB7DBED000uLL )
  {
    va_copy(v7, va);
    if ( (unsigned __int64)va <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v56 & 1) != 0
      && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
    {
      v7 = (va_list)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v7 )
      {
        v45 = *(_QWORD *)&v7[8 * (((unsigned __int64)va >> 3) & 0x1FF)];
        if ( (v45 & 0x20) != 0 )
          v3 = v56 | 0x20;
        if ( (v45 & 0x42) != 0 )
          v3 |= 0x42uLL;
      }
      else
      {
        v3 = v56;
      }
    }
  }
  v8 = (v3 >> 12) & 0xFFFFFFFFFLL;
  v9 = 48 * v8 - 0x58000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v6 = HIBYTE(v56);
    LOBYTE(v6) = HIBYTE(v56) & 0xF;
    v10 = HIBYTE(v56) & 0xF | (16 * ((v56 >> 60) & 7));
  }
  else
  {
    v10 = (*(_BYTE *)v9 >> 1) & 7;
  }
  v11 = (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) == 0;
  if ( ((*(_QWORD *)(v9 + 40) >> 57) & 1LL) != 0 )
  {
    if ( *(__int64 *)(v9 + 8) < 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) == 0 )
    {
LABEL_10:
      if ( *(_WORD *)(v9 + 32) == 1 && (*(_BYTE *)(v9 + 34) & 0xC0) == 0x40 && (*(_BYTE *)(v9 + 35) & 0x40) == 0 )
      {
        v13 = 1;
        goto LABEL_14;
      }
    }
LABEL_51:
    v13 = 0;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7u) >= 2 || (MiGetPagePrivilege(48 * v8 - 0x58000000000LL, 0, 0LL) & 0xFFFFFFFD) != 0 )
    goto LABEL_51;
  if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
    goto LABEL_10;
  v12 = (__int64)(v5 << 25) >> 16;
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_10;
  v13 = 0;
LABEL_14:
  v47 = 0;
  v14 = (volatile signed __int32 *)(v9 + 24);
  v53 = v13;
  while ( _interlockedbittestandset64(v14, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v47, v6, (__int64)v7);
    while ( *(__int64 *)v14 < 0 );
  }
  if ( !v13 )
    goto LABEL_48;
  if ( (*(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL) == 1 && *(_WORD *)(v9 + 32) == 1 )
  {
    v15 = 4;
    v16 = (__int64)(48 * v8) / 48;
    v17 = *(unsigned __int8 *)(48 * v16 - 0x58000000000LL + 34) >> 6;
    if ( !v17 || v17 == 3 )
    {
      v15 = 12;
    }
    else if ( v17 == 2 )
    {
      v15 = 28;
    }
    ValidPte = MiMakeValidPte(0LL, v16, v15 | 0xA0000000);
    CurrentPrcb = KeGetCurrentPrcb();
    v50 = CurrentPrcb;
    MmInternal = (unsigned __int64 *)CurrentPrcb->MmInternal;
    if ( MmInternal )
    {
      UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3u, 1LL, 0);
      v18 = 0xFFFFF68000000000uLL;
      v23 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MmInternal[1543] = (unsigned __int64)v23;
      if ( UltraMapping )
      {
LABEL_24:
        if ( (unsigned __int64)v23 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v23 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v18, 0xFFFFF68000000000uLL) )
          {
            if ( !HIBYTE(word_14043B26C) && (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
            *v23 = ValidPte;
            MiWritePteShadow(v23);
            goto LABEL_26;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (ValidPte & 1) != 0 )
          {
            ValidPte |= 0x8000000000000000uLL;
          }
        }
        *v23 = ValidPte;
LABEL_26:
        v24 = (_QWORD *)UltraMapping;
        v25 = (_QWORD *)(UltraMapping + 4088);
        do
        {
          if ( *v24 | *v25 )
            break;
          ++v24;
          --v25;
        }
        while ( v24 <= v25 );
        MiUnmapPageInHyperSpaceWorker(UltraMapping, 0x11u, 0x80000000LL);
        if ( v24 <= v25 )
          goto LABEL_30;
        MiRewriteTrimPteAsDemandZero(a1, 48 * v8 - 0x58000000000LL);
LABEL_48:
        v26 = v53;
        goto LABEL_31;
      }
      CurrentPrcb = v50;
    }
    UltraMapping = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                 + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v23 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    goto LABEL_24;
  }
LABEL_30:
  v26 = 0;
LABEL_31:
  v27 = v56;
  v28 = 0LL;
  v54 = 0LL;
  if ( v26 || (v56 & 4) != 0 )
  {
    ContainingPageTable = MiGetContainingPageTable(v5);
    v38 = *(_BYTE *)(v9 + 34) & 0xC7;
    *(_WORD *)(v9 + 32) = v39;
    *(_QWORD *)(v9 + 40) &= ~0x200000000000000uLL;
    *(_BYTE *)(v9 + 34) = v38;
    v40 = *(_BYTE *)(v9 + 35);
    *(_QWORD *)v14 &= 0xC000000000000000uLL;
    *(_BYTE *)(v9 + 35) = v40 & 0xDF;
    v28 = MiCapturePageFileInfoInline(v9 + 16, 0LL);
    if ( v28 )
      v54 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL));
    if ( (v27 & 4) != 0 )
      v41 = 2;
    else
      v41 = 1;
    MiInsertPageInFreeOrZeroedList(v8, v41);
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    v49 = 0;
    v14 = (volatile signed __int32 *)(48 * ContainingPageTable - 0x58000000000LL + 24);
    while ( _interlockedbittestandset64(v14, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v49, v42, v43);
      while ( *(__int64 *)v14 < 0 );
    }
    MiDecrementShareCount(48 * ContainingPageTable - 0x58000000000LL);
  }
  else
  {
    if ( (v56 & 0x42) != 0 )
    {
      v33 = *(_BYTE *)(v9 + 34);
      if ( (v33 & 0x10) == 0 )
      {
        if ( (!_bittest64((const signed __int64 *)(v9 + 16), 0xAu) & (unsigned __int8)~(v33 >> 3)) != 0 )
        {
          v44 = MiCapturePageFileInfoInline(v9 + 16, 1LL);
          v33 = *(_BYTE *)(v9 + 34);
          v28 = v44;
        }
        *(_BYTE *)(v9 + 34) = v33 | 0x10;
      }
      if ( v28 )
        v54 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL));
    }
    if ( v11 )
    {
      v29 = -1LL;
    }
    else
    {
      v51 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v29 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v51) >> 12) & 0xFFFFFFFFFLL;
    }
    if ( (a3 & 1) != 0
      && (*(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v9 + 32) == 1
      && (*(_BYTE *)(v9 + 34) & 0x10) == 0
      && (unsigned int)MiGetPfnPriority(48 * v8 - 0x58000000000LL) == 5 )
    {
      *(_BYTE *)(v9 + 35) = *(_BYTE *)(v9 + 35) & 0xF8 | 4;
    }
    v30 = *(unsigned __int8 *)(v9 + 34);
    if ( (v30 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, v8, v30 & 7, *(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL);
    v31 = (*(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)v14 ^= (v31 ^ *(_QWORD *)v14) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v31 )
      MiPfnShareCountIsZero(48 * v8 - 0x58000000000LL, 0LL);
    if ( v29 != -1LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
      v34 = 48 * v29;
      v14 = (volatile signed __int32 *)(v34 - 0x58000000000LL + 24);
      v48 = 0;
      while ( _interlockedbittestandset64(v14, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v48, v31, v30);
        while ( *(__int64 *)v14 < 0 );
      }
      v35 = *(_BYTE *)(v34 - 0x58000000000LL + 34);
      v36 = *(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v35 & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, v34 / 48, v35 & 7, *(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)v14 ^= ((v36 - 1) ^ *(_QWORD *)v14) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v36 == 1 )
        MiPfnShareCountIsZero(v34 - 0x58000000000LL, 0LL);
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v28 )
    MiReleasePageFileInfo(v54, v28, 1);
  LOBYTE(v56) = v10;
  BYTE1(v56) = (2 * v11) | 1;
  return (unsigned __int16)v56;
}
