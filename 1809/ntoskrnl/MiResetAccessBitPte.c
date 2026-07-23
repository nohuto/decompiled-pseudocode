/*
 * XREFs of MiResetAccessBitPte @ 0x14016E930
 * Callers:
 *     <none>
 * Callees:
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MiClearPteAccessed @ 0x14006B770 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiGetVaAge @ 0x1400880A0 (MiGetVaAge.c)
 *     MiIsPageTableLocked @ 0x14012DAEC (MiIsPageTableLocked.c)
 *     MiResetAccessBitsTail @ 0x14016FAB0 (MiResetAccessBitsTail.c)
 *     MiInsertVmAccessedEntry @ 0x1402B334C (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  unsigned __int64 v7; // r9
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rcx
  int VaAge; // r9d
  unsigned __int64 v13; // r10
  int v14; // r15d
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 8 * ((a2 >> 3) & 0x1FF));
      v21 = v7 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v7;
      v7 = v21;
      if ( (v20 & 0x42) != 0 )
        v7 = v21 | 0x42;
    }
  }
  v25 = v7;
  if ( (v7 & 0x20) == 0 )
    return 0LL;
  if ( (unsigned __int64)&v25 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v25 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && (v7 & 0x42) == 0 )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)&v25 >> 3) & 0x1FF));
      v24 = v7 | 0x20;
      if ( (v23 & 0x20) == 0 )
        v24 = v7;
      v7 = v24;
      if ( (v23 & 0x42) != 0 )
        v7 = v24 | 0x42;
    }
  }
  v9 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a3 )
  {
    if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)MiIsPageTableLocked(v5, a2) )
      return 0LL;
  }
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 >= 0 )
    MiDemoteCombinedPte(v5, a2, v10 | 0x8000000000000000uLL);
  v11 = *(_QWORD *)(v3 + 16);
  if ( !v11 || (unsigned __int64)((__int64)(a2 << 25) >> 16) > 0x7FFFFFFEFFFFLL )
  {
    VaAge = (unsigned __int8)MiGetVaAge(v11, (__int64)(a2 << 25) >> 16);
    if ( VaAge == 7 && (unsigned int)MiGetPfnPriority(v9) < dword_14043B9AC )
    {
      v14 = 0;
    }
    else
    {
      v14 = 1;
      if ( (unsigned int)(VaAge - 1) <= 5 )
        MiSetVaAgeList(v5, v13, 1u, 0);
    }
    v15 = *(_QWORD *)(v3 + 8);
    if ( !(unsigned int)MiClearPteAccessed(v5, v9, a2, v15, *(_DWORD *)v3, 0) )
      return 0LL;
    if ( v14 == 1 && *(_DWORD *)v3 )
    {
      if ( !v15 )
      {
        MiLogPageAccess(v5, a2);
        return 0LL;
      }
    }
    else if ( !v15 )
    {
      return 0LL;
    }
    v18 = qword_14043B1D0;
    if ( (*(_BYTE *)(v15 + 4) & 2) == 0
      && *(_DWORD *)v15 == 1
      && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15] )
    {
      v18 = -1LL;
    }
    if ( (*(_DWORD *)(v15 + 12) >= *(_DWORD *)(v15 + 8) || *(_BYTE *)(v15 + 5) || *(_QWORD *)(v15 + 16) > v18)
      && v18 >= 0x400
      && !*(_BYTE *)(v15 + 5) )
    {
      MiFlushTbList((int *)v15, v18, v16, v17);
    }
    return 0LL;
  }
  if ( !(unsigned int)MiInsertVmAccessedEntry(v11, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  return MiResetAccessBitsTail(a1);
}
