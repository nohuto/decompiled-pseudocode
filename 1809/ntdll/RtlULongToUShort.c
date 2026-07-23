/*
 * XREFs of RtlULongToUShort @ 0x18007BB9C
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x18007B770 (RtlSetCurrentDirectory_U.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800F017C (RtlpGetDefaultLanguageBaseOrParent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongToUShort(unsigned int a1, __int16 *a2)
{
  __int16 v2; // r8

  if ( a1 > 0xFFFF )
    v2 = -1;
  else
    v2 = a1;
  *a2 = v2;
  return a1 > 0xFFFF ? 0xC0000095 : 0;
}
