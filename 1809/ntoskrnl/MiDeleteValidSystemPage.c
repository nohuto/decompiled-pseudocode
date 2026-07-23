/*
 * XREFs of MiDeleteValidSystemPage @ 0x14007A850
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiDeleteKernelStack @ 0x14007A5A0 (MiDeleteKernelStack.c)
 *     MiTerminateWsleCluster @ 0x14007B958 (MiTerminateWsleCluster.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiDecrementCombinedPte @ 0x14011FA64 (MiDecrementCombinedPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiIsPfnSystemCharged @ 0x14016B8F0 (MiIsPfnSystemCharged.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x1402AB2F4 (MiDriverPageIsDangling.c)
 */

int __fastcall MiDeleteValidSystemPage(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  struct _KEVENT *v11; // r13
  unsigned __int64 v12; // rcx
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  ULONG_PTR v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdx
  ULONG_PTR v18; // rsi
  unsigned __int8 v19; // r8
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v26; // ebx
  char v27; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  ULONG_PTR v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // r8
  __int64 v41; // rax
  __int64 v43; // r11
  int v45; // [rsp+30h] [rbp-58h] BYREF
  int v46; // [rsp+34h] [rbp-54h] BYREF
  __int64 v47; // [rsp+38h] [rbp-50h]
  ULONG_PTR v48; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT *v49; // [rsp+48h] [rbp-40h]
  int v51; // [rsp+98h] [rbp+10h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+20h]

  v52 = a4;
  v4 = *(_QWORD *)a2;
  v6 = ZeroPte;
  v7 = 0LL;
  v9 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v33 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 8 * ((a2 >> 3) & 0x1FF));
      v35 = v4 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v35 = v4;
      v4 = v35;
      if ( (v34 & 0x42) != 0 )
        v4 = v35 | 0x42;
    }
  }
  v10 = *(unsigned __int16 *)(a1 + 174);
  v48 = v4;
  v11 = *(struct _KEVENT **)(qword_14043B808 + 8 * v10);
  if ( (unsigned __int64)&v48 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v48 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v12 = v4;
    if ( (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      v36 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      v12 = v4;
      if ( v36 )
      {
        v12 = v4 | 0x20;
        v37 = *(_QWORD *)(v36 + 8 * (((unsigned __int64)&v48 >> 3) & 0x1FF));
        if ( (v37 & 0x20) == 0 )
          v12 = v4;
        if ( (v37 & 0x42) != 0 )
          v12 |= 0x42uLL;
      }
    }
  }
  else
  {
    v12 = v4;
  }
  v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL);
  v47 = v13;
  v14 = *(_QWORD *)(v13 - 0x58000000000LL + 40);
  v15 = v13 - 0x58000000000LL;
  v49 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((v14 >> 40) & 0x3FF));
  if ( (v14 & 0x200000000000000LL) != 0 )
  {
    v30 = *(_QWORD *)(v15 + 8);
    v9 = v30 | 0x8000000000000000uLL;
    if ( v30 < 0 )
      v9 = 0LL;
    v18 = 48 * MiGetContainingPageTable(a2) - 0x58000000000LL;
    v51 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51, v31, v32);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    if ( (v4 & 0x42) != 0 )
      v6 = MiCaptureDirtyBitToPfn(v15);
    v16 = *(_QWORD *)(v15 + 16);
    if ( (v16 & 0x400) == 0 || (v4 & 0x200) != 0 )
    {
      v20 = v52;
      ++*(_QWORD *)(v52 + 24);
    }
    else
    {
      if ( qword_14043B180 && (v16 & 0x10) == 0 )
        v16 &= ~qword_14043B180;
      v20 = v52;
      v16 = *(_DWORD *)(*(_QWORD *)(v16 >> 16) + 56LL) & 0x820;
      if ( (_DWORD)v16 == 2080 )
      {
        ++*(_QWORD *)(v52 + 24);
        v13 = v47;
        goto LABEL_17;
      }
    }
    v13 = v47;
    goto LABEL_17;
  }
  if ( v15 != qword_14043BE80 )
  {
    v16 = *(_QWORD *)(v15 + 8);
    if ( (v16 | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v4, *(_QWORD *)(v15 + 8));
    v17 = v14 & 0xFFFFFFFFFLL;
    if ( v17 == 0xFFFFFFFFFLL )
      v18 = 0LL;
    else
      v18 = 48 * v17 - 0x58000000000LL;
    ++*(_QWORD *)(a4 + 24);
    v45 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v45, v17, v7);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
      v13 = v47;
    }
    *(_QWORD *)(v15 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v15 + 40) >> 54) & 7) == 2 )
    {
      v6 = 0LL;
      v19 = *(_BYTE *)(v15 + 34);
      if ( (v19 & 0x10) == 0 )
      {
        if ( (((*(_QWORD *)(v15 + 16) & 0x400LL) == 0) & (unsigned __int8)~(v19 >> 3)) != 0 )
        {
          v41 = MiCapturePageFileInfoInline(v15 + 16, 1LL);
          v19 = *(_BYTE *)(v15 + 34);
          v6 = v41;
          v13 = v47;
        }
        *(_BYTE *)(v15 + 34) = v19 | 0x10;
      }
      v16 = *(unsigned __int16 *)(v15 + 32);
      if ( (_WORD)v16 != 1 && ((_WORD)v16 != 2 || (*(_BYTE *)(v15 + 34) & 8) == 0) && v49 != v11 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, v13 / 48, (unsigned __int16)v16);
      *(_QWORD *)(v15 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    }
    if ( (a3 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v15) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v15 + 35) &= ~0x20u;
    }
    v20 = v52;
LABEL_17:
    if ( (a3 & 0x10) != 0 )
      *(_BYTE *)(v15 + 35) &= ~8u;
    v21 = ZeroPte;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v16, ZeroPte) )
      {
        if ( !HIBYTE(word_14043B26C) && (v21 & 1) != 0 )
          v21 |= v43;
        *(_QWORD *)a2 = v21;
        MiWritePteShadow(a2);
        v13 = v47;
        goto LABEL_21;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v21 & 1) != 0 )
      {
        v21 |= v43;
      }
    }
    *(_QWORD *)a2 = v21;
LABEL_21:
    v22 = *(unsigned __int8 *)(v15 + 34);
    v23 = *(_QWORD *)(v15 + 24);
    if ( (v22 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, v13 / 48, v22 & 7, *(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v24 = (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    CurrentThread = (struct _KTHREAD *)(v23 ^ (v23 ^ v24) & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(v15 + 24) = CurrentThread;
    if ( v24 )
    {
      v26 = 2;
    }
    else
    {
      LODWORD(CurrentThread) = MiPfnShareCountIsZero(v15, 0LL);
      v26 = (int)CurrentThread;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v18 )
    {
      v46 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v46, v23, v22);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      v27 = *(_BYTE *)(v18 + 34);
      BugCheckParameter4 = *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v27 & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (__int64)(v18 + 0x58000000000LL) / 48, v27 & 7, BugCheckParameter4);
      v29 = BugCheckParameter4 - 1;
      CurrentThread = (struct _KTHREAD *)(*(_QWORD *)(v18 + 24) ^ (v29 ^ *(_QWORD *)(v18 + 24)) & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v18 + 24) = CurrentThread;
      if ( !v29 )
        LODWORD(CurrentThread) = MiPfnShareCountIsZero(v18, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v6 )
      LODWORD(CurrentThread) = MiReleasePageFileInfo(v49, v6, 1);
    if ( v9 )
    {
      LODWORD(CurrentThread) = MiDecrementCombinedPte(a1, v9);
      v26 = (int)CurrentThread;
    }
    if ( v26 == 3 )
      ++*(_QWORD *)(v20 + 8);
    return (int)CurrentThread;
  }
  LODWORD(CurrentThread) = MiPteInShadowRange(a2);
  if ( !(_DWORD)CurrentThread )
  {
LABEL_94:
    *(_QWORD *)a2 = v38;
    return (int)CurrentThread;
  }
  if ( !(unsigned int)MiPteHasShadow(v39, v38) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v38 & 1) != 0 )
    {
      LODWORD(CurrentThread) = 0;
      v38 |= 0x8000000000000000uLL;
    }
    goto LABEL_94;
  }
  if ( HIBYTE(word_14043B26C) == v40 && (v38 & 1) != 0 )
    v38 |= 0x8000000000000000uLL;
  *(_QWORD *)a2 = v38;
  LODWORD(CurrentThread) = MiWritePteShadow(a2);
  return (int)CurrentThread;
}
