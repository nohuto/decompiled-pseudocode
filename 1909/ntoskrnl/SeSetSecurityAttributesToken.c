/*
 * XREFs of SeSetSecurityAttributesToken @ 0x1408DA000
 * Callers:
 *     <none>
 * Callees:
 *     SepInternalSetSecurityAttributesToken @ 0x14031C254 (SepInternalSetSecurityAttributesToken.c)
 */

__int64 __fastcall SeSetSecurityAttributesToken(void *a1, KPROCESSOR_MODE a2, int *a3, __int64 a4)
{
  return SepInternalSetSecurityAttributesToken(a1, a2, 0, a3, a4);
}
