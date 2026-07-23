/*
 * XREFs of MiComputePxeWalkAction @ 0x140070670
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     MiMakeSystemLeavesNonZero @ 0x14016A4E0 (MiMakeSystemLeavesNonZero.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1401B4EC4 (MiAdvanceToLastUntrimmableVa.c)
 */

__int64 __fastcall MiComputePxeWalkAction(int *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ebp
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rcx
  __int64 LeafVa; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v22; // r13

  v3 = *(_QWORD *)a2;
  if ( a3 == 3
    && a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v7 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 8 * ((a2 >> 3) & 0x1FF));
      v9 = v3 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v3;
      v3 = v9;
      if ( (v8 & 0x42) != 0 )
        v3 = v9 | 0x42;
    }
  }
  if ( (v3 & 1) == 0 )
    return (*a1 & 1) != 0;
  v10 = *a1;
  if ( (v11 = *a1 & 0x4000) != 0 )
  {
    v12 = (v3 >> 12) & 0xFFFFFFFFFLL;
    if ( v12 == MiState[a3 + 1149] || v12 == MiState[a3 + 1145] || (v3 & 0x800) == 0 && (v3 & 0x42) == 0 )
      return (*a1 & 1) != 0;
  }
  if ( !a3 )
    return 1LL;
  v13 = *((_QWORD *)a1 + 8);
  v14 = 1;
  if ( v13 && v13 == *(_QWORD *)&a1[4 * a3 + 20] )
  {
    v14 = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v15 = *((_QWORD *)a1 + 7);
  if ( v15 && v15 == *(_QWORD *)&a1[4 * a3 + 20] )
  {
    v14 = 0;
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( (v3 & 0x80u) != 0LL )
  {
    if ( (v10 & 1) == 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 3) + 184LL) & 7) == 0 )
      {
        LeafVa = MiGetLeafVa(a2);
        v17 = (((unsigned __int64)MiAdvanceToLastUntrimmableVa(LeafVa) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        if ( a3 > 1 )
        {
          v18 = (unsigned int)(a3 - 1);
          do
          {
            v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v18;
          }
          while ( v18 );
        }
        v19 = -1;
        v20 = (__int64)(v17 - a2) >> 3;
        if ( v20 <= 0xFFFFFFFFLL )
          v19 = v20;
        a1[3] = v19;
      }
      return 0LL;
    }
    return 1LL;
  }
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL
    || (v10 & 0x200) != 0
    && qword_14043BEE8 != (PVOID)qword_14043BEF0
    && ((v3 >> 12) & 0xFFFFFFFFFLL) == MiState[a3 + 1149] )
  {
    return 0LL;
  }
  if ( (v10 & 1) == 0 )
  {
    if ( (*(_QWORD *)(48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      return 1LL;
    if ( a3 == 1 )
    {
      v22 = *((_QWORD *)a1 + 3);
      if ( (*(_BYTE *)(v22 + 184) & 7) == 2
        && (unsigned __int16)*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(a2 << 25) >> 16 << 25 >> 16) + 32) >> 6 != (unsigned __int64)*(unsigned __int16 *)(v22 + 174) )
      {
        return 1LL;
      }
    }
  }
  if ( !v14
    || a3 == 1
    && (v10 & 0x11) == 0x10
    && (((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 4) & 0x3FF) == 0
     || (unsigned __int8)((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 14) & 7) < *((_BYTE *)a1 + 7)) )
  {
    return 1LL;
  }
  if ( v11 && a3 > 1 && a3 == *((unsigned __int8 *)a1 + 10) )
    MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)a3);
  return 2LL;
}
