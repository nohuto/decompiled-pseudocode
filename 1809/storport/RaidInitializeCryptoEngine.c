/*
 * XREFs of RaidInitializeCryptoEngine @ 0x1C003B204
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaidInitializeCryptoEngine(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rax
  void *v4; // rcx
  unsigned int v5; // esi
  size_t v7; // rbx
  PVOID Pool; // rax
  unsigned int *v9; // rbx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v13; // rdx
  PVOID v14; // rax
  unsigned int i; // edi
  unsigned __int64 v16; // rcx
  unsigned int *v17; // [rsp+30h] [rbp+8h]

  v2 = a2[5];
  v4 = *(void **)(a1 + 5768);
  v5 = 0;
  v7 = 20 * v2 + 12;
  if ( !v4 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 20 * v2 + 12, 0x72436152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 5768) = Pool;
    v4 = Pool;
    if ( !Pool )
    {
      v9 = v17;
LABEL_4:
      v10 = *(void **)(a1 + 5768);
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0x72436152u);
        *(_QWORD *)(a1 + 5768) = 0LL;
      }
      v11 = (void *)*((_QWORD *)v9 + 1);
      v5 = -1056964605;
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0x72436152u);
        *(_QWORD *)(a1 + 5768) = 0LL;
      }
      return v5;
    }
  }
  memmove(v4, a2, v7);
  v9 = (unsigned int *)(a1 + 5776);
  *(_DWORD *)(a1 + 5776) = a2[4];
  v13 = *(unsigned int *)(a1 + 5776);
  *(_DWORD *)(a1 + 5792) = 0;
  *(_BYTE *)(a1 + 5780) = 0;
  v14 = RaidAllocatePool(NonPagedPoolNx, v13 << 6, 0x72436152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 5784) = v14;
  if ( !v14 )
    goto LABEL_4;
  memset(v14, 0, (unsigned __int64)*v9 << 6);
  for ( i = 0; i < *v9; ++i )
  {
    v16 = *((_QWORD *)v9 + 1) + ((unsigned __int64)i << 6);
    *(_DWORD *)(v16 + 44) = 0;
    *(_DWORD *)v16 = i;
    InitializeSListHead((PSLIST_HEADER)(v16 + 48));
  }
  return v5;
}
