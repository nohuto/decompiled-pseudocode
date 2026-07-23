/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x140111620
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiGetContainingPageTable @ 0x140079840 (MiGetContainingPageTable.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushStamps @ 0x1401118EC (MiInitializeTbFlushStamps.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140111958 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiDecommitLargePoolVa @ 0x14015B3E0 (MiDecommitLargePoolVa.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(__int64 a1, unsigned __int64 a2, int a3)
{
  BOOL v5; // esi
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  int i; // eax
  __int64 v10; // rbp
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  int v14; // r11d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  ULONG_PTR LeafVa; // rax
  ULONG_PTR v21; // r10
  ULONG_PTR BugCheckParameter4; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // [rsp+68h] [rbp+10h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h] BYREF

  v5 = MiPteInShadowRange(a2);
  if ( v5
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 8 * ((a2 >> 3) & 0x1FF));
      v25 = v6 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v6;
      v6 = v25;
      if ( (v24 & 0x42) != 0 )
        v6 = v25 | 0x42;
    }
  }
  v27 = v6;
  if ( (v6 & 1) == 0 || a3 > 1 )
    return 0LL;
  v8 = 1LL;
  for ( i = a3; i; --i )
    v8 <<= 9;
  v10 = *(_QWORD *)(v7 + 168);
  if ( (v6 & 0x80u) == 0LL )
  {
    v12 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( a3 == 1 )
    {
      if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || !(unsigned int)MiEvictPageTableLock((__int64)&unk_14043C690, a2, ZeroPte, 0) )
      {
        return 0LL;
      }
      goto LABEL_10;
    }
    v13 = ZeroPte;
    if ( v5 )
    {
      if ( (unsigned int)MiPteHasShadow(0xFFFFFFFFFLL, ZeroPte) )
      {
        if ( !HIBYTE(word_14043B26C) && (v13 & 1) != 0 )
          v13 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v13;
        MiWritePteShadow(a2);
        goto LABEL_9;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v13 & 1) != 0 )
      {
        v13 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v13;
LABEL_9:
    ++*(_DWORD *)(v10 + 208);
LABEL_10:
    v14 = *(_DWORD *)(v10 + 204);
    if ( !v14 )
      *(_QWORD *)(v10 + 216) = MiGetContainingPageTable(a2);
    *(_DWORD *)(v10 + 204) = v14 + 1;
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26, v13, v11);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 5;
    if ( !a3 )
    {
      *(_QWORD *)v12 = *(_QWORD *)(v10 + 184);
      *(_QWORD *)(v10 + 184) = v12;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 = (*(_DWORD *)(v10 + 200) & 0x40000000) == 0;
      v27 = 0LL;
      if ( v15 )
      {
        MiInitializeTbFlushStamps(&v27, v13, v11);
        v17 = v27;
        if ( v5 )
        {
          if ( (unsigned int)MiPteHasShadow(v16, v27) )
          {
            if ( !HIBYTE(word_14043B26C) && (v17 & 1) != 0 )
              v17 |= 0x8000000000000000uLL;
            *(_QWORD *)a2 = v17;
            MiWritePteShadow(a2);
            goto LABEL_17;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v17 & 1) != 0 )
          {
            v17 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a2 = v17;
      }
LABEL_17:
      v18 = v27;
      if ( qword_14043B180 && (v27 & 0x10) == 0 )
        v18 = v27 & ~qword_14043B180;
      if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
        MiInsertTbFlushEntry(v10, (__int64)(a2 << 25) >> 16, 1LL, 0);
      return 0LL;
    }
    *(_QWORD *)v12 = *(_QWORD *)(v10 + 192);
    *(_QWORD *)(v10 + 192) = v12;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiInsertRecursiveTbFlushEntries(v10, (unsigned int)a3, a2);
    return 0LL;
  }
  LeafVa = MiGetLeafVa(a2);
  if ( LeafVa < *(_QWORD *)(v21 + 32) || LeafVa + (BugCheckParameter4 << 12) - 1 > *(_QWORD *)(v21 + 40) )
    KeBugCheckEx(0x1Au, 0x5306uLL, v21, LeafVa, BugCheckParameter4);
  MiDecommitLargePoolVa(LeafVa, a2, BugCheckParameter4);
  *(_DWORD *)(v10 + 208) += 512;
  return 0LL;
}
