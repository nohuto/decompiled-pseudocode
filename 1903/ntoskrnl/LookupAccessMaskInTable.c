/*
 * XREFs of LookupAccessMaskInTable @ 0x1406DD874
 * Callers:
 *     LocalConvertAclToString @ 0x1405B28CC (LocalConvertAclToString.c)
 *     LocalGetAclForString @ 0x1406F85C8 (LocalGetAclForString.c)
 * Callees:
 *     _wcsnicmp @ 0x1401A0240 (_wcsnicmp.c)
 */

wchar_t **__fastcall LookupAccessMaskInTable(wchar_t *Str1, int a2, int a3)
{
  __int64 v3; // rdi
  const wchar_t **v4; // rsi
  unsigned int i; // ebx

  v3 = 0LL;
  v4 = (const wchar_t **)&unk_1404256C8;
  for ( i = 0; i < 0x1C; ++i )
  {
    if ( (a3 & (_DWORD)v4[1]) == a3
      && (Str1 ? wcsnicmp(Str1, *(v4 - 1), *(unsigned int *)v4) == 0 : a2 == *((_DWORD *)v4 + 1)) )
    {
      break;
    }
    v4 += 3;
  }
  if ( i < 0x1C )
    return &(&off_1404256C0)[3 * i];
  return (wchar_t **)v3;
}
