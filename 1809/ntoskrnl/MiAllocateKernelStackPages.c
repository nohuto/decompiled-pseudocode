/*
 * XREFs of MiAllocateKernelStackPages @ 0x1400B55A0
 * Callers:
 *     MmCreateKernelStack @ 0x1400C9FF0 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140132FA0 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int16 a5,
        char a6)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  _QWORD *v9; // r14
  int v10; // r12d
  int v11; // r13d
  unsigned int v12; // ebx
  __int64 Page; // rax
  __int64 v14; // rdi
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // r8
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v28; // rbp
  unsigned int Queue; // r14d
  unsigned int v30; // r14d
  int v31; // r10d
  char v32; // al
  __int64 v33; // rcx
  char v34; // r14
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // r8
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rax
  char v41; // al
  _QWORD *v43; // rbx
  unsigned __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // [rsp+20h] [rbp-78h] BYREF
  int v53; // [rsp+24h] [rbp-74h] BYREF
  int v54; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v55; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v56; // [rsp+38h] [rbp-60h] BYREF
  __int64 v57; // [rsp+40h] [rbp-58h]
  unsigned __int64 v58; // [rsp+48h] [rbp-50h]
  volatile signed __int32 *v59; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v60; // [rsp+58h] [rbp-40h]
  unsigned __int16 v61; // [rsp+5Ah] [rbp-3Eh]
  unsigned __int8 v62; // [rsp+B0h] [rbp+18h]

  v6 = a3;
  v7 = a2;
  if ( !a3 )
    return 1LL;
  v58 = a2 + 8 * a3;
  v9 = 0LL;
  MiInitializePageColorBase(0LL, (unsigned __int16)(a5 + 1), (__int64)&v59);
  v10 = v60;
  v11 = v61;
  while ( 1 )
  {
    v12 = v10 & _InterlockedExchangeAdd(v59, 1u) | v11;
    Page = MiGetPage(a1, v12, 0);
    if ( Page == -1 )
      break;
LABEL_4:
    v14 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)v14 = v9;
    v9 = (_QWORD *)v14;
    if ( !--v6 )
    {
      ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
      v16 = 0LL;
      v62 = MiLockWorkingSetShared((__int64)&unk_14043C580);
      v57 = (a4 >> 3) & 0xFFFFFFFFFFELL;
      v17 = 0x7FFFFFFFFFFFFFFFLL;
      v18 = 0xFFFFFA8000000000uLL;
      while ( 1 )
      {
        v19 = *(_QWORD *)v14;
        ValidPte ^= (ValidPte ^ (((__int64)(v14 - v18) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( v16 )
        {
          if ( (v7 & 0xFFF) != 0 )
            goto LABEL_8;
          MiUnlockPageTableInternal(&unk_14043C580, v16);
        }
        v16 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)&unk_14043C580, v16, 0);
        v18 = 0xFFFFFA8000000000uLL;
        v17 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        v20 = *(_QWORD *)v7;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL
          && v7 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v20 & 1) != 0
          && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
        {
          v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v44 )
          {
            v45 = *(_QWORD *)(v44 + 8 * ((v7 >> 3) & 0x1FF));
            v46 = v20 | 0x20;
            if ( (v45 & 0x20) == 0 )
              v46 = *(_QWORD *)v7;
            v20 = v46;
            if ( (v45 & 0x42) != 0 )
              v20 = v46 | 0x42;
          }
        }
        if ( v20 )
        {
          v22 = v20 & 0xFFFFFFFFFFFFFC9FuLL;
          goto LABEL_14;
        }
        v21 = 128LL;
        if ( !qword_14043B180 )
          goto LABEL_15;
        if ( (qword_14043B180 & 0x80) == 0 )
        {
          v22 = qword_14043B180;
LABEL_14:
          v21 = v22 | 0x80;
          goto LABEL_15;
        }
        v21 = 144LL;
LABEL_15:
        *(_WORD *)(v14 + 32) = 1;
        v23 = -2049LL;
        if ( (v21 & 0x400) == 0 )
          v23 = -9LL;
        *(_QWORD *)(v14 + 16) = v23 & v21 & 0xFFFFFFFFFC00FFFFuLL;
        v24 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v25 = *(_QWORD *)v24;
        if ( v24 >= 0xFFFFF6FB7DBED000uLL
          && v24 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v25 & 1) != 0
          && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
        {
          v47 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v47 )
          {
            v48 = *(_QWORD *)(v47 + 8 * ((v24 >> 3) & 0x1FF));
            v24 = v25 | 0x20;
            if ( (v48 & 0x20) == 0 )
              v24 = v25;
            v25 = v24;
            if ( (v48 & 0x42) != 0 )
              v25 = v24 | 0x42;
          }
        }
        v55 = v25;
        if ( (unsigned __int64)&v55 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v55 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v25 & 1) != 0
          && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
        {
          v24 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v24 )
          {
            v49 = *(_QWORD *)(v24 + 8 * (((unsigned __int64)&v55 >> 3) & 0x1FF));
            v24 = v25 | 0x20;
            if ( (v49 & 0x20) == 0 )
              v24 = v25;
            v25 = v24;
            if ( (v49 & 0x42) != 0 )
              v25 = v24 | 0x42;
          }
        }
        v26 = (v25 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v14 + 40) = v26 | *(_QWORD *)(v14 + 40) & 0xFFFFFFF000000000uLL;
        CurrentThread = KeGetCurrentThread();
        v28 = v18 + 48 * v26;
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          v30 = Queue >> 9;
        else
          LOBYTE(v30) = PsGetPagePriorityThread(CurrentThread);
        v31 = 0;
        v52 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v52, v24, v26);
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
          v18 = 0xFFFFFA8000000000uLL;
          v31 = 0;
          v17 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v53 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v53, v24, v26);
            while ( *(__int64 *)(v28 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
          v18 = 0xFFFFFA8000000000uLL;
          v31 = 0;
          v17 = 0x7FFFFFFFFFFFFFFFLL;
        }
        *(_QWORD *)(v28 + 24) ^= ((*(_QWORD *)(v28 + 24) + 1LL) ^ *(_QWORD *)(v28 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), v17);
        v32 = *(_BYTE *)(v14 + 34);
        if ( (v32 & 0xC0) != 0x40 )
        {
          MiChangePageAttribute(v14, 1LL, 1LL);
          v32 = *(_BYTE *)(v14 + 34);
          v31 = 0;
          v18 = 0xFFFFFA8000000000uLL;
          v17 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v33 = *(_QWORD *)(v14 + 24);
        v34 = (*(_BYTE *)(v14 + 35) ^ v30) & 7;
        *(_QWORD *)(v14 + 8) = v7;
        *(_BYTE *)(v14 + 35) ^= v34;
        v35 = v33 & 0xC000000000000000uLL | 1;
        *(_QWORD *)(v14 + 24) = v35;
        *(_BYTE *)(v14 + 34) = v32 & 0xF8 | 6;
        *(_BYTE *)(v14 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), v17);
        v36 = ValidPte;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v35, ValidPte) )
          {
            if ( !HIBYTE(word_14043B26C) && (ValidPte & 1) != 0 )
              v36 |= 0x8000000000000000uLL;
            *(_QWORD *)v7 = v36;
            MiWritePteShadow(v7);
            v18 = 0xFFFFFA8000000000uLL;
            v31 = 0;
            goto LABEL_30;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (ValidPte & 1) != 0 )
          {
            v36 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v7 = v36;
LABEL_30:
        v37 = *(_QWORD *)v7;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL
          && v7 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v37 & 1) != 0
          && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v36 )
          {
            v50 = *(_QWORD *)(v36 + 8 * ((v7 >> 3) & 0x1FF));
            v36 = v37 | 0x20;
            if ( (v50 & 0x20) == 0 )
              v36 = *(_QWORD *)v7;
            v37 = v36;
            if ( (v50 & 0x42) != 0 )
              v37 = v36 | 0x42;
          }
        }
        v56 = v37;
        if ( (unsigned __int64)&v56 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v56 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v37 & 1) != 0
          && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v36 )
          {
            v51 = *(_QWORD *)(v36 + 8 * (((unsigned __int64)&v56 >> 3) & 0x1FF));
            v36 = v37 | 0x20;
            if ( (v51 & 0x20) == 0 )
              v36 = v37;
            v37 = v36;
            if ( (v51 & 0x42) != 0 )
              v37 = v36 | 0x42;
          }
        }
        v38 = (v37 >> 12) & 0xFFFFFFFFFLL;
        v39 = v18 + 48 * v38;
        v54 = v31;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v54, v36, v38);
            while ( *(__int64 *)(v39 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
          v18 = 0xFFFFFA8000000000uLL;
          v17 = 0x7FFFFFFFFFFFFFFFLL;
        }
        *(_QWORD *)(v39 + 40) = *(_QWORD *)(v39 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
        v40 = v57 | *(_QWORD *)v39 & 0xFFFFF00000000001uLL;
        *(_QWORD *)v39 = v40;
        if ( a4 && (v40 & 1) == 0 )
          *(_QWORD *)v39 = v40 | 1;
        v41 = *(_BYTE *)(v39 + 35);
        *(_QWORD *)(v39 + 16) |= 0x3E0uLL;
        *(_BYTE *)(v39 + 35) = v41 & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), v17);
        v7 += 8LL;
        v14 = v19;
        if ( v7 >= v58 )
        {
          if ( v16 )
            MiUnlockPageTableInternal(&unk_14043C580, v16);
          MiUnlockWorkingSetShared((__int64)&unk_14043C580, v62);
          return 1LL;
        }
      }
    }
  }
  while ( (a6 & 2) == 0 )
  {
    MiWaitForFreePage(a1);
    Page = MiGetPage(a1, v12, 0);
    if ( Page != -1 )
      goto LABEL_4;
  }
  if ( v9 )
  {
    do
    {
      v43 = (_QWORD *)*v9;
      MiReleaseFreshPage(v9);
      v9 = v43;
    }
    while ( v43 );
  }
  return 0LL;
}
