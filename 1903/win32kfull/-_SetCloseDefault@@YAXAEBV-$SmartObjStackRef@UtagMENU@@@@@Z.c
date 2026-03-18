/*
 * XREFs of ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C008F958
 * Callers:
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023CB9C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 * Callees:
 *     _SetMenuDefaultItem @ 0x1C008F994 (_SetMenuDefaultItem.c)
 */

__int64 __fastcall _SetCloseDefault(_QWORD **a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  v2 = a1[2];
  if ( !v2 )
    v2 = (_QWORD *)**a1;
  result = SetMenuDefaultItem(v2, 61536LL, 0LL);
  if ( !(_DWORD)result )
  {
    v4 = a1[2];
    if ( !v4 )
      v4 = (_QWORD *)**a1;
    result = SetMenuDefaultItem(v4, 32864LL, 0LL);
    if ( !(_DWORD)result )
    {
      v5 = a1[2];
      if ( !v5 )
        v5 = (_QWORD *)**a1;
      return SetMenuDefaultItem(v5, 49264LL, 0LL);
    }
  }
  return result;
}
