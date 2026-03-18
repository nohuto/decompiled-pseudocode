/*
 * XREFs of MiScrubAwePage @ 0x1402D7A00
 * Callers:
 *     MiScrubProcessPhysicalPages @ 0x140896CF8 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiScrubPage @ 0x1402ECD28 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAwePage(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // r12
  __int64 v8; // r12
  unsigned __int8 v9; // al
  __int64 v10; // rbx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r9
  bool v14; // zf
  unsigned int v15; // ebp
  __int64 v16; // rbx
  int v17; // edx
  bool v18; // zf
  unsigned __int8 v19; // [rsp+58h] [rbp+10h]

  v4 = 48 * a2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
    return MiScrubPage(a1, 48 * a2 - 0x58000000000LL, 0LL, 1LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (*a3 & 1) == 0 )
    return 0LL;
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiScrubPage(a1, 48 * a2 - 0x58000000000LL, 0LL, 1LL);
  v8 = (__int64)&Process[1].IdealNode[6];
  v9 = MiLockWorkingSetShared(v8);
  v19 = v9;
  if ( *(_WORD *)(v4 + 32) != 2 )
  {
    v15 = 0;
    goto LABEL_32;
  }
  MiLockPageTableInternal(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
  v10 = MI_READ_PTE_LOCK_FREE(v5);
  if ( (v10 & 1) != 0 )
  {
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v12 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
          v14 = (v11 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v14 = (v11 & 1) == 0;
LABEL_14:
        if ( !v14 )
          v11 |= v13;
      }
    }
    *(_QWORD *)v5 = v11;
    if ( v12 )
      MiWritePteShadow(v5);
    KeFlushSingleTb((__int64)(v5 << 25) >> 16, 1u, 0);
  }
  v15 = MiScrubPage(a1, v4, 0LL, 1LL);
  if ( (v10 & 1) != 0 )
  {
    v16 = v10 | 0x20;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
          v18 = (v16 & 1) == 0;
          goto LABEL_26;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v18 = (v16 & 1) == 0;
LABEL_26:
        if ( !v18 )
          v16 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v5 = v16;
    if ( v17 )
      MiWritePteShadow(v5);
  }
  MiUnlockPageTableInternal(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v19;
LABEL_32:
  MiUnlockWorkingSetShared(v8, v9);
  return v15;
}
