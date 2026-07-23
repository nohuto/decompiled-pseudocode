/*
 * XREFs of IsEncodedAttributeChar @ 0x1408A9D84
 * Callers:
 *     DecodeAttributeName @ 0x1408A81F0 (DecodeAttributeName.c)
 *     EncodeAttributeName @ 0x1408A846C (EncodeAttributeName.c)
 * Callees:
 *     iswalnum @ 0x140196170 (iswalnum.c)
 */

char __fastcall IsEncodedAttributeChar(wint_t a1)
{
  char result; // al
  const wchar_t *v3; // rcx
  unsigned int v4; // edx

  result = 1;
  if ( a1 < 0x7Fu )
  {
    if ( !iswalnum(a1) )
    {
      result = 1;
      v3 = L"#$'*+-./:;?@[\\]^_`{}~";
      v4 = 0;
      while ( *v3 != a1 )
      {
        ++v4;
        ++v3;
        if ( v4 >= 0x15 )
          return result;
      }
    }
    return 0;
  }
  return result;
}
