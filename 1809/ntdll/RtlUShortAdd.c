/*
 * XREFs of RtlUShortAdd @ 0x1800E7E34
 * Callers:
 *     RtlpCreateServerAcl @ 0x1800E8D94 (RtlpCreateServerAcl.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUShortAdd(unsigned __int16 a1, __int16 a2, __int16 *a3)
{
  unsigned __int16 v3; // ax
  __int16 v4; // dx

  v3 = a2 + a1;
  if ( (unsigned __int16)(a2 + a1) < a1 )
    v4 = -1;
  else
    v4 = a2 + a1;
  *a3 = v4;
  return v3 < a1 ? 0xC0000095 : 0;
}
