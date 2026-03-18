/*
 * XREFs of MiJumpStackTarget @ 0x1402C44C0
 * Callers:
 *     MiDoStackCopy @ 0x1402C43A0 (MiDoStackCopy.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiCanStealKernelStack @ 0x1401349EC (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x14013D07C (MiGetLeafPfnBuddy.c)
 *     MiCopyKstack @ 0x1402C4108 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1402C479C (MiSwitchKstackPages.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  signed __int32 v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned __int64 v8; // rbp
  __int16 v9; // si
  unsigned __int8 v10; // al
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  _QWORD *v18; // r8
  int v19; // r9d
  bool v20; // zf
  __int64 v21; // rsi
  signed __int32 v22; // eax
  unsigned int v23; // edi
  volatile signed __int32 *result; // rax
  __int64 v25; // [rsp+20h] [rbp-48h]
  unsigned __int8 v26; // [rsp+70h] [rbp+8h]
  int v27; // [rsp+78h] [rbp+10h] BYREF
  int v28; // [rsp+80h] [rbp+18h] BYREF
  int v29; // [rsp+88h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v28 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v28);
    goto LABEL_26;
  }
  *(_DWORD *)v3 = v5 | *(_DWORD *)(v3 + 4);
  if ( !*(_DWORD *)(v1 + 32) )
  {
    v6 = 48LL * *(_QWORD *)v1 - 0x58000000000LL;
    v7 = *(_QWORD *)(v1 + 56);
    v25 = 48LL * *(_QWORD *)(v1 + 8) - 0x58000000000LL;
    v8 = 0LL;
    v9 = (*(_QWORD *)(v1 + 48) != 0LL) + 1;
    v10 = MiLockWorkingSetShared(v7);
    v27 = 0;
    v26 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    v11 = *(_QWORD *)(v1 + 40);
    if ( MiCanStealKernelStack(v6, v9)
      && ((MiGetLeafPfnBuddy((_QWORD *)v6) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0
      && v11 == (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16
      && (v12 = *(_QWORD *)(v6 + 8),
          (v8 = (((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & -(__int64)((unsigned int)MiLockPageTableInternal(
                                                                                               v7,
                                                                                               ((v12 >> 9) & 0x7FFFFFFFF8LL)
                                                                                             - 0x98000000000LL,
                                                                                               1LL) != 0)) != 0) )
    {
      if ( *(_QWORD *)(v1 + 48) )
        MiRemoveLockedPageChargeAndDecRef(v6, v13, v14, v15);
      MiCopyKstack(v25, v6, *(_QWORD *)(v1 + 16));
      KeFlushSingleTb(v11, 0, 2u);
      MiSwitchKstackPages(v25, v6);
      *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(v6 + 34) &= 0xC7u;
      *(_BYTE *)(v6 + 35) &= ~0x20u;
      v16 = 0;
    }
    else
    {
      v16 = -1073740748;
    }
    *(_DWORD *)(v1 + 32) = v16;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 )
      MiUnlockPageTableInternal(v7, v8);
    MiUnlockWorkingSetShared(v7, v26);
    if ( !MiPteInShadowRange(*(_QWORD *)(v1 + 16)) )
      goto LABEL_24;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( !HIBYTE(word_140465BEC) )
      {
        v20 = (v17 & 1) == 0;
        goto LABEL_22;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v20 = (v17 & 1) == 0;
LABEL_22:
      if ( !v20 )
        v17 |= 0x8000000000000000uLL;
    }
LABEL_24:
    *v18 = v17;
    if ( v19 )
      MiWritePteShadow((__int64)v18);
  }
LABEL_26:
  v21 = a1[2];
  v22 = _InterlockedDecrement((volatile signed __int32 *)v21);
  v23 = ~v22 & 0x80000000;
  if ( (v22 & 0x7FFFFFFF) != 0 )
  {
    v29 = 0;
    while ( (*(_DWORD *)v21 & 0x80000000) != v23 )
      KeYieldProcessorEx(&v29);
  }
  else
  {
    *(_DWORD *)v21 = v23 | *(_DWORD *)(v21 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
