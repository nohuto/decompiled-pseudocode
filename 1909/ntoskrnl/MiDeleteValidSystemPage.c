/*
 * XREFs of MiDeleteValidSystemPage @ 0x140024940
 * Callers:
 *     MiDeleteKernelStack @ 0x140024240 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsleCluster @ 0x14004E0A0 (MiTerminateWsleCluster.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfnSystemCharged @ 0x1400CEEFC (MiIsPfnSystemCharged.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 *     MiDecrementCombinedPte @ 0x140140D8C (MiDecrementCombinedPte.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x1402C3A74 (MiDriverPageIsDangling.c)
 */

struct _KTHREAD *__fastcall MiDeleteValidSystemPage(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int16 v20; // cx
  __int64 v21; // rdx
  char v22; // r8
  __int64 v23; // rcx
  struct _KTHREAD *result; // rax
  int v25; // ebx
  char v26; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  ULONG_PTR v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r10
  int v37; // [rsp+30h] [rbp-68h] BYREF
  int v38; // [rsp+34h] [rbp-64h] BYREF
  __int64 v39; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+40h] [rbp-58h]
  __int64 v41; // [rsp+48h] [rbp-50h]
  ULONG_PTR v42[9]; // [rsp+50h] [rbp-48h] BYREF
  int v44; // [rsp+A8h] [rbp+10h] BYREF

  v4 = ZeroPte;
  v5 = 0LL;
  v6 = *(_QWORD *)a2;
  v7 = 0LL;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v32 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
      v33 = v6 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = v6;
      v6 = v33;
      if ( (v32 & 0x42) != 0 )
        v6 = v33 | 0x42;
    }
  }
  v11 = *(unsigned __int16 *)(a1 + 174);
  v42[0] = v6;
  v40 = *(_QWORD *)(qword_140465E88 + 8 * v11);
  v12 = MI_READ_PTE_LOCK_FREE(v42);
  v14 = 0xFFFFFFFFFLL;
  v41 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL);
  v15 = v41 - 0x58000000000LL;
  v16 = *(_QWORD *)(v41 - 0x58000000000LL + 40);
  v18 = *(_QWORD *)(v17 + 8 * ((v16 >> 40) & 0x3FF));
  v39 = v18;
  if ( (v16 & 0x200000000000000LL) != 0 )
  {
    v29 = *(_QWORD *)(v15 + 8);
    v7 = v29 | 0x8000000000000000uLL;
    if ( v29 < 0 )
      v7 = 0LL;
    v5 = 48 * MiGetContainingPageTable(a2) - 0x58000000000LL;
    v44 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v44);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    if ( (v6 & 0x42) != 0 )
      v4 = MiCaptureDirtyBitToPfn(v15);
    v30 = *(_QWORD *)(v15 + 16);
    if ( (v30 & 0x400) == 0 || (v6 & 0x200) != 0 )
      goto LABEL_40;
    if ( qword_140465800 && (v30 & 0x10) == 0 )
      v30 &= ~qword_140465800;
    if ( (*(_DWORD *)(*(_QWORD *)(v30 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_40:
      ++*(_QWORD *)(a4 + 24);
LABEL_14:
    if ( (a3 & 0x10) != 0 )
      *(_BYTE *)(v15 + 35) &= ~8u;
    if ( (unsigned int)MiPteInShadowRange(a2, ZeroPte, v14, v18) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_1404658EC) && (v21 & 1) != 0 )
          v21 |= v36;
        *(_QWORD *)a2 = v21;
        MiWritePteShadow(a2, v21);
        goto LABEL_18;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v21 & 1) != 0 )
      {
        v21 |= v36;
      }
    }
    *(_QWORD *)a2 = v21;
LABEL_18:
    v22 = *(_BYTE *)(v15 + 34);
    if ( (v22 & 7) != 6 )
      KeBugCheckEx(0x4Eu, 0x99uLL, v41 / 48, v22 & 7, *(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v23 = (*(_QWORD *)(v15 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    result = (struct _KTHREAD *)(*(_QWORD *)(v15 + 24) ^ (v23 ^ *(_QWORD *)(v15 + 24)) & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(v15 + 24) = result;
    if ( v23 )
    {
      v25 = 2;
    }
    else
    {
      result = (struct _KTHREAD *)MiPfnShareCountIsZero(v15);
      v25 = (int)result;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v5 )
    {
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v38);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      v26 = *(_BYTE *)(v5 + 34);
      BugCheckParameter4 = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v26 & 7) != 6 )
        KeBugCheckEx(0x4Eu, 0x99uLL, (v5 + 0x58000000000LL) / 48, v26 & 7, BugCheckParameter4);
      v28 = BugCheckParameter4 - 1;
      result = (struct _KTHREAD *)(*(_QWORD *)(v5 + 24) ^ (v28 ^ *(_QWORD *)(v5 + 24)) & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v5 + 24) = result;
      if ( !v28 )
        result = (struct _KTHREAD *)MiPfnShareCountIsZero(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v4 )
      result = (struct _KTHREAD *)MiReleasePageFileInfo(v39, v4, 1LL);
    if ( v7 )
    {
      result = (struct _KTHREAD *)MiDecrementCombinedPte(a1, v7);
      v25 = (int)result;
    }
    if ( v25 == 3 )
      ++*(_QWORD *)(a4 + 8);
    return result;
  }
  if ( v15 != qword_140466540 )
  {
    if ( (*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) != a2 )
      KeBugCheckEx(0x1Au, 0x404uLL, a2, v6, *(_QWORD *)(v15 + 8));
    v19 = v16 & 0xFFFFFFFFFLL;
    if ( v19 != 0xFFFFFFFFFLL )
      v5 = 48 * v19 - 0x58000000000LL;
    ++*(_QWORD *)(a4 + 24);
    v37 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v37);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
      v13 = v40;
      v18 = v39;
    }
    *(_QWORD *)(v15 + 24) |= 0x4000000000000000uLL;
    if ( ((*(_QWORD *)(v15 + 40) >> 54) & 7) == 2 )
    {
      v14 = *(unsigned __int8 *)(v15 + 34);
      v4 = 0LL;
      if ( (v14 & 0x10) == 0 )
      {
        if ( (((*(_QWORD *)(v15 + 16) & 0x400LL) == 0) & (unsigned __int8)~((unsigned __int8)v14 >> 3)) != 0 )
        {
          v35 = MiCapturePageFileInfoInline(v15 + 16, 1LL);
          v14 = *(unsigned __int8 *)(v15 + 34);
          v4 = v35;
          v13 = v40;
          v18 = v39;
        }
        LOBYTE(v14) = v14 | 0x10;
        *(_BYTE *)(v15 + 34) = v14;
      }
      v20 = *(_WORD *)(v15 + 32);
      if ( v20 != 1 && (v20 != 2 || (*(_BYTE *)(v15 + 34) & 8) == 0) && v18 != v13 )
        KeBugCheckEx(0x1Au, 0x406uLL, a2, v41 / 48, v20);
      *(_QWORD *)(v15 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    }
    if ( (a3 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v15) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v15 + 35) &= ~0x20u;
    }
    goto LABEL_14;
  }
  result = (struct _KTHREAD *)MiPteInShadowRange(a2, ZeroPte, 0xFFFFFFFFFLL, v18);
  if ( !(_DWORD)result )
  {
LABEL_73:
    *(_QWORD *)a2 = v34;
    return result;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    result = KeGetCurrentThread();
    if ( (result->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 && (v34 & 1) != 0 )
    {
      result = (struct _KTHREAD *)0x8000000000000000LL;
      v34 |= 0x8000000000000000uLL;
    }
    goto LABEL_73;
  }
  if ( !HIBYTE(word_1404658EC) && (v34 & 1) != 0 )
    v34 |= 0x8000000000000000uLL;
  *(_QWORD *)a2 = v34;
  return (struct _KTHREAD *)MiWritePteShadow(a2, v34);
}
