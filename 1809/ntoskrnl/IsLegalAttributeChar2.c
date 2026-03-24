/*
 * XREFs of IsLegalAttributeChar2 @ 0x1408A8B6C
 * Callers:
 *     GetAttributeName @ 0x1408A7370 (GetAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x1408A9304 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     <none>
 */

char __fastcall IsLegalAttributeChar2(unsigned __int16 a1)
{
  char result; // al
  int v2; // r8d
  const wchar_t *i; // rdx

  result = 1;
  if ( a1 < 0x7Fu )
  {
    v2 = 0;
    for ( i = L" !\"&)(<>=|"; *i != a1; ++i )
    {
      if ( (unsigned int)++v2 >= 0xA )
        return result;
    }
    return 0;
  }
  return result;
}
