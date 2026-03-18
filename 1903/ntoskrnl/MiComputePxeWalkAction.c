/*
 * XREFs of MiComputePxeWalkAction @ 0x14004A690
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x140075CD0 (MiGetSystemCacheReverseMap.c)
 *     MiMakeSystemLeavesNonZero @ 0x1401748BC (MiMakeSystemLeavesNonZero.c)
 */

__int64 __fastcall MiComputePxeWalkAction(__int16 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r11
  __int16 *v6; // r10
  __int16 v8; // si
  __int16 v9; // di
  __int64 v10; // rcx
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx

  v3 = *a2;
  v4 = (unsigned __int64)a2;
  v6 = a1;
  if ( a3 == 3
    && (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v16 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v4 >> 3) & 0x1FF));
      v17 = v3 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v17 = v3;
      v3 = v17;
      if ( (v16 & 0x42) != 0 )
        v3 = v17 | 0x42;
    }
  }
  if ( (v3 & 1) == 0 )
    return (*(_BYTE *)a1 & 1) != 0;
  v8 = *a1;
  if ( (v9 = *a1 & 0x4000) != 0 )
  {
    v14 = (v3 >> 12) & 0xFFFFFFFFFLL;
    if ( v14 == MiState[a3 + 1149] || v14 == MiState[a3 + 1145] || (v3 & 0x800) == 0 && (v3 & 0x42) == 0 )
      return (*(_BYTE *)a1 & 1) != 0;
  }
  if ( !a3 )
    return 1LL;
  v10 = *((_QWORD *)a1 + 7);
  v11 = 1;
  if ( v10 && v10 == *(_QWORD *)&v6[8 * a3 + 36] )
  {
    v11 = 0;
    *((_QWORD *)v6 + 7) = 0LL;
  }
  v12 = *((_QWORD *)v6 + 6);
  if ( v12 && v12 == *(_QWORD *)&v6[8 * a3 + 36] )
  {
    v11 = 0;
    *((_QWORD *)v6 + 6) = 0LL;
  }
  if ( (v3 & 0x80u) != 0LL )
    return (v8 & 1) != 0;
  if ( v4 == 0xFFFFF6FB7DBEDF68uLL
    || (v8 & 0x200) != 0
    && qword_1404668A8 != (PVOID)qword_1404668B0
    && ((v3 >> 12) & 0xFFFFFFFFFLL) == MiState[a3 + 1149] )
  {
    return 0LL;
  }
  if ( (v8 & 1) == 0 )
  {
    if ( (*(_QWORD *)(48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      return 1LL;
    if ( a3 == 1 )
    {
      v13 = *((_QWORD *)v6 + 2);
      if ( (*(_BYTE *)(v13 + 184) & 7) == 2
        && (unsigned __int16)*(_DWORD *)(MiGetSystemCacheReverseMap((__int64)(v4 << 25) >> 16 << 25 >> 16, MiState) + 32) >> 6 != (unsigned __int64)*(unsigned __int16 *)(v13 + 174) )
      {
        return 1LL;
      }
    }
  }
  if ( !v11
    || a3 == 1
    && (v8 & 0x10) != 0
    && (v8 & 1) == 0
    && (((*(_QWORD *)(48 * ((*(_QWORD *)v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 4) & 0x3FF) == 0
     || (unsigned __int8)((*(_QWORD *)(48 * ((*(_QWORD *)v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 14) & 7) < *((_BYTE *)v6 + 4)) )
  {
    return 1LL;
  }
  if ( v9 && a3 > 1 && a3 == ((*((unsigned __int8 *)v6 + 2) >> 2) & 7) )
    MiMakeSystemLeavesNonZero(v6, v4, (unsigned int)a3);
  return 2LL;
}
