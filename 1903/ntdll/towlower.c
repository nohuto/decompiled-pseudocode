/*
 * XREFs of towlower @ 0x180092230
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     iswctype @ 0x180090110 (iswctype.c)
 */

wint_t __cdecl towlower(wint_t C)
{
  wint_t v1; // bx

  v1 = C;
  if ( iswctype(C, 1u) )
    v1 += 32;
  return v1;
}
