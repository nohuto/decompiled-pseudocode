/*
 * XREFs of PiDqSerializationAlloc @ 0x1406BDBB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqSerializationAlloc(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  void *v9; // rcx
  PVOID PoolWithTag; // rax

  v3 = *a3;
  v5 = *(_DWORD *)(a1 + 24);
  if ( *a3 > v5 )
  {
    v9 = *(void **)(a1 + 16);
    v5 = 0;
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x58706E50u);
      v3 = *a3;
    }
    if ( v3 < 0x1000 )
    {
      *a3 = 4096;
      v3 = 4096;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x58706E50u);
    *(_QWORD *)(a1 + 16) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *a3);
      v5 = *a3;
    }
    *(_DWORD *)(a1 + 24) = v5;
  }
  *a3 = v5;
  result = *(_QWORD *)(a1 + 16);
  *a2 = result;
  return result;
}
