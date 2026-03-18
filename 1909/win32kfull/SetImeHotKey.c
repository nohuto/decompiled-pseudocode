/*
 * XREFs of SetImeHotKey @ 0x1C00FB158
 * Callers:
 *     NtUserSetImeHotKey @ 0x1C00FB0E0 (NtUserSetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C00FB288 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C00FB2A8 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C00FB328 (-GetHotKeyLangID@@YAGK@Z.c)
 */

__int64 __fastcall SetImeHotKey(struct _tagIMEHOTKEYOBJ *a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v8; // ebx
  unsigned __int16 HotKeyLangID; // ax
  unsigned __int16 v10; // dx
  struct _tagIMEHOTKEYOBJ *v11; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rax
  __int64 *v13; // rdx
  struct _tagIMEHOTKEYOBJ *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // r8
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  __int64 *ImeHotKeyByID; // rax
  __int64 *v25; // rcx
  __int64 *v26; // rax

  v8 = (unsigned int)a1;
  switch ( a5 )
  {
    case 1:
      ImeHotKeyByID = (__int64 *)FindImeHotKeyByID(a1, (unsigned int)a1);
      v13 = ImeHotKeyByID;
      if ( !ImeHotKeyByID )
      {
        v23 = 87LL;
        goto LABEL_33;
      }
      v25 = (__int64 *)gpImeHotKeyListHeader;
      if ( ImeHotKeyByID == (__int64 *)gpImeHotKeyListHeader )
      {
        gpImeHotKeyListHeader = *ImeHotKeyByID;
      }
      else
      {
        if ( !gpImeHotKeyListHeader )
          return 0LL;
        while ( 1 )
        {
          v26 = (__int64 *)*v25;
          if ( (__int64 *)*v25 == v13 )
            break;
          v25 = (__int64 *)*v25;
          if ( !v26 )
            return 0LL;
        }
        *v25 = *v13;
      }
      Win32FreePool(v13);
      return 1LL;
    case 2:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID((unsigned int)a1);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(v11, v10 & 0xF, v10 & 0xC000, a3, HotKeyLangID);
        if ( !ImeHotKeyByKeyWithLang )
        {
          ImeHotKeyByKeyWithLang = FindImeHotKeyByID(v14, v8);
LABEL_6:
          if ( !ImeHotKeyByKeyWithLang )
          {
            v17 = Win32AllocPool(32LL, 1751741269LL);
            if ( v17 )
            {
              *(_QWORD *)v17 = 0LL;
              *(_DWORD *)(v17 + 8) = v8;
              *(_DWORD *)(v17 + 16) = a2;
              *(_DWORD *)(v17 + 12) = a3;
              *(_QWORD *)(v17 + 24) = a4;
              v18 = (__int64 *)gpImeHotKeyListHeader;
              if ( gpImeHotKeyListHeader )
              {
                v19 = *(__int64 **)gpImeHotKeyListHeader;
                if ( *(_QWORD *)gpImeHotKeyListHeader )
                {
                  do
                  {
                    v18 = v19;
                    v19 = (__int64 *)*v19;
                  }
                  while ( v19 );
                }
                *v18 = v17;
              }
              else
              {
                gpImeHotKeyListHeader = v17;
              }
              return 1LL;
            }
            v23 = 14LL;
            goto LABEL_33;
          }
          *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = a2;
          *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = a3;
          *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
          return 1LL;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == v8 )
          goto LABEL_6;
        v23 = 1409LL;
LABEL_33:
        UserSetLastError(v23, (__int64)v13, v15, v16);
      }
      break;
    case 3:
      v21 = (_QWORD *)gpImeHotKeyListHeader;
      if ( gpImeHotKeyListHeader )
      {
        do
        {
          v22 = (_QWORD *)*v21;
          Win32FreePool(v21);
          v21 = v22;
        }
        while ( v22 );
      }
      gpImeHotKeyListHeader = 0LL;
      return 1LL;
  }
  return 0LL;
}
