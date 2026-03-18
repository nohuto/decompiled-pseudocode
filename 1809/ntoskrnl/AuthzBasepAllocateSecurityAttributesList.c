/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x140181860
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6AA8 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF0CC (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x1405BD654 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140736978 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1408A3F40 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140121608 (AuthzBasepMemAlloc.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

_QWORD *__fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = AuthzBasepMemAlloc(0x30uLL, a2, 0x74416553u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x30uLL);
    v3[2] = v3 + 1;
    v3[1] = v3 + 1;
    *(_DWORD *)v3 = 0;
    v3[5] = v3 + 4;
    v3[4] = v3 + 4;
    *((_DWORD *)v3 + 6) = 0;
  }
  return v3;
}
