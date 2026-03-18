/*
 * XREFs of PsGetSiloIdentifier @ 0x14078CD10
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x140943F90 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloIdentifier(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    return *(unsigned int *)(a1 + 1220);
  return result;
}
