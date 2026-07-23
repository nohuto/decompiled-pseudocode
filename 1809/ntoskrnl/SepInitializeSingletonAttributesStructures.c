/*
 * XREFs of SepInitializeSingletonAttributesStructures @ 0x1409AE9A0
 * Callers:
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14016A670 (RtlpCreateHashTable.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 SepInitializeSingletonAttributesStructures()
{
  PEX_SPIN_LOCK v0; // rax
  unsigned int v1; // ebx
  ULONG_PTR v2; // rax
  _QWORD *PoolWithTag; // rdi
  PVOID v4; // rax
  void *v5; // rsi
  _QWORD *v6; // rax
  PEX_SPIN_LOCK v7; // rcx
  ULONG_PTR v8; // rax
  void *v10; // rcx

  v0 = SepSingletonGlobal;
  v1 = 0;
  *((_DWORD *)SepSingletonGlobal + 1) = 0;
  *((_QWORD *)v0 + 1) = 0LL;
  *((_DWORD *)v0 + 4) = 0;
  *v0 = 0;
  v2 = SeLuidToIndexMapping;
  *(_QWORD *)SeLuidToIndexMapping = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x74446553u);
    if ( PoolWithTag )
    {
      v4 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x74446553u);
      v5 = v4;
      if ( v4 )
      {
        memset(v4, 0, 0x600uLL);
        v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x74446553u);
        v7 = SepSingletonGlobal;
        *((_QWORD *)SepSingletonGlobal + 1) = v6;
        if ( v6 )
        {
          *v6 = v5;
          ++*((_DWORD *)v7 + 1);
          if ( RtlpCreateHashTable((_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8), 0x80u, 0, 0) )
          {
            v8 = SeLuidToIndexMapping;
            *(_DWORD *)(SeLuidToIndexMapping + 16) = 64;
            *(_QWORD *)(v8 + 24) = PoolWithTag;
            *PoolWithTag = 0LL;
            return v1;
          }
        }
        ExFreePoolWithTag(v5, 0x74446553u);
      }
      ExFreePoolWithTag(PoolWithTag, 0x74446553u);
    }
    v1 = -1073741801;
    v10 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x74446553u);
  }
  return v1;
}
