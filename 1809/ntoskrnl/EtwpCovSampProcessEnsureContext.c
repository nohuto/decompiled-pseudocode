/*
 * XREFs of EtwpCovSampProcessEnsureContext @ 0x1408C8478
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1408C7D70 (EtwpCovSampImageNotify.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCovSampProcessCleanup @ 0x1408C83F0 (EtwpCovSampProcessCleanup.c)
 */

__int64 __fastcall EtwpCovSampProcessEnsureContext(__int64 a1)
{
  unsigned int v1; // ebx
  PVOID PoolWithTag; // rax
  signed __int64 v4; // rsi
  signed __int64 v5; // rax
  void *v6; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 2112) )
  {
    if ( (*(_DWORD *)(a1 + 1740) & 1) != 0 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x56777445u);
      v4 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x28uLL);
        *(_QWORD *)(v4 + 8) = 0LL;
        v5 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2112), v4, 0LL);
        v6 = (void *)(v4 & -(__int64)(v5 != 0));
        if ( v6 )
        {
          EtwpCovSampProcessCleanup(v4 & -(__int64)(v5 != 0), 1);
          ExFreePoolWithTag(v6, 0x56777445u);
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v1;
}
