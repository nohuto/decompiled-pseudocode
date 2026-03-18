/*
 * XREFs of SepSddlParseWideStringUlong @ 0x1C00C8C64
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00C8760 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlParseWideStringUlong(wchar_t *Buffer, const wchar_t **FinalPosition, unsigned int *Value)
{
  wchar_t v3; // r9
  int v5; // r10d
  unsigned int v6; // r11d
  const wchar_t *v7; // rdx
  int v8; // eax
  __int64 result; // rax

  v3 = *Buffer;
  *Value = 0;
  *FinalPosition = Buffer;
  if ( v3 != 48 )
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
      goto LABEL_4;
LABEL_10:
    v5 = 10;
    goto LABEL_5;
  }
  if ( ((Buffer[1] - 88) & 0xFFDF) != 0 )
    goto LABEL_10;
  v3 = Buffer[2];
  Buffer += 2;
LABEL_4:
  v5 = 16;
LABEL_5:
  v6 = 0;
  if ( !v3 )
    return 0LL;
  v7 = Buffer;
  do
  {
    if ( (unsigned __int16)(v3 - 48) > 9u )
    {
      if ( v5 != 16 )
        break;
      if ( (unsigned __int16)(v3 - 65) > 5u )
      {
        if ( (unsigned __int16)(v3 - 97) > 5u )
          break;
        v8 = v3 - 87;
      }
      else
      {
        v8 = v3 - 55;
      }
    }
    else
    {
      v8 = v3 - 48;
    }
    if ( v8 + v5 * v6 < v6 )
      return 0LL;
    ++v7;
    v6 = v8 + v5 * v6;
    v3 = *v7;
  }
  while ( *v7 );
  if ( v7 == Buffer )
    return 0LL;
  *FinalPosition = v7;
  result = 1LL;
  *Value = v6;
  return result;
}
