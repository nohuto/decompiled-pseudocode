/*
 * XREFs of ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C0104718
 * Callers:
 *     CheckImeHotKey @ 0x1C01044A0 (CheckImeHotKey.c)
 * Callees:
 *     GetActiveHKL @ 0x1C01047C4 (GetActiveHKL.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C0118688 (-GetHotKeyLangID@@YAGK@Z.c)
 *     ?GetLangIdMatchLevel@@YAHPEAUHKL__@@G@Z @ 0x1C01F5558 (-GetLangIdMatchLevel@@YAHPEAUHKL__@@G@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByKey(struct _tagIMEHOTKEYOBJ *a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdi
  HKL ActiveHKL; // r12
  int v10; // esi
  int v12; // ecx
  int v13; // edx
  unsigned __int16 HotKeyLangID; // ax
  int LangIdMatchLevel; // eax

  v4 = gpImeHotKeyListHeader;
  v8 = 0LL;
  ActiveHKL = (HKL)GetActiveHKL(a1);
  v10 = 0;
  while ( 1 )
  {
    if ( !v4 )
      return (struct _tagIMEHOTKEYOBJ *)v8;
    if ( *(_DWORD *)(v4 + 12) == a4 )
    {
      v12 = *(_DWORD *)(v4 + 16);
      v13 = 0;
      if ( (v12 & 0x400) != 0 )
      {
        v13 = 1;
      }
      else if ( (*(_DWORD *)(v4 + 16) & 0xF) != a2 )
      {
        goto LABEL_4;
      }
      if ( (*(_DWORD *)(v4 + 16) & 0xC000) == a3 || ((unsigned __int16)a3 & (unsigned __int16)v12 & 0xC000) != 0 )
        v13 = 1;
      if ( v13 )
        break;
    }
LABEL_4:
    v4 = *(_QWORD *)v4;
  }
  HotKeyLangID = GetHotKeyLangID(*(_DWORD *)(v4 + 8));
  LangIdMatchLevel = GetLangIdMatchLevel(ActiveHKL, HotKeyLangID);
  if ( LangIdMatchLevel != 3 )
  {
    if ( ((unsigned __int16)ActiveHKL & 0x3FF) != 0x12 && LangIdMatchLevel && LangIdMatchLevel > v10 )
    {
      v10 = LangIdMatchLevel;
      v8 = v4;
    }
    goto LABEL_4;
  }
  return (struct _tagIMEHOTKEYOBJ *)v4;
}
