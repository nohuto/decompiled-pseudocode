/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x140116770
 * Callers:
 *     <none>
 * Callees:
 *     MiGetContainingPageTable @ 0x140023AA0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiEvictPageTableLock @ 0x14005E204 (MiEvictPageTableLock.c)
 *     MiInitializeTbFlushStamps @ 0x1400765E4 (MiInitializeTbFlushStamps.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140116A54 (MiInsertRecursiveTbFlushEntries.c)
 *     MiDecommitLargePoolVa @ 0x140146B90 (MiDecommitLargePoolVa.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r9
  int i; // ecx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // r9d
  bool v13; // zf
  __int64 v14; // r11
  __int64 v15; // rax
  ULONG_PTR LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v19; // r10
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v20[0] = v5;
  if ( (v5 & 1) == 0 || a3 > 1 )
    return 0LL;
  v7 = 1LL;
  for ( i = a3; i; --i )
    v7 <<= 9;
  v9 = *(_QWORD *)(v6 + 160);
  if ( (v5 & 0x80u) == 0LL )
  {
    v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v20) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( a3 == 1 )
    {
      if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || !(unsigned int)MiEvictPageTableLock((__int64)&unk_140466DC0, a2, ZeroPte, 2LL) )
      {
        return 0LL;
      }
      goto LABEL_11;
    }
    if ( !*(_DWORD *)(v9 + 204) )
      return 0LL;
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_1404658EC) && (v11 & 1) != 0 )
          v11 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v11;
        MiWritePteShadow(a2);
        goto LABEL_9;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v11 & 1) != 0 )
      {
        v11 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v11;
LABEL_9:
    if ( (*(_BYTE *)(v10 + 35) & 0x10) == 0 )
      ++*(_DWORD *)(v9 + 212);
LABEL_11:
    v12 = *(_DWORD *)(v9 + 208);
    if ( !v12 )
      *(_QWORD *)(v9 + 216) = MiGetContainingPageTable(a2);
    *(_DWORD *)(v9 + 208) = v12 + 1;
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
    if ( !a3 )
    {
      *(_QWORD *)v10 = *(_QWORD *)(v9 + 184);
      *(_QWORD *)(v9 + 184) = v10;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v13 = (*(_DWORD *)(v9 + 200) & 0x40000000) == 0;
      v20[0] = 0LL;
      if ( v13 )
      {
        MiInitializeTbFlushStamps((__int64)v20);
        if ( MiPteInShadowRange(a2) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_1404658EC) && (v14 & 1) != 0 )
              v14 |= 0x8000000000000000uLL;
            *(_QWORD *)a2 = v14;
            MiWritePteShadow(a2);
            goto LABEL_18;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v14 & 1) != 0 )
          {
            v14 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a2 = v14;
      }
LABEL_18:
      v15 = v20[0];
      if ( qword_140465800 && (v20[0] & 0x10) == 0 )
        v15 = v20[0] & ~qword_140465800;
      if ( (v15 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry(v9, (__int64)(a2 << 25) >> 16, 1LL, 0);
      return 0LL;
    }
    *(_QWORD *)v10 = *(_QWORD *)(v9 + 192);
    *(_QWORD *)(v9 + 192) = v10;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertRecursiveTbFlushEntries(v9, (unsigned int)a3, a2);
    return 0LL;
  }
  if ( !*(_DWORD *)(v9 + 204) )
    return 0LL;
  LeafVa = MiGetLeafVa(a2);
  if ( LeafVa < *(_QWORD *)(v19 + 24) || LeafVa + (BugCheckParameter4 << 12) - 1 > *(_QWORD *)(v19 + 32) )
    KeBugCheckEx(0x1Au, 0x5306uLL, v19, LeafVa, BugCheckParameter4);
  MiDecommitLargePoolVa(LeafVa, a2, BugCheckParameter4);
  *(_DWORD *)(v9 + 212) += 512;
  return 0LL;
}
