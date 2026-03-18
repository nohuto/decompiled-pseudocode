/*
 * XREFs of FontAssocDefaultRoutine @ 0x1C027BB40
 * Callers:
 *     <none>
 * Callees:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FontAssocDefaultRoutine(wchar_t *Str1, __int64 a2, char *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r14

  if ( _wcsicmp(Str1, L"AssocSystemFont") )
  {
    if ( _wcsicmp(Str1, L"FontPackage") )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = 664LL * v5;
        if ( !_wcsicmp(Str1, (const wchar_t *)((char *)&FontAssocDefaultTable + v6 + 8)) )
          break;
        if ( ++v5 >= 7 )
          return 0LL;
      }
      if ( *(_WORD *)a3 && (int)StringCchCopyW((char *)&FontAssocDefaultTable + v6 + 58, 33LL, a3) >= 0 )
        *((_DWORD *)&FontAssocDefaultTable + 166 * v5) = 1;
    }
    else
    {
      cCapString(word_1C0317310, (WCHAR *)a3, 32);
    }
  }
  else
  {
    bAppendSysDirectory(&gawcSystemDBCSFontPath, (const unsigned __int16 *)a3);
  }
  return 0LL;
}
