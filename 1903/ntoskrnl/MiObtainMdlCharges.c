/*
 * XREFs of MiObtainMdlCharges @ 0x1400EFA14
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400EF404 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiObtainMdlCharges(
        __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7)
{
  char v7; // bp
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  int v13; // r8d
  __int64 v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  SIZE_T v17; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // r14
  unsigned __int64 v20; // rsi
  _DWORD *result; // rax
  unsigned int v22; // eax
  __int64 *v23; // rcx
  int v24; // [rsp+80h] [rbp+38h]

  v7 = a7;
  if ( (a7 & 0x400) != 0 && ((a7 & 0x362) != 0 || (a7 & 0x10001) == 0 || ((a6 - 1) & 0xFFFFFFFD) != 0) )
    return 0LL;
  v11 = a5;
  if ( a5 > 0xFFFFE000 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    v11 = 4294959104LL;
    if ( (a7 & 0x60) != 0 && a4 )
      v11 = ~((a4 << 12) - 1) & 0xFFFFE000;
  }
  v12 = (unsigned __int64)(v11 + 4095) >> 12;
  v13 = a7 & 0x40;
  v24 = v13;
  if ( (v7 & 0x40) != 0 )
  {
    if ( a2 > a4 || a3 < qword_14046A348 )
      return 0LL;
    v22 = 0;
    v23 = MiLargePageSizes;
    do
    {
      if ( a4 == *v23 )
        break;
      ++v22;
      ++v23;
    }
    while ( v22 < 3 );
    if ( v22 == 3 || v12 % a4 && ((v7 & 4) != 0 || v12 < a4) )
      return 0LL;
  }
  v14 = 32LL * (~(unsigned __int8)*(_DWORD *)(a1 + 4) & 0x20);
  v15 = *(_QWORD *)(a1 + 8128) - v14;
  if ( (__int64)v15 <= 0 )
    return 0LL;
  if ( v12 > v15 )
  {
    if ( (v7 & 4) != 0 )
      return 0LL;
    v12 = *(_QWORD *)(a1 + 8128) - v14;
    if ( v13 )
    {
      if ( v15 % a4 && v15 < a4 )
        return 0LL;
    }
    else if ( (v7 & 0x20) != 0 && a4 )
    {
      v12 = v15 & ~(a4 - 1);
    }
  }
  if ( !v12 )
    return 0LL;
  v16 = v12 >> 4;
  if ( v13 )
  {
    v16 = a4;
  }
  else if ( (v7 & 0x20) != 0 && a4 )
  {
    v16 = a4;
  }
  v17 = 8 * v12 + 48;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x69646D4Du);
    v19 = PoolWithTag;
    if ( PoolWithTag )
      break;
    if ( (v7 & 4) == 0 && (!v24 || 2 * v16 <= v12) )
    {
      if ( v16 )
      {
        if ( v12 >= v16 )
        {
          v17 -= 8 * v16;
          v12 -= v16;
          if ( v12 )
            continue;
        }
      }
    }
    return 0LL;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  PoolWithTag[10] = (_DWORD)v12 << 12;
  *((_WORD *)PoolWithTag + 5) = 0;
  *((_WORD *)PoolWithTag + 4) = 8 * (v12 + 6);
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  PoolWithTag[11] = 0;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  if ( !(unsigned int)MiChargeCommit(a1, v12, 1u) )
  {
    ExFreePoolWithTag(v19, 0);
    return 0LL;
  }
  v20 = v12;
  while ( !(unsigned int)MiChargeResident((ULONG_PTR *)a1, v12, v14) )
  {
    if ( (v7 & 4) == 0 )
    {
      if ( *(_QWORD *)(a1 + 8128) - v14 > 0 )
      {
        if ( v12 > *(_QWORD *)(a1 + 8128) - v14 )
          v12 = *(_QWORD *)(a1 + 8128) - v14;
      }
      else
      {
        v12 = 0LL;
      }
      if ( v24 || (v7 & 0x20) != 0 && a4 )
        v12 &= ~(a4 - 1);
      if ( v12 )
        continue;
    }
    ExFreePoolWithTag(v19, 0);
    MiReturnCommit(a1, v20);
    return 0LL;
  }
  if ( v12 != v20 )
    MiReturnCommit(a1, v20 - v12);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140466A38, v12);
  result = v19;
  v19[10] = (_DWORD)v12 << 12;
  return result;
}
