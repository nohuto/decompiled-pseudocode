/*
 * XREFs of ExpWnfAllocateScopeMap @ 0x140761350
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfAllocateScopeMap(_QWORD *a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  unsigned int v4; // ecx
  _QWORD *v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x20666E57u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x90uLL);
  v4 = 0;
  *v3 = 9439489;
  v5 = v3 + 8;
  do
  {
    v5[1] = v5;
    ++v4;
    *v5 = v5;
    *(v5 - 1) = 0LL;
    v5 += 3;
  }
  while ( v4 < 5 );
  *a1 = v3;
  return 0LL;
}
