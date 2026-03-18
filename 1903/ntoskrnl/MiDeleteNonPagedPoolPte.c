/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x140115100
 * Callers:
 *     <none>
 * Callees:
 *     MiGetContainingPageTable @ 0x1400236B0 (MiGetContainingPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiEvictPageTableLock @ 0x14005E164 (MiEvictPageTableLock.c)
 *     MiInitializeTbFlushStamps @ 0x140076374 (MiInitializeTbFlushStamps.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1401153E4 (MiInsertRecursiveTbFlushEntries.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiDecommitLargePoolVa @ 0x1401464F0 (MiDecommitLargePoolVa.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
  __int64 v12; // rcx
  int v13; // r9d
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rax
  ULONG_PTR LeafVa; // rax
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v21; // r10
  _QWORD v22[5]; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+78h] [rbp+20h] BYREF

  v5 = MI_READ_PTE_LOCK_FREE(a2);
  v22[0] = v5;
  if ( (v5 & 1) == 0 || a3 > 1 )
    return 0LL;
  v7 = 1LL;
  for ( i = a3; i; --i )
    v7 <<= 9;
  v9 = *(_QWORD *)(v6 + 160);
  if ( (v5 & 0x80u) == 0LL )
  {
    v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v22) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( a3 == 1 )
    {
      if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || !(unsigned int)MiEvictPageTableLock((__int64)&unk_1404670C0, a2, ZeroPte, 2LL) )
      {
        return 0LL;
      }
      goto LABEL_11;
    }
    if ( !*(_DWORD *)(v9 + 204) )
      return 0LL;
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow(v12) )
      {
        if ( !HIBYTE(word_140465BEC) && (v11 & 1) != 0 )
          v11 |= 0x8000000000000000uLL;
        *(_QWORD *)a2 = v11;
        MiWritePteShadow(a2, v11);
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
    v13 = *(_DWORD *)(v9 + 208);
    if ( !v13 )
      *(_QWORD *)(v9 + 216) = MiGetContainingPageTable(a2);
    *(_DWORD *)(v9 + 208) = v13 + 1;
    v23 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v23);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
    if ( !a3 )
    {
      *(_QWORD *)v10 = *(_QWORD *)(v9 + 184);
      *(_QWORD *)(v9 + 184) = v10;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v14 = (*(_DWORD *)(v9 + 200) & 0x40000000) == 0;
      v22[0] = 0LL;
      if ( v14 )
      {
        MiInitializeTbFlushStamps((__int64)v22);
        if ( MiPteInShadowRange(a2) )
        {
          if ( (unsigned int)MiPteHasShadow(v15) )
          {
            if ( !HIBYTE(word_140465BEC) && (v16 & 1) != 0 )
              v16 |= 0x8000000000000000uLL;
            *(_QWORD *)a2 = v16;
            MiWritePteShadow(a2, v16);
            goto LABEL_18;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v16 & 1) != 0 )
          {
            v16 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a2 = v16;
      }
LABEL_18:
      v17 = v22[0];
      if ( qword_140465B00 && (v22[0] & 0x10) == 0 )
        v17 = v22[0] & ~qword_140465B00;
      if ( (v17 & 0xFFFFFFFF00000000uLL) == 0 )
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
  if ( LeafVa < *(_QWORD *)(v21 + 24) || LeafVa + (BugCheckParameter4 << 12) - 1 > *(_QWORD *)(v21 + 32) )
    KeBugCheckEx(0x1Au, 0x5306uLL, v21, LeafVa, BugCheckParameter4);
  MiDecommitLargePoolVa(LeafVa, a2, BugCheckParameter4);
  *(_DWORD *)(v9 + 212) += 512;
  return 0LL;
}
