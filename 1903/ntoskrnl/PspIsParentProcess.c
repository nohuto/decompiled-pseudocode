/*
 * XREFs of PspIsParentProcess @ 0x1400ADAF8
 * Callers:
 *     PspThreadOpen @ 0x1406720A0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x140672160 (PspProcessOpen.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406722F4 (PspOneDirectionSecurityDomainCombine.c)
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
