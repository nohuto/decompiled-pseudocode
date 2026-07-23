/*
 * XREFs of MiScrubAwePage @ 0x1402B1E4C
 * Callers:
 *     MiScrubProcessPhysicalPages @ 0x1408515B0 (MiScrubProcessPhysicalPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiScrubPage @ 0x1402CFB40 (MiScrubPage.c)
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
  v8 = (__int64)&Process[1].IdealNode[12];
  v9 = MiLockWorkingSetShared(v8);
  v19 = v9;
  if ( *(_WORD *)(v4 + 32) != 2 )
  {
    v15 = 0;
    goto LABEL_32;
  }
  MiLockPageTableInternal(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0);
  v10 = MI_READ_PTE_LOCK_FREE(v5);
  if ( (v10 & 1) != 0 )
  {
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v12 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v14 = (v11 & 1) == 0;
          goto LABEL_14;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v14 = (v11 & 1) == 0;
LABEL_14:
        if ( !v14 )
          v11 |= v13;
      }
    }
    *(_QWORD *)v5 = v11;
    if ( v12 )
      MiWritePteShadow(v5, v11);
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
        if ( !HIBYTE(word_14043B26C) )
        {
          v18 = (v16 & 1) == 0;
          goto LABEL_26;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v18 = (v16 & 1) == 0;
LABEL_26:
        if ( !v18 )
          v16 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v5 = v16;
    if ( v17 )
      MiWritePteShadow(v5, v16);
  }
  MiUnlockPageTableInternal(v8, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v19;
LABEL_32:
  MiUnlockWorkingSetShared(v8, v9);
  return v15;
}
