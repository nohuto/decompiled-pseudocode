/*
 * XREFs of MiJumpStackTarget @ 0x1402C4220
 * Callers:
 *     MiDoStackCopy @ 0x1402C4100 (MiDoStackCopy.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CED60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiCanStealKernelStack @ 0x1401352EC (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x14013D5BC (MiGetLeafPfnBuddy.c)
 *     MiCopyKstack @ 0x1402C3E68 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1402C44FC (MiSwitchKstackPages.c)
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
  int v13; // eax
  __int64 v14; // rdx
  _QWORD *v15; // r8
  int v16; // r9d
  bool v17; // zf
  __int64 v18; // rsi
  signed __int32 v19; // eax
  unsigned int v20; // edi
  volatile signed __int32 *result; // rax
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int8 v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h] BYREF
  int v25; // [rsp+80h] [rbp+18h] BYREF
  int v26; // [rsp+88h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v25 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v25);
    goto LABEL_26;
  }
  *(_DWORD *)v3 = v5 | *(_DWORD *)(v3 + 4);
  if ( !*(_DWORD *)(v1 + 32) )
  {
    v6 = 48LL * *(_QWORD *)v1 - 0x58000000000LL;
    v7 = *(_QWORD *)(v1 + 56);
    v22 = 48LL * *(_QWORD *)(v1 + 8) - 0x58000000000LL;
    v8 = 0LL;
    v9 = (*(_QWORD *)(v1 + 48) != 0LL) + 1;
    v10 = MiLockWorkingSetShared(v7);
    v24 = 0;
    v23 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v24);
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
        MiRemoveLockedPageChargeAndDecRef(v6);
      MiCopyKstack(v22, v6, *(_QWORD *)(v1 + 16));
      KeFlushSingleTb(v11, 0, 2u);
      MiSwitchKstackPages(v22, v6);
      *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(v6 + 34) &= 0xC7u;
      *(_BYTE *)(v6 + 35) &= ~0x20u;
      v13 = 0;
    }
    else
    {
      v13 = -1073740748;
    }
    *(_DWORD *)(v1 + 32) = v13;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 )
      MiUnlockPageTableInternal(v7, v8);
    MiUnlockWorkingSetShared(v7, v23);
    if ( !MiPteInShadowRange(*(_QWORD *)(v1 + 16)) )
      goto LABEL_24;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( !HIBYTE(word_1404658EC) )
      {
        v17 = (v14 & 1) == 0;
        goto LABEL_22;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      v17 = (v14 & 1) == 0;
LABEL_22:
      if ( !v17 )
        v14 |= 0x8000000000000000uLL;
    }
LABEL_24:
    *v15 = v14;
    if ( v16 )
      MiWritePteShadow((__int64)v15);
  }
LABEL_26:
  v18 = a1[2];
  v19 = _InterlockedDecrement((volatile signed __int32 *)v18);
  v20 = ~v19 & 0x80000000;
  if ( (v19 & 0x7FFFFFFF) != 0 )
  {
    v26 = 0;
    while ( (*(_DWORD *)v18 & 0x80000000) != v20 )
      KeYieldProcessorEx(&v26);
  }
  else
  {
    *(_DWORD *)v18 = v20 | *(_DWORD *)(v18 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
