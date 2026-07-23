/*
 * XREFs of MiDeleteClusterPage @ 0x1402C641C
 * Callers:
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x140039750 (MiDeleteBatch.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteClusterPage(unsigned __int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v5; // rdi
  _KPROCESS *Process; // r14
  struct _KEVENT *v7; // r13
  __int64 ContainingPageTable; // r12
  unsigned int v9; // r9d
  __int64 v10; // rax
  ULONG_PTR v11; // rsi
  int v12; // r9d
  __int64 v13; // r11
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // r13
  __int64 v18; // rbp
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r12
  __int64 *v21; // r15
  __int64 v22; // r8
  char v23; // al
  char v24; // al
  char v25; // al
  unsigned __int64 v26; // rax
  char v27; // cl
  __int64 v28; // r8
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r14
  ULONG_PTR v34; // rax
  ULONG_PTR BugCheckParameter4; // r9
  int v36; // [rsp+30h] [rbp-58h] BYREF
  int v37; // [rsp+34h] [rbp-54h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT *v39; // [rsp+40h] [rbp-48h]
  __int64 v40; // [rsp+48h] [rbp-40h]
  int v41; // [rsp+90h] [rbp+8h] BYREF
  __int64 v42; // [rsp+A0h] [rbp+18h]
  int v43; // [rsp+A8h] [rbp+20h] BYREF

  v42 = a3;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = *(struct _KEVENT **)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  v39 = v7;
  ContainingPageTable = MiGetContainingPageTable(a1);
  v9 = 0;
  do
  {
    v10 = MI_READ_PTE_LOCK_FREE(a1 + 8LL * v9);
    if ( !v10 )
      return 0LL;
    if ( (v10 & 0x400) == 0 )
      return 0LL;
    v38 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFLL;
    if ( v12 )
    {
      if ( v11 != v5 )
        return 0LL;
    }
    v14 = 48 * v11 - 0x58000000000LL;
    v15 = *(_QWORD *)(v14 + 40);
    if ( (v15 & 0x200000000000000LL) != 0 || *(struct _KEVENT **)(v13 + 8 * ((v15 >> 40) & 0x3FF)) != v7 )
      return 0LL;
    v9 = v12 + 1;
    v5 = v11 + 1;
  }
  while ( v9 < 0x10 );
  MiDeleteBatch(a2);
  v17 = v11 - 15;
  v18 = 48 * ContainingPageTable - 0x58000000000LL;
  v40 = v18;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  v19 = 0xC000000000000000uLL;
  v20 = 0LL;
  v21 = (__int64 *)(a1 + 120);
  do
  {
    v41 = 0;
    v22 = 0x7FFFFFFFFFFFFFFFLL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v41, v16, v22);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
      v22 = 0x7FFFFFFFFFFFFFFFLL;
      v19 = 0xC000000000000000uLL;
    }
    if ( (__int64 *)(*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) != v21 )
    {
      v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v21);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v21, v34, BugCheckParameter4);
    }
    LOBYTE(v16) = *(_BYTE *)(v14 + 34);
    if ( (v16 & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (__int64)(v14 + 0x58000000000LL) / 48,
        v16 & 7,
        *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( *(_WORD *)(v14 + 32) != 1 || (v23 = *(_BYTE *)(v14 + 35), (v23 & 0x40) != 0) || v20 )
    {
      if ( (*(_QWORD *)(v14 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v14 + 24) |= 0x4000000000000000uLL;
      if ( !v20 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v20 = v14;
        v11 = v17 + 15;
        v14 = 48 * (v17 + 15) - 0x58000000000LL;
        if ( v14 > v20 )
        {
          v29 = v14 + 24;
          v30 = v14 - v20 - 1;
          v16 = (v30 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64;
          v31 = v30 / 0x30 + 1;
          v14 += -48LL * v31;
          do
          {
            v43 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v43, v16, v22);
              while ( *(__int64 *)v29 < 0 );
            }
            *(_QWORD *)(v29 + 16) &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v11, 2);
            _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
            v29 -= 48LL;
            --v11;
            --v31;
          }
          while ( v31 );
          v18 = v40;
        }
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v36, v16, v22);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        v19 = 0xC000000000000000uLL;
      }
      *(_QWORD *)(v14 + 24) &= v19;
      if ( (*(_WORD *)(v14 + 32))-- == 1 )
      {
        MiPfnReferenceCountIsZero(v14, v11);
      }
      else
      {
        ++*(_QWORD *)(v42 + 8);
        *(_BYTE *)(v14 + 34) |= 7u;
      }
    }
    else
    {
      *(_QWORD *)(v14 + 24) &= v19;
      *(_BYTE *)(v14 + 35) = v23 & 0xF8;
      v24 = (*(_QWORD *)(v14 + 40) >> 54) & 7;
      *(_WORD *)(v14 + 32) = 0;
      if ( v24 == 3 )
        MiClearPfnImageVerified(v14, 12);
      MiReleasePageFileSpace(v39, *(_QWORD *)(v14 + 16));
      if ( (*(_BYTE *)(v14 + 34) & 0xC0) != 0x40 )
      {
        MiAbortCombineScan(v14);
        *(_BYTE *)(v14 + 34) = *(_BYTE *)(v14 + 34) & 0x3F | 0x40;
      }
      v25 = *(_BYTE *)(v14 + 35);
      if ( (v25 & 0x10) != 0 )
        *(_BYTE *)(v14 + 35) = v25 & 0xEF;
      v26 = *(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
      v27 = *(_BYTE *)(v14 + 34) & 0xEF;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_BYTE *)(v14 + 34) = v27;
      *(_QWORD *)(v14 + 40) = v26 | 0xFFFFFFFFCLL;
      *(_QWORD *)(v14 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v14 + 34) = v27 & 0xF8 | 1;
      if ( v11 == v17 )
        MiInsertLargePageInNodeListHelper(v11, 0x10uLL, 1, 0LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( MiPteInShadowRange((unsigned __int64)v21) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v28 = 1LL;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_52;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
      {
        goto LABEL_52;
      }
      if ( (v16 & 1) != 0 )
        v16 |= 0x8000000000000000uLL;
    }
LABEL_52:
    *v21 = v16;
    if ( (_DWORD)v28 )
      MiWritePteShadow((__int64)v21, v16);
    v14 -= 48LL;
    --v11;
    --v21;
  }
  while ( v11 >= v17 );
  v37 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v37, v16, v28);
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
