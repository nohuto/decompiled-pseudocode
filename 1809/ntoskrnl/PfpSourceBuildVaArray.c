/*
 * XREFs of PfpSourceBuildVaArray @ 0x140865FE4
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x1408655EC (PfpPrefetchPrivatePages.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpSourceBuildVaArray(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void *v6; // rcx
  PVOID PoolWithTag; // rax
  _QWORD *v8; // rdx
  unsigned int i; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v3 = 0;
  if ( (_DWORD)v2 )
  {
    if ( *(_DWORD *)(a2 + 4) < (unsigned int)v2 )
    {
      v6 = *(void **)(a2 + 8);
      if ( v6 )
      {
        ExFreePoolWithTag(v6, 0);
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_DWORD *)(a2 + 4) = 0;
      }
      if ( (unsigned __int64)(16 * v2) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(16 * v2), 0x41566650u);
      *(_QWORD *)(a2 + 8) = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *(_DWORD *)(a2 + 4) = v2;
      LODWORD(v2) = *(_DWORD *)(a1 + 24);
    }
    v8 = *(_QWORD **)(a2 + 8);
    for ( i = 0; i < (unsigned int)v2; LODWORD(v2) = *(_DWORD *)(a1 + 24) )
    {
      v10 = i++;
      v11 = *(_QWORD *)(a1 + 32) + 16 * v10;
      *v8 = *(_QWORD *)v11;
      v8 += 2;
      *(v8 - 1) = *(unsigned int *)(v11 + 8);
    }
    *(_DWORD *)a2 = v2;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
