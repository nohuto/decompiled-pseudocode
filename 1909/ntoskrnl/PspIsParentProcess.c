/*
 * XREFs of PspIsParentProcess @ 0x140112894
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B8720 (PspOneDirectionSecurityDomainCombine.c)
 *     PspThreadOpen @ 0x1406B88D0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1406B8990 (PspProcessOpen.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsParentProcess(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)(a2 + 1000) == *(_QWORD *)(a1 + 744) )
    return *(_QWORD *)(a2 + 1912) > *(_QWORD *)(a1 + 1912);
  return result;
}
