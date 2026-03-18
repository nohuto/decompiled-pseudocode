/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x140195104
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400CF360 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14031CE64 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x14061D190 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14077896C (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1408E1F40 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140085658 (AuthzBasepMemAlloc.c)
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
