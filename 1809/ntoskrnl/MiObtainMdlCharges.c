/*
 * XREFs of MiObtainMdlCharges @ 0x140011B44
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  SIZE_T v14; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // r14
  unsigned __int64 v17; // rsi
  _DWORD *result; // rax
  unsigned int v19; // eax
  __int64 *v20; // rcx

  if ( (a7 & 0x400) != 0 && ((a7 & 0x362) != 0 || (a7 & 0x10001) == 0 || ((a6 - 1) & 0xFFFFFFFD) != 0) )
    return 0LL;
  v9 = a5;
  if ( a5 > 0xFFFFE000 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    v9 = 4294959104LL;
    if ( (a7 & 0x60) != 0 && a4 )
      v9 = ~((a4 << 12) - 1) & 0xFFFFE000;
  }
  v10 = (unsigned __int64)(v9 + 4095) >> 12;
  if ( (a7 & 0x40) != 0 )
  {
    if ( a2 > a4 || a3 < qword_14043F5C8 )
      return 0LL;
    v19 = 0;
    v20 = MiLargePageSizes;
    do
    {
      if ( a4 == *v20 )
        break;
      ++v19;
      ++v20;
    }
    while ( v19 < 3 );
    if ( v19 == 3 || v10 % a4 && ((a7 & 4) != 0 || v10 < a4) )
      return 0LL;
  }
  v11 = (unsigned __int64)(~(unsigned __int8)*(_DWORD *)(a1 + 4) & 0x10) << 6;
  v12 = *(_QWORD *)(a1 + 7360) - v11;
  if ( (__int64)v12 <= 0 )
    return 0LL;
  if ( v10 > v12 )
  {
    if ( (a7 & 4) != 0 )
      return 0LL;
    v10 = *(_QWORD *)(a1 + 7360) - v11;
    if ( (a7 & 0x40) != 0 )
    {
      if ( v12 % a4 && v12 < a4 )
        return 0LL;
    }
    else if ( (a7 & 0x20) != 0 && a4 )
    {
      v10 = v12 & ~(a4 - 1);
    }
  }
  if ( !v10 )
    return 0LL;
  v13 = v10 >> 4;
  if ( (a7 & 0x40) != 0 )
  {
    v13 = a4;
  }
  else if ( (a7 & 0x20) != 0 && a4 )
  {
    v13 = a4;
  }
  v14 = 8 * v10 + 48;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x69646D4Du);
    v16 = PoolWithTag;
    if ( PoolWithTag )
      break;
    if ( (a7 & 4) == 0 && ((a7 & 0x40) == 0 || 2 * v13 <= v10) )
    {
      if ( v13 )
      {
        if ( v10 >= v13 )
        {
          v14 -= 8 * v13;
          v10 -= v13;
          if ( v10 )
            continue;
        }
      }
    }
    return 0LL;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  PoolWithTag[10] = (_DWORD)v10 << 12;
  *((_WORD *)PoolWithTag + 5) = 0;
  *((_WORD *)PoolWithTag + 4) = 8 * (v10 + 6);
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  PoolWithTag[11] = 0;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  if ( !(unsigned int)MiChargeCommit(a1, v10, 1LL) )
  {
    ExFreePoolWithTag(v16, 0);
    return 0LL;
  }
  v17 = v10;
  while ( !(unsigned int)MiChargeResident(a1, v10, v11) )
  {
    if ( (a7 & 4) == 0 )
    {
      if ( (__int64)(*(_QWORD *)(a1 + 7360) - v11) > 0 )
      {
        if ( v10 > *(_QWORD *)(a1 + 7360) - v11 )
          v10 = *(_QWORD *)(a1 + 7360) - v11;
      }
      else
      {
        v10 = 0LL;
      }
      if ( (a7 & 0x40) != 0 || (a7 & 0x20) != 0 && a4 )
        v10 &= ~(a4 - 1);
      if ( v10 )
        continue;
    }
    ExFreePoolWithTag(v16, 0);
    MiReturnCommit(a1, v17);
    return 0LL;
  }
  if ( v10 != v17 )
    MiReturnCommit(a1, v17 - v10);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14043C0D8, v10);
  result = v16;
  v16[10] = (_DWORD)v10 << 12;
  return result;
}
