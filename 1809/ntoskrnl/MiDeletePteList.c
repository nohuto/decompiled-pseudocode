/*
 * XREFs of MiDeletePteList @ 0x140035B80
 * Callers:
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011BA24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiReduceShareCount @ 0x1401240AC (MiReduceShareCount.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiDecrementCloneBlockReference @ 0x1402C9820 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiDeletePteList(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // r13d
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // r15
  __int64 v16; // rbp
  struct _KEVENT *v17; // r11
  __int64 ContainingPageTable; // r15
  __int64 v19; // r10
  __int64 v20; // r9
  char v21; // dl
  ULONG_PTR v22; // rcx
  ULONG_PTR v23; // rcx
  int IsZero; // eax
  unsigned __int64 v25; // rdx
  bool v26; // zf
  __int64 v27; // rbx
  char v28; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  ULONG_PTR v30; // rcx
  __int64 v31; // rbx
  unsigned __int64 *v32; // rdx
  __int64 v33; // r10
  __int64 v34; // rdx
  unsigned __int64 v35; // r12
  bool v36; // r13
  unsigned __int64 v37; // rbx
  int v38; // eax
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v46; // rdx
  __int64 v47; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+38h] [rbp-80h]
  int v49; // [rsp+3Ch] [rbp-7Ch]
  struct _KEVENT *v50; // [rsp+40h] [rbp-78h]
  int v51; // [rsp+48h] [rbp-70h] BYREF
  int v52; // [rsp+4Ch] [rbp-6Ch] BYREF
  int v53; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-64h]
  int v55; // [rsp+58h] [rbp-60h] BYREF
  __int64 v56; // [rsp+60h] [rbp-58h]
  __int64 v57; // [rsp+68h] [rbp-50h]
  unsigned __int64 v58; // [rsp+70h] [rbp-48h]
  __int64 v59; // [rsp+78h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 12);
  v5 = 0;
  v48 = 0;
  v7 = a1;
  v56 = 0LL;
  v57 = -1LL;
  v54 = v4;
  MiFlushTbList(a1, a2, a3, a4);
  result = 0LL;
  v9 = 0LL;
  v49 = 0;
  if ( !v4 )
    return result;
  do
  {
    v10 = *(_QWORD *)(v7 + 8 * result + 24) & 0xFFFFFFFFFFFFF000uLL;
    v59 = (*(_QWORD *)(v7 + 8 * result + 24) & 0x3FFLL) + 1;
    v58 = v10;
    do
    {
      v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v12 = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v12 & 1) != 0
        && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 8 * ((v11 >> 3) & 0x1FF));
          v41 = v12 | 0x20;
          if ( (v40 & 0x20) == 0 )
            v41 = *(_QWORD *)v11;
          v12 = v41;
          if ( (v40 & 0x42) != 0 )
            v12 = v41 | 0x42;
        }
      }
      v13 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v47 = v13;
      if ( (unsigned __int64)&v47 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v47 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v42 )
        {
          v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)&v47 >> 3) & 0x1FF));
          v44 = v13 | 0x20;
          if ( (v43 & 0x20) == 0 )
            v44 = v13;
          v13 = v44;
          if ( (v43 & 0x42) != 0 )
            v13 = v44 | 0x42;
        }
      }
      v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL);
      v15 = *(_QWORD *)(v14 - 0x58000000000LL + 40);
      v16 = v14 - 0x58000000000LL;
      v17 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((v15 >> 40) & 0x3FF));
      v50 = v17;
      if ( (v15 & 0x200000000000000LL) != 0 )
      {
        v35 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
        v36 = *(_QWORD *)(v16 + 8) >= 0LL;
        v37 = 0LL;
        ContainingPageTable = MiGetContainingPageTable(v11);
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        if ( (v47 & 0x42) != 0 )
          v37 = MiCaptureDirtyBitToPfn(v16);
        MiDecrementShareCount(v16);
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 )
          MiReleasePageFileInfo(v50, v37, 1);
        if ( v36 )
        {
          v38 = MiDecrementCombinedPte(a2 + 1280, v35);
        }
        else
        {
          CloneAddress = MiLocateCloneAddress(a2, v35);
          v38 = MiDecrementCloneBlockReference(CloneAddress, v46);
        }
        if ( v38 == 3 )
        {
          ++*(_QWORD *)(a4 + 8);
        }
        else if ( v38 == 5 )
        {
          ++*(_QWORD *)(a4 + 16);
        }
        v10 = v58;
        v25 = a3;
        v5 = v48;
        v47 = a3;
      }
      else
      {
        ContainingPageTable = v15 & 0xFFFFFFFFFLL;
        v52 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v52);
            while ( *(__int64 *)(v16 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
          v17 = v50;
        }
        v19 = *(_QWORD *)(v16 + 16);
        v20 = *(_QWORD *)(v16 + 24) | 0x4000000000000000LL;
        *(_QWORD *)(v16 + 24) = v20;
        if ( (v19 & 2) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v17, v16 + 16) && *(_WORD *)(v16 + 32) == 1 && a3 )
        {
          v9 = v33;
          *v32 = v33 & 0xFFFFFFFFFFFFFFFDuLL;
        }
        v21 = *(_BYTE *)(v16 + 34);
        v22 = v20 & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v21 & 7) != 6 )
          KeBugCheckEx(0x4Eu, 0x99uLL, v14 / 48, v21 & 7, v22);
        v23 = v22 - 1;
        *(_QWORD *)(v16 + 24) = v20 ^ (v23 ^ v20) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v23 )
        {
          IsZero = MiPfnShareCountIsZero(v16);
          v17 = v50;
          if ( IsZero == 3 )
            ++*(_QWORD *)(a4 + 8);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v47 = a3;
        if ( v9 )
        {
          v34 = *((_QWORD *)&v17[297].Header.WaitListHead.Flink + ((unsigned __int16)v9 >> 12));
          if ( qword_14043B180 && (v9 & 0x10) == 0 )
            v9 &= ~qword_14043B180;
          v47 = MiTransferSoftwarePte(a3, v34, HIDWORD(v9), 2LL);
          v9 = 0LL;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        v25 = v47;
      }
      if ( v11 < 0xFFFFF6FB7DBED000uLL || v11 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_15;
      if ( !(unsigned int)MiPteHasShadow(v23, v25) )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v25 & 1) != 0 )
        {
          v25 = v47 | 0x8000000000000000uLL;
        }
LABEL_15:
        *(_QWORD *)v11 = v25;
        goto LABEL_16;
      }
      if ( !HIBYTE(word_14043B26C) && (v25 & 1) != 0 )
        v25 |= 0x8000000000000000uLL;
      *(_QWORD *)v11 = v25;
      MiWritePteShadow(v11);
LABEL_16:
      if ( ContainingPageTable != v57 )
      {
        v31 = v56;
        if ( v56 )
        {
          v53 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v53);
              while ( *(__int64 *)(v31 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
          }
          MiReduceShareCount(v31, v5);
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v5 = 0;
        }
        v57 = ContainingPageTable;
        v56 = 48 * ContainingPageTable - 0x58000000000LL;
      }
      ++v5;
      v10 += 4096LL;
      v48 = v5;
      v26 = v59-- == 1;
      v58 = v10;
    }
    while ( !v26 );
    v7 = a1;
    result = (unsigned int)(v49 + 1);
    v49 = result;
  }
  while ( (unsigned int)result < v54 );
  if ( v5 )
  {
    v27 = v56;
    v55 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v55);
      while ( *(__int64 *)(v27 + 24) < 0 );
    }
    v28 = *(_BYTE *)(v27 + 34);
    BugCheckParameter4 = *(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (v28 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, (v27 + 0x58000000000LL) / 48, v28 & 7, BugCheckParameter4);
    v30 = BugCheckParameter4 - v5;
    *(_QWORD *)(v27 + 24) ^= (v30 ^ *(_QWORD *)(v27 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v30 )
      MiPfnShareCountIsZero(v27);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
