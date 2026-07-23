/*
 * XREFs of AppendCondition @ 0x1408A8110
 * Callers:
 *     LocalGetConditionForString @ 0x1408A9E2C (LocalGetConditionForString.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 */

__int64 __fastcall AppendCondition(const void **a1, unsigned int *a2, unsigned int *a3, const void *a4, size_t Size)
{
  unsigned int v5; // ebx
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // ebp
  PVOID v12; // rax
  PVOID v13; // rdi
  void *v14; // r12

  v5 = 0;
  if ( a1 && a2 && a3 )
  {
    v9 = *a3;
    v10 = *a3 + Size;
    if ( v10 >= *a3 )
    {
      v11 = *a3 + Size;
      if ( v10 > *a2 )
      {
        v12 = SddlpAlloc(v10);
        v13 = v12;
        if ( !v12 )
          return 8;
        v14 = (void *)*a1;
        memmove(v12, *a1, *a2);
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        *a1 = v13;
        v9 = *a3;
        *a2 = v11;
      }
      memmove((char *)*a1 + v9, a4, (unsigned int)Size);
      *a3 = v9 + Size;
      return v5;
    }
    return 534;
  }
  return 87LL;
}
