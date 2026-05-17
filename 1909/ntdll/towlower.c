/*
 * XREFs of towlower @ 0x1800928D0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     iswctype @ 0x1800907B0 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
