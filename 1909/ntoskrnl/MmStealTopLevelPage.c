/*
 * XREFs of MmStealTopLevelPage @ 0x14018F434
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x14018F300 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14008F0F0 (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x14008F460 (KeMakeUserDirectoryTableBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 */

__int64 __fastcall MmStealTopLevelPage(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // r11
  BOOL v15; // r15d
  int v16; // edx
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // r11
  BOOL v22; // r15d
  int v23; // edx
  unsigned __int64 v24; // rbx
  __int64 v25; // r9
  bool v26; // zf
  __int64 v27; // r9
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  KIRQL v31; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v6 = 0;
  v31 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    MI_READ_PTE_LOCK_FREE((unsigned __int64)v11);
    v15 = MiPteInShadowRange((unsigned __int64)v11);
    if ( !v15 )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_5;
      v26 = (v12 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_5;
      v26 = (v12 & 1) == 0;
    }
    if ( !v26 )
      v12 |= v25;
LABEL_5:
    *v11 = v12;
    if ( v13 )
      MiWritePteShadow((__int64)v11);
    v16 = 0;
    if ( v15 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_8;
        v28 = (v14 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v28 = (v14 & 1) == 0;
      }
      if ( !v28 )
        v14 |= v27;
    }
LABEL_8:
    *v11 = v14;
    if ( v16 )
      MiWritePteShadow((__int64)v11);
    if ( !*(_DWORD *)(a1 + 60) )
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v10 << 12);
LABEL_12:
      v6 = 1;
      goto LABEL_13;
    }
    v17 = ((Process[2].DeepFreezeStartTime >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = MI_READ_PTE_LOCK_FREE(v17);
    v22 = MiPteInShadowRange(v17);
    if ( v22 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_15;
        v29 = (v19 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_15;
        v29 = (v19 & 1) == 0;
      }
      if ( !v29 )
        v19 |= 0x8000000000000000uLL;
    }
LABEL_15:
    *(_QWORD *)v17 = v19;
    if ( v20 )
      MiWritePteShadow(v17);
    KeFlushSingleTb(((v17 << 25) - (v21 << 25)) >> 16, 0, 2u);
    v23 = 0;
    v24 = ((v10 & 0xFFFFFFFFFLL) << 12) | v18 & 0xFFFF000000000FFFuLL;
    if ( !v22 )
      goto LABEL_18;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v23 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
        v30 = (v24 & 1) == 0;
        goto LABEL_47;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v30 = (v24 & 1) == 0;
LABEL_47:
      if ( !v30 )
        v24 |= 0x8000000000000000uLL;
    }
LABEL_18:
    *(_QWORD *)v17 = v24;
    if ( v23 )
      MiWritePteShadow(v17);
    Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v10 << 12);
    goto LABEL_12;
  }
LABEL_13:
  LOBYTE(v7) = v31;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v7, v8, v9);
  return v6;
}
