/*
 * XREFs of MiDeleteClusterPage @ 0x140098070
 * Callers:
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiDeleteBatch @ 0x1400290C0 (MiDeleteBatch.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiAbortCombineScan @ 0x140098898 (MiAbortCombineScan.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiClearPfnImageVerified @ 0x1400BB9EC (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteClusterPage(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  unsigned int v9; // r9d
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  ULONG_PTR v12; // rbx
  int v13; // r9d
  unsigned __int8 *v14; // r10
  __int64 v15; // r11
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rcx
  ULONG_PTR v18; // r13
  __int64 v19; // r12
  int v20; // r9d
  _QWORD *v21; // rsi
  ULONG_PTR v22; // r15
  char v23; // dl
  char v24; // al
  char v25; // al
  unsigned __int64 v26; // rax
  char v27; // al
  unsigned __int64 v28; // rax
  char v29; // cl
  __int64 v30; // rdx
  __int64 v31; // rcx
  ULONG_PTR v34; // r14
  unsigned __int64 v35; // rbp
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  ULONG_PTR v42; // rax
  ULONG_PTR BugCheckParameter4; // r9
  int v44; // [rsp+30h] [rbp-68h] BYREF
  int v45; // [rsp+34h] [rbp-64h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-60h] BYREF
  __int64 v47; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-50h] BYREF
  __int64 v49; // [rsp+50h] [rbp-48h]
  __int64 v50; // [rsp+58h] [rbp-40h]
  int v51; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v52; // [rsp+B0h] [rbp+18h]
  int v53; // [rsp+B8h] [rbp+20h] BYREF

  v52 = a3;
  v4 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v49 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v37 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v6 >> 3) & 0x1FF));
      v38 = v7 | 0x20;
      if ( (v37 & 0x20) == 0 )
        v38 = v7;
      v7 = v38;
      if ( (v37 & 0x42) != 0 )
        v7 = v38 | 0x42;
    }
  }
  v47 = v7;
  v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v47) >> 12) & 0xFFFFFFFFFLL;
  v9 = 0;
  do
  {
    v10 = *(_QWORD *)(a1 + 8LL * v9);
    v11 = a1 + 8LL * v9;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL
      && v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      v39 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 8 * ((v11 >> 3) & 0x1FF));
        v41 = v10 | 0x20;
        if ( (v40 & 0x20) == 0 )
          v41 = *(_QWORD *)(a1 + 8LL * v9);
        v10 = v41;
        if ( (v40 & 0x42) != 0 )
          v10 = v41 | 0x42;
      }
    }
    if ( !v10 )
      return 0LL;
    if ( (v10 & 0x400) == 0 )
      return 0LL;
    v48 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v48) >> 12) & 0xFFFFFFFFFLL;
    if ( v13 )
    {
      if ( v12 != v4 )
        return 0LL;
    }
    v16 = 48 * v12 - 0x58000000000LL;
    if ( byte_14046945E )
    {
      if ( _bittest64((const signed __int64 *)qword_140469D80, v12 >> 9) )
        return 0LL;
    }
    v17 = *(_QWORD *)(v16 + 40);
    if ( (v17 & 0x200000000000000LL) != 0 || *(_QWORD *)(qword_140465E88 + 8 * ((v17 >> 40) & 0x3FF)) != v15 )
      return 0LL;
    v9 = v13 + 1;
    v4 = v12 + 1;
  }
  while ( v9 < 0x10 );
  MiDeleteBatch(v14);
  v18 = v12 - 15;
  v19 = 48 * v8 - 0x58000000000LL;
  v50 = v19;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  v20 = 0;
  v21 = (_QWORD *)(a1 + 120);
  v22 = 0LL;
  do
  {
    v51 = v20;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    if ( (_QWORD *)(*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != v21 )
    {
      v42 = MI_READ_PTE_LOCK_FREE(v21);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v21, v42, BugCheckParameter4);
    }
    v23 = *(_BYTE *)(v16 + 34);
    if ( (v23 & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (__int64)(v16 + 0x58000000000LL) / 48,
        v23 & 7,
        *(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( *(_WORD *)(v16 + 32) != 1 || (v24 = *(_BYTE *)(v16 + 35), (v24 & 0x40) != 0) || v22 )
    {
      if ( (*(_QWORD *)(v16 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v16 + 24) |= 0x4000000000000000uLL;
      if ( !v22 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v22 = v16;
        v12 = v18 + 15;
        v16 = 48 * (v18 + 15) - 0x58000000000LL;
        if ( v16 > v22 )
        {
          v34 = v16 + 24;
          v35 = (v16 - v22 - 1) / 0x30 + 1;
          v16 += -48LL * v35;
          do
          {
            v53 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v53);
              while ( *(__int64 *)v34 < 0 );
            }
            *(_QWORD *)(v34 + 16) &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v12, 2);
            _InterlockedAnd64((volatile signed __int64 *)v34, 0x7FFFFFFFFFFFFFFFuLL);
            --v12;
            v34 -= 48LL;
            --v35;
          }
          while ( v35 );
          v19 = v50;
        }
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
      }
      *(_QWORD *)(v16 + 24) &= 0xC000000000000000uLL;
      if ( (*(_WORD *)(v16 + 32))-- == 1 )
      {
        MiPfnReferenceCountIsZero(v16, v12);
      }
      else
      {
        ++*(_QWORD *)(v52 + 8);
        *(_BYTE *)(v16 + 34) |= 7u;
      }
    }
    else
    {
      *(_QWORD *)(v16 + 24) &= 0xC000000000000000uLL;
      *(_BYTE *)(v16 + 35) = v24 & 0xF8;
      v25 = (*(_QWORD *)(v16 + 40) >> 54) & 7;
      *(_WORD *)(v16 + 32) = 0;
      if ( v25 == 3 )
        MiClearPfnImageVerified(v16);
      v46 = *(_QWORD *)(v16 + 16);
      if ( (v46 & 0x400) == 0 )
      {
        v26 = (v46 & 4) != 0 || (v46 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v46) : 0LL;
        v46 = v26;
        if ( v26 )
          MiReleasePageFileInfo(v49, v26, 0);
      }
      *(_QWORD *)(v16 + 16) = ZeroPte;
      if ( (*(_BYTE *)(v16 + 34) & 0xC0) != 0x40 )
      {
        MiAbortCombineScan(v16);
        *(_BYTE *)(v16 + 34) = *(_BYTE *)(v16 + 34) & 0x3F | 0x40;
      }
      v27 = *(_BYTE *)(v16 + 35);
      if ( (v27 & 0x10) != 0 )
        *(_BYTE *)(v16 + 35) = v27 & 0xEF;
      v28 = *(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
      v29 = *(_BYTE *)(v16 + 34) & 0xEF;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_BYTE *)(v16 + 34) = v29;
      *(_QWORD *)(v16 + 40) = v28 | 0xFFFFFFFFCLL;
      *(_BYTE *)(v16 + 34) = v29 & 0xF8 | 1;
      *(_QWORD *)(v16 + 24) &= ~0x4000000000000000uLL;
      if ( v12 == v18 )
        MiInsertLargePageInNodeList(v12, 1, 0);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !MiPteInShadowRange((unsigned __int64)v21) )
      goto LABEL_35;
    if ( !(unsigned int)MiPteHasShadow(v31) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v30 & 1) != 0 )
      {
        v30 |= 0x8000000000000000uLL;
      }
LABEL_35:
      *v21 = v30;
      goto LABEL_36;
    }
    if ( !HIBYTE(word_1404658EC) && (v30 & 1) != 0 )
      v30 |= 0x8000000000000000uLL;
    *v21 = v30;
    MiWritePteShadow(v21, v30);
    v20 = 0;
LABEL_36:
    v16 -= 48LL;
    --v12;
    --v21;
  }
  while ( v12 >= v18 );
  v45 = v20;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v45);
    while ( *(__int64 *)(v19 + 24) < 0 );
  }
  *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
