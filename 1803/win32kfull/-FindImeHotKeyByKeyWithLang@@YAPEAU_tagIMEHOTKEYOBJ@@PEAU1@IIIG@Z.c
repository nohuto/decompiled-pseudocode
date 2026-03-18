/*
 * XREFs of ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C00F9E60
 * Callers:
 *     SetImeHotKey @ 0x1C00F9D1C (SetImeHotKey.c)
 * Callees:
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C00F9EF0 (-GetHotKeyLangID@@YAGK@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByKeyWithLang(
        struct _tagIMEHOTKEYOBJ *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 a5)
{
  __int64 v5; // r10
  int v6; // r11d
  int v9; // ecx
  BOOL v10; // edx
  unsigned __int16 HotKeyLangID; // ax

  v5 = gpImeHotKeyListHeader;
  v6 = a3;
  while ( 1 )
  {
    if ( !v5 )
      return 0LL;
    if ( *(_DWORD *)(v5 + 12) == a4 )
    {
      v9 = *(_DWORD *)(v5 + 16);
      if ( (v9 & 0x400) != 0 || (v9 & 0xF) == a2 )
      {
        v10 = (*(_DWORD *)(v5 + 16) & 0x400) != 0;
        if ( (v9 & 0xC000) == v6 || ((unsigned __int16)v6 & (unsigned __int16)v9 & 0xC000) != 0 )
          v10 = 1;
        if ( v10 )
        {
          HotKeyLangID = GetHotKeyLangID(*(_DWORD *)(v5 + 8));
          if ( a5 == HotKeyLangID || !HotKeyLangID )
            break;
        }
      }
    }
    v5 = *(_QWORD *)v5;
  }
  return (struct _tagIMEHOTKEYOBJ *)v5;
}
