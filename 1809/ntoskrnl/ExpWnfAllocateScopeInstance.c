/*
 * XREFs of ExpWnfAllocateScopeInstance @ 0x1406CD75C
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfAllocateScopeInstance(_QWORD *a1, int a2, const void *a3, unsigned int a4)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 + 80, 0x20666E57u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x50uLL);
  *(_DWORD *)v9 = 5245186;
  v9[1] = 0LL;
  *((_DWORD *)v9 + 4) = a2;
  *((_DWORD *)v9 + 5) = a4;
  if ( a4 )
  {
    v9[3] = v9 + 10;
    memmove(v9 + 10, a3, a4);
  }
  v9[6] = 0LL;
  v9[7] = 0LL;
  result = 0LL;
  *a1 = v9;
  return result;
}
