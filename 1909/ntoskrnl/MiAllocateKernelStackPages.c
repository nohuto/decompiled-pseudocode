/*
 * XREFs of MiAllocateKernelStackPages @ 0x14002CE10
 * Callers:
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140136780 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiMarkKernelStack @ 0x14002DF50 (MiMarkKernelStack.c)
 *     PsGetPagePriorityThread @ 0x14005A580 (PsGetPagePriorityThread.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  _QWORD *v9; // r14
  signed __int32 v10; // ecx
  unsigned int v11; // ebx
  __int64 Page; // rax
  __int64 v13; // rdi
  unsigned __int64 ValidPte; // rbx
  __int64 v15; // r13
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 Process; // r8
  __int64 v19; // r9
  BOOL v20; // r15d
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // r11
  __int64 v27; // r10
  unsigned __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v30; // r9
  __int64 v31; // rbp
  unsigned int Queue; // r14d
  unsigned int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // rax
  char v36; // r14
  unsigned __int64 v37; // rdx
  _QWORD *v39; // rbx
  __int64 v40; // rax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // [rsp+20h] [rbp-68h] BYREF
  int v45; // [rsp+24h] [rbp-64h] BYREF
  __int64 v46; // [rsp+28h] [rbp-60h]
  __int64 v47; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-50h]
  volatile signed __int32 *v49; // [rsp+40h] [rbp-48h] BYREF
  __int64 v50; // [rsp+48h] [rbp-40h]
  unsigned __int8 v51; // [rsp+A0h] [rbp+18h]

  v6 = a3;
  v49 = 0LL;
  v7 = a2;
  v50 = 0LL;
  if ( !a3 )
    return 1LL;
  v9 = 0LL;
  v48 = a2 + 8 * a3;
  MiInitializePageColorBase(0LL, (unsigned int)(a5 + 1), &v49);
  while ( 1 )
  {
    v10 = _InterlockedExchangeAdd(v49, 1u);
    v11 = v50 & v10 | HIDWORD(v50);
    Page = MiGetPage(a1, v11, 0LL);
    if ( Page == -1 )
      break;
LABEL_4:
    v13 = 48 * Page - 0x58000000000LL;
    *(_QWORD *)v13 = v9;
    v9 = (_QWORD *)v13;
    if ( !--v6 )
    {
      v46 = 0LL;
      ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
      v51 = MiLockWorkingSetShared(&unk_140466C80);
      while ( 1 )
      {
        v15 = *(_QWORD *)v13;
        v16 = 0xFFFFFA8000000000uLL;
        ValidPte ^= (ValidPte ^ (((v13 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( v6 )
        {
          if ( (v7 & 0xFFF) != 0 )
            goto LABEL_8;
          MiUnlockPageTableInternal(&unk_140466C80);
        }
        v46 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(&unk_140466C80, v46, 0LL, v16);
LABEL_8:
        v20 = MiPteInShadowRange(v7);
        if ( v20 )
        {
          if ( (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 648) != 1 && (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
            {
              Process = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( Process )
              {
                v40 = *(_QWORD *)(Process + 8 * ((v7 >> 3) & 0x1FF));
                Process = v17 | 0x20;
                if ( (v40 & 0x20) == 0 )
                  Process = v17;
                v17 = Process;
                if ( (v40 & 0x42) != 0 )
                  v17 = Process | 0x42;
              }
            }
          }
        }
        if ( v17 )
          v21 = v17 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          v21 = MiSwizzleInvalidPte(128LL, 0LL, Process, v19);
        *(_WORD *)(v13 + 32) = 1;
        v22 = -2049LL;
        if ( (v21 & 0x400) == 0 )
          v22 = -9LL;
        *(_QWORD *)v13 &= 0xFFFFFFFFFFFFC00FuLL;
        *(_QWORD *)(v13 + 16) = v22 & v21 & 0xFFFFFFFFFC00FFFFuLL;
        if ( MiPteInShadowRange(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v23 & 1) != 0
          && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v42 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v24 >> 3) & 0x1FF));
            v43 = v23 | 0x20;
            if ( (v42 & 0x20) == 0 )
              v43 = v23;
            v23 = v43;
            if ( (v42 & 0x42) != 0 )
              v23 = v43 | 0x42;
          }
        }
        v47 = v23;
        v25 = MI_READ_PTE_LOCK_FREE(&v47);
        v28 = v27 & (v25 >> 12);
        *(_QWORD *)(v13 + 40) = v28 | v26 & *(_QWORD *)(v13 + 40);
        CurrentThread = KeGetCurrentThread();
        v31 = v30 + 48 * v28;
        Queue = (unsigned int)CurrentThread[1].Queue;
        if ( (Queue & 0x100) != 0 )
          v33 = Queue >> 9;
        else
          LOBYTE(v33) = PsGetPagePriorityThread(CurrentThread);
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        v45 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v45);
          while ( *(__int64 *)(v31 + 24) < 0 );
        }
        *(_QWORD *)(v31 + 24) ^= ((*(_QWORD *)(v31 + 24) + 1LL) ^ *(_QWORD *)(v31 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v34 = *(unsigned __int8 *)(v13 + 34);
        if ( (v34 & 0xC0) != 0x40 )
        {
          MiChangePageAttribute(v13, 1LL, 1LL);
          v34 = *(unsigned __int8 *)(v13 + 34);
        }
        v35 = *(_QWORD *)(v13 + 24);
        LOBYTE(v34) = v34 & 0xF8 | 6;
        v36 = (*(_BYTE *)(v13 + 35) ^ v33) & 7;
        *(_QWORD *)(v13 + 8) = v7;
        *(_BYTE *)(v13 + 35) ^= v36;
        *(_QWORD *)(v13 + 24) = v35 & 0xC000000000000000uLL | 1;
        *(_BYTE *)(v13 + 34) = v34;
        *(_BYTE *)(v13 + 34) = v34 | 0x10;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v37 = ValidPte;
        if ( v20 )
        {
          if ( (unsigned int)MiPteHasShadow(v34) )
          {
            if ( !HIBYTE(word_1404658EC) && (ValidPte & 1) != 0 )
              v37 |= 0x8000000000000000uLL;
            *(_QWORD *)v7 = v37;
            MiWritePteShadow(v7, v37);
            goto LABEL_22;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (ValidPte & 1) != 0 )
          {
            v37 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v7 = v37;
LABEL_22:
        MiMarkKernelStack(v7, a4);
        v6 = v46;
        v7 += 8LL;
        v13 = v15;
        if ( v7 >= v48 )
        {
          if ( v46 )
            MiUnlockPageTableInternal(&unk_140466C80);
          MiUnlockWorkingSetShared(&unk_140466C80, v51);
          return 1LL;
        }
      }
    }
  }
  while ( (a6 & 2) == 0 )
  {
    MiWaitForFreePage(a1);
    Page = MiGetPage(a1, v11, 0LL);
    if ( Page != -1 )
      goto LABEL_4;
  }
  if ( v9 )
  {
    do
    {
      v39 = (_QWORD *)*v9;
      MiReleaseFreshPage(v9);
      v9 = v39;
    }
    while ( v39 );
  }
  return 0LL;
}
