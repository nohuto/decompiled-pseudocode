/*
 * XREFs of MiJumpStackTarget @ 0x14015EA10
 * Callers:
 *     MiDoStackCopy @ 0x14015E900 (MiDoStackCopy.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCanStealKernelStack @ 0x14012D69C (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     MiSwitchKstackPages @ 0x14015EC94 (MiSwitchKstackPages.c)
 *     MiCopyKstack @ 0x14015ED00 (MiCopyKstack.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 v5; // rsi
  signed __int32 v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rbp
  __int16 v11; // si
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rsi
  int v17; // eax
  int v18; // r9d
  __int64 v19; // rsi
  signed __int32 v20; // eax
  unsigned int v21; // edi
  volatile signed __int32 *result; // rax
  bool v23; // zf
  __int64 v24; // [rsp+20h] [rbp-48h]
  unsigned __int8 v25; // [rsp+70h] [rbp+8h]
  int v26; // [rsp+78h] [rbp+10h] BYREF
  int v27; // [rsp+80h] [rbp+18h] BYREF
  int v28; // [rsp+88h] [rbp+20h] BYREF

  v3 = *a1;
  v5 = a1[2];
  v6 = _InterlockedDecrement((volatile signed __int32 *)v5);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v27 = 0;
    while ( (*(_DWORD *)v5 & 0x80000000) != v7 )
      KeYieldProcessorEx(&v27, a2, (__int64)a3);
    goto LABEL_20;
  }
  *(_DWORD *)v5 = v7 | *(_DWORD *)(v5 + 4);
  if ( !*(_DWORD *)(v3 + 32) )
  {
    v8 = 48LL * *(_QWORD *)v3 - 0x58000000000LL;
    v9 = *(_QWORD *)(v3 + 56);
    v24 = 48LL * *(_QWORD *)(v3 + 8) - 0x58000000000LL;
    v10 = 0LL;
    v11 = (*(_QWORD *)(v3 + 48) != 0LL) + 1;
    v12 = MiLockWorkingSetShared(v9);
    v26 = 0;
    v25 = v12;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26, v13, v14);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    v15 = *(_QWORD *)(v3 + 40);
    if ( MiCanStealKernelStack(v8, v11)
      && ((MiGetLeafPfnBuddy((_QWORD *)v8) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0
      && v15 == (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16
      && (v16 = *(_QWORD *)(v8 + 8),
          (v10 = (((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & -(__int64)((unsigned int)MiLockPageTableInternal(
                                                                                                v9,
                                                                                                ((v16 >> 9) & 0x7FFFFFFFF8LL)
                                                                                              - 0x98000000000LL,
                                                                                                1) != 0)) != 0) )
    {
      if ( *(_QWORD *)(v3 + 48) )
        MiRemoveLockedPageChargeAndDecRef(v8);
      MiCopyKstack(v24, v8, *(_QWORD *)(v3 + 16));
      KeFlushSingleTb(v15, 0, 2u);
      MiSwitchKstackPages(v24, v8);
      *(_QWORD *)(v8 + 40) &= ~0x200000000000000uLL;
      *(_BYTE *)(v8 + 34) &= 0xC7u;
      *(_BYTE *)(v8 + 35) &= ~0x20u;
      v17 = 0;
    }
    else
    {
      v17 = -1073740748;
    }
    *(_DWORD *)(v3 + 32) = v17;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v10 )
      MiUnlockPageTableInternal(v9, v10);
    MiUnlockWorkingSetShared(v9, v25);
    if ( !MiPteInShadowRange(*(_QWORD *)(v3 + 16)) )
      goto LABEL_18;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v18 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v23 = (a2 & 1) == 0;
        goto LABEL_34;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v23 = (a2 & 1) == 0;
LABEL_34:
      if ( !v23 )
        a2 |= 0x8000000000000000uLL;
    }
LABEL_18:
    *a3 = a2;
    if ( v18 )
      MiWritePteShadow((__int64)a3, a2);
  }
LABEL_20:
  v19 = a1[2];
  v20 = _InterlockedDecrement((volatile signed __int32 *)v19);
  v21 = ~v20 & 0x80000000;
  if ( (v20 & 0x7FFFFFFF) != 0 )
  {
    v28 = 0;
    while ( (*(_DWORD *)v19 & 0x80000000) != v21 )
      KeYieldProcessorEx(&v28, a2, (__int64)a3);
  }
  else
  {
    *(_DWORD *)v19 = v21 | *(_DWORD *)(v19 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
