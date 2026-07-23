/*
 * XREFs of MiViewMayContainPage @ 0x1400EAE80
 * Callers:
 *     MiTrimSection @ 0x1400EAC24 (MiTrimSection.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x140031000 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void *__fastcall MiViewMayContainPage(__int64 a1, char a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v9; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  int v15; // edx
  unsigned __int8 v16; // al
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rbp
  PVOID PoolWithTag; // rax
  void *v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // [rsp+60h] [rbp+18h]

  v5 = *(_QWORD *)(a3 + 16);
  v6 = -1;
  v7 = 0LL;
  v9 = a3;
  if ( (v5 & 3) != 0 )
  {
    switch ( v5 & 3 )
    {
      case 1uLL:
        v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
        v15 = a2 & 0x20;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
        {
          if ( v15 && (*(_DWORD *)(a3 - 48) & 0x28) != 0x20 )
            return 0LL;
          v11 = MiStartingOffset(*(__int64 **)(a3 - 24), *(_QWORD *)(a3 - 16), 0xFFFFFFFF);
          v16 = *(_BYTE *)(v9 - 64);
          a3 = *(unsigned int *)(v9 - 72);
          v13 = v11
              + (((*(unsigned int *)(v9 - 68) | ((unsigned __int64)*(unsigned __int8 *)(v9 - 63) << 32))
                - (a3 | ((unsigned __int64)v16 << 32))
                + 1) << 12);
          goto LABEL_13;
        }
        if ( !v15 )
        {
          v16 = *(_BYTE *)(a3 - 64);
          v11 = 0LL;
          LODWORD(a3) = *(_DWORD *)(a3 - 72);
          v13 = 0LL;
LABEL_13:
          v5 = ((unsigned int)a3 | ((unsigned __int64)v16 << 32)) << 12;
          goto LABEL_5;
        }
        break;
      case 2uLL:
        v5 &= ~2uLL;
        if ( *(_DWORD *)(a3 + 24) != -1 )
          v6 = *(_DWORD *)(a3 + 24);
        v11 = *(_QWORD *)(a3 - 48) << 12;
        v13 = v11 + *(_QWORD *)(a3 - 40);
        goto LABEL_5;
      case 3uLL:
        v5 &= 0xFFFFFFFFFFFFFFFCuLL;
        v6 = *(_DWORD *)(a3 + 32);
        v13 = *(_QWORD *)(a3 + 24) - v5 + 1;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v22 = a1 + 128;
          if ( (unsigned int)MiGetSystemRegionType(v5) != 1 )
            v6 = -2;
          while ( v22 )
          {
            v25 = MiStartingOffset((__int64 *)v22, *(_QWORD *)(v22 + 8), v6);
            if ( a4 < MiEndingOffsetWithLock((__int64 *)v22) && a4 >= v25 )
            {
              v23 = *(_QWORD *)(v22 + 8);
              v24 = v23 + 8 * ((a4 - v25) >> 12);
              if ( v24 < v23 + 8 * (unsigned __int64)*(unsigned int *)(v22 + 44)
                && ((*(_BYTE *)(v22 + 34) & 2) == 0 || (*(_DWORD *)(a1 + 56) & 0x4000000) == 0) )
              {
                v5 += (__int64)(v24 - *(_QWORD *)(a1 + 136)) >> 3 << 12;
                goto LABEL_43;
              }
              return 0LL;
            }
            v22 = *(_QWORD *)(v22 + 16);
          }
          return 0LL;
        }
LABEL_43:
        v11 = 0LL;
        goto LABEL_5;
    }
    return 0LL;
  }
  v11 = *(_QWORD *)(a3 + 40) << 18;
  if ( (*(_QWORD *)(a3 + 32) & 0x3F) != 0 )
    v12 = (*(_QWORD *)(a3 + 32) & 0x3FLL) << 12;
  else
    v12 = 0x40000LL;
  v13 = v12 + v11;
  if ( !v5 )
    return 0LL;
LABEL_5:
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v17 = 0LL;
    v19 = v5 + 4096;
  }
  else
  {
    if ( a4 >= v13 || a5 <= v11 )
      return 0LL;
    v17 = v11;
    if ( a4 >= v11 )
    {
      v17 = a4;
      v5 += a4 - v11;
    }
    v18 = a5 - v17;
    if ( a5 > v13 )
      v18 = v13 - v17;
    v19 = v5 + v18;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6156694Du);
  v21 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = v5;
    *((_QWORD *)PoolWithTag + 3) = v19;
    *((_QWORD *)PoolWithTag + 1) = v7;
    *((_QWORD *)PoolWithTag + 4) = v17;
    *((_DWORD *)PoolWithTag + 10) = v6;
    *((_DWORD *)PoolWithTag + 11) = *(_DWORD *)(v9 + 16) & 3;
    if ( v7 )
    {
      if ( !ObReferenceObjectSafeWithTag(v7) )
      {
        ExFreePoolWithTag(v21, 0);
        return 0LL;
      }
    }
  }
  return v21;
}
