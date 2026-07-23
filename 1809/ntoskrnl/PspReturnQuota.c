/*
 * XREFs of PspReturnQuota @ 0x1400BE910
 * Callers:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068560 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400901D0 (PsReturnProcessPagedPoolQuota.c)
 *     PsReturnProcessQuota @ 0x1400917C8 (PsReturnProcessQuota.c)
 *     PsReturnPoolQuota @ 0x14011F430 (PsReturnPoolQuota.c)
 *     PsChargeSharedPoolQuota @ 0x1405CAB24 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1405CBCA8 (PsReturnSharedPoolQuota.c)
 *     ObpIncrementHandleCountEx @ 0x1405E45F0 (ObpIncrementHandleCountEx.c)
 *     MiDecommitRegion @ 0x1405ED220 (MiDecommitRegion.c)
 *     PsReturnProcessPageFileQuota @ 0x1405F39D4 (PsReturnProcessPageFileQuota.c)
 *     ObpFreeObject @ 0x140646F60 (ObpFreeObject.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14012A95C (PspReturnResourceQuota.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

signed __int64 __fastcall PspReturnQuota(char *a1, ULONG_PTR a2, unsigned int a3, ULONG_PTR a4)
{
  void *v5; // r12
  __int64 v6; // r14
  ULONG_PTR v9; // r15
  char v10; // r13
  volatile signed __int64 *v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r9
  unsigned __int64 v15; // r8
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v17; // r8
  signed __int64 v18; // rdx
  bool v19; // zf
  signed __int64 result; // rax
  __int64 v21; // r8

  v5 = a1;
  v6 = (__int64)(int)a3 << 7;
  v9 = (int)a3;
  v10 = PspResourceFlags[8 * a3];
  v11 = (volatile signed __int64 *)&a1[v6];
  _m_prefetchw(&a1[v6]);
  v12 = *(_QWORD *)&a1[v6];
  v13 = *(_QWORD *)&a1[v6 + 64];
  if ( *(_QWORD *)&a1[v6 + 80] )
  {
    if ( v13 > v12 )
    {
      v14 = (unsigned __int64 *)&qword_14040F428[7 * (int)a3];
      v15 = *v14;
      if ( v13 - v12 > *v14 )
      {
        if ( v15 > a4 )
          v15 = a4;
        if ( v13 == _InterlockedCompareExchange64(v11 + 8, v13 - v15, v13)
          && _InterlockedExchangeAdd64(v11 + 9, v15) + v15 > *v14 )
        {
          v21 = _InterlockedExchange64(v11 + 9, 0LL);
          if ( v21 )
            PspReturnResourceQuota(a3, &a1[v6], v21, 0LL);
        }
      }
    }
  }
  BugCheckParameter4 = a4;
  while ( 1 )
  {
    do
    {
      if ( BugCheckParameter4 >= v12 )
      {
        v17 = v12;
        v18 = 0LL;
      }
      else
      {
        v17 = BugCheckParameter4;
        v18 = v12 - BugCheckParameter4;
      }
      result = _InterlockedCompareExchange64(v11, v18, v12);
      v19 = v12 == result;
      v12 = result;
    }
    while ( !v19 );
    BugCheckParameter4 -= v17;
    if ( !BugCheckParameter4 )
      break;
    if ( v5 == &PspSystemQuotaBlock )
      KeBugCheckEx(0x21u, a2, v9, a4, BugCheckParameter4);
    v5 = &PspSystemQuotaBlock;
    v11 = (volatile signed __int64 *)((char *)&PspSystemQuotaBlock + v6);
    _m_prefetchw((char *)&PspSystemQuotaBlock + v6);
    v12 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v6);
  }
  if ( a2 )
  {
    if ( (v10 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8 * v9 + 784), -(__int64)a4);
  }
  return result;
}
