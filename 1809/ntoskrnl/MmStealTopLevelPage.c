/*
 * XREFs of MmStealTopLevelPage @ 0x14015DF84
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x14015DE50 (KiSwapDirectoryTableBaseTarget.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiReplacePageTablePage @ 0x14011BEFC (MiReplacePageTablePage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14013CDBC (KeMakeKernelDirectoryTableBase.c)
 *     KeMakeUserDirectoryTableBase @ 0x14013D0A0 (KeMakeUserDirectoryTableBase.c)
 */

__int64 __fastcall MmStealTopLevelPage(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rbx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r11
  BOOL v14; // r15d
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // r11
  BOOL v21; // r15d
  int v22; // edx
  unsigned __int64 v23; // rbx
  __int64 v24; // r9
  bool v25; // zf
  __int64 v26; // r9
  bool v27; // zf
  bool v28; // zf
  bool v29; // zf
  KIRQL v30; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 40) != CurrentThread )
    return 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = 0;
  v30 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MiReplacePageTablePage(a1);
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v10 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * ((((*(_DWORD *)(a1 + 8) >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
    MI_READ_PTE_LOCK_FREE((unsigned __int64)v10);
    v14 = MiPteInShadowRange((unsigned __int64)v10);
    if ( !v14 )
      goto LABEL_5;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_5;
      v25 = (v11 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_5;
      v25 = (v11 & 1) == 0;
    }
    if ( !v25 )
      v11 |= v24;
LABEL_5:
    *v10 = v11;
    if ( v12 )
      MiWritePteShadow((__int64)v10, v11);
    v15 = 0;
    if ( v14 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_8;
        v27 = (v13 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v27 = (v13 & 1) == 0;
      }
      if ( !v27 )
        v13 |= v26;
    }
LABEL_8:
    *v10 = v13;
    if ( v15 )
      MiWritePteShadow((__int64)v10, v13);
    if ( !*(_DWORD *)(a1 + 60) )
    {
      Process->DirectoryTableBase = KeMakeKernelDirectoryTableBase(v9 << 12);
LABEL_12:
      v6 = 1;
      goto LABEL_13;
    }
    v16 = ((Process[2].Affinity.Bitmap[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v17 = MI_READ_PTE_LOCK_FREE(v16);
    v21 = MiPteInShadowRange(v16);
    if ( v21 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_15;
        v28 = (v18 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_15;
        v28 = (v18 & 1) == 0;
      }
      if ( !v28 )
        v18 |= 0x8000000000000000uLL;
    }
LABEL_15:
    *(_QWORD *)v16 = v18;
    if ( v19 )
      MiWritePteShadow(v16, v18);
    KeFlushSingleTb(((v16 << 25) - (v20 << 25)) >> 16, 0, 2u);
    v22 = 0;
    v23 = ((v9 & 0xFFFFFFFFFLL) << 12) | v17 & 0xFFFF000000000FFFuLL;
    if ( !v21 )
      goto LABEL_18;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v22 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v29 = (v23 & 1) == 0;
        goto LABEL_47;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v29 = (v23 & 1) == 0;
LABEL_47:
      if ( !v29 )
        v23 |= 0x8000000000000000uLL;
    }
LABEL_18:
    *(_QWORD *)v16 = v23;
    if ( v22 )
      MiWritePteShadow(v16, v23);
    Process->UserDirectoryTableBase = KeMakeUserDirectoryTableBase(v9 << 12);
    goto LABEL_12;
  }
LABEL_13:
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v30, v7, v8);
  return v6;
}
