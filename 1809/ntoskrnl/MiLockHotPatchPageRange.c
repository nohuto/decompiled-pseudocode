/*
 * XREFs of MiLockHotPatchPageRange @ 0x1402B98A4
 * Callers:
 *     MiLockHotPatchPages @ 0x1408570F8 (MiLockHotPatchPages.c)
 *     MiLockHotPatchUndoPages @ 0x14085718C (MiLockHotPatchUndoPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     KeSetPagePrivilege @ 0x14028DE10 (KeSetPagePrivilege.c)
 *     MiReferenceDriverPage @ 0x1402A6328 (MiReferenceDriverPage.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockHotPatchPageRange(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r15d
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int8 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  int v14; // esi
  int v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int8 v19; // [rsp+90h] [rbp+18h]

  *((_QWORD *)&v17 + 1) = 0LL;
  v5 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 48LL) + ((unsigned __int64)a3 << 12);
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v9 = MiLockWorkingSetShared(a2);
  v19 = v9;
  while ( 1 )
  {
    if ( v5 > a4 )
    {
      MiUnlockPageTableInternal(a2, v8);
      MiUnlockWorkingSetShared(a2, v9);
      return 0LL;
    }
    if ( v8 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_6;
      MiUnlockPageTableInternal(a2, v8);
    }
    v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(a2, v8, 0);
LABEL_6:
    if ( (MI_READ_PTE_LOCK_FREE(v7) & 1) == 0 )
      break;
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v7) >> 12) & 0xFFFFFFFFFLL;
    v13 = 48 * v12 - 0x58000000000LL;
    if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( *(__int64 *)(v13 + 8) < 0 )
      {
        MiUnlockPageTableInternal(a2, v8);
        MiUnlockWorkingSetShared(a2, v9);
        MiMakeDriverPagesPrivate(*(_QWORD *)a1, v7, v7 + 8LL * (a4 - v5), 0);
LABEL_8:
        MiLockWorkingSetShared(a2);
        MiLockPageTableInternal(a2, v8, 0);
      }
      else
      {
        v14 = MiCopyOnWrite(v6, v7, 0xFFFFFFFFFFFFFFFFuLL, 0);
        if ( v14 < 0 )
        {
          MiUnlockPageTableInternal(a2, v8);
          MiUnlockWorkingSetShared(a2, v9);
          MiCopyOnWriteCheckConditions(a2, (unsigned int)v14);
          goto LABEL_8;
        }
      }
    }
    else
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 24), v5) )
      {
        v16 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v16, v10, v11);
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        MiReferenceDriverPage(48 * v12 - 0x58000000000LL);
        if ( ((*(_QWORD *)(v13 + 40) >> 54) & 7) != 3 )
        {
          *(_QWORD *)&v17 = v6;
          KeSetPagePrivilege(v12, &v17, 256);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        _bittestandset64(*(signed __int64 **)(a1 + 24), v5);
      }
      v9 = v19;
      ++v5;
      v7 += 8LL;
      v6 += 4096LL;
    }
  }
  MiUnlockPageTableInternal(a2, v8);
  MiUnlockWorkingSetShared(a2, v9);
  if ( (int)MmAccessFault(0LL, v6, 0LL, 0LL) >= 0 )
    goto LABEL_8;
  return 3221225595LL;
}
