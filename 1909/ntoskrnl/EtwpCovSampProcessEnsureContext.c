/*
 * XREFs of EtwpCovSampProcessEnsureContext @ 0x140903FA4
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140903870 (EtwpCovSampImageNotify.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpCovSampProcessCleanup @ 0x140903F1C (EtwpCovSampProcessCleanup.c)
 */

__int64 __fastcall EtwpCovSampProcessEnsureContext(__int64 a1)
{
  unsigned int v1; // ebx
  PVOID PoolWithTag; // rax
  signed __int64 v4; // rsi
  signed __int64 v5; // rax
  void *v6; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 2160) )
  {
    if ( (*(_DWORD *)(a1 + 1788) & 1) != 0 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x56777445u);
      v4 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x30uLL);
        *(_DWORD *)(v4 + 44) = -1;
        v5 = -_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2160), v4, 0LL);
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
