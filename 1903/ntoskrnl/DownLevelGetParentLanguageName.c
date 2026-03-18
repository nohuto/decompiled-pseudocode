/*
 * XREFs of DownLevelGetParentLanguageName @ 0x1403430E8
 * Callers:
 *     LdrpGetParentLangId @ 0x14016A38C (LdrpGetParentLangId.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14017FA7C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x1401A04A0 (bsearch.c)
 */

__int64 __fastcall DownLevelGetParentLanguageName(const void *a1, char *a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rbx
  char *v5; // r8

  if ( !a1 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = bsearch(a1, &off_140370EC0, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  v5 = (char *)(&off_140371C60)[2 * dword_140371C6C[4 * word_140389070[(v3 - (_BYTE *)&off_140370EC0) >> 3]]];
  do
    ++v4;
  while ( *(_WORD *)&v5[2 * v4] );
  if ( (int)StringCchCopyNW(a2, 85LL, v5, v4 + 1) >= 0 )
    return (unsigned int)(v4 + 1);
  else
    return 0LL;
}
