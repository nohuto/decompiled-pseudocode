/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x140194924
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140092040 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14031D414 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x14061B680 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14077538C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1408E2640 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140085258 (AuthzBasepMemAlloc.c)
 */

_DWORD *__fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = AuthzBasepMemAlloc(0x30uLL, a2, 0x74416553u);
  if ( result )
  {
    result[1] = 0;
    *((_QWORD *)result + 2) = 0LL;
    result[7] = 0;
    *((_QWORD *)result + 5) = 0LL;
    *((_QWORD *)result + 2) = result + 2;
    *((_QWORD *)result + 1) = result + 2;
    *result = 0;
    *((_QWORD *)result + 5) = result + 8;
    *((_QWORD *)result + 4) = result + 8;
    result[6] = 0;
  }
  return result;
}
