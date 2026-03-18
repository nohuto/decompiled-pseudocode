/*
 * XREFs of ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023C57C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C012E358 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C023C524 (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C0259FC4 (_GetMenuDefaultItem.c)
 */

_QWORD *__fastcall SetupFakeMDIAppStuff(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct tagWND *FakeMDIChild; // rax
  _QWORD *v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v4 = a2[2];
  v12 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v11, v4);
  if ( (v12 || *v11[0]) && *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
  {
    v7 = *(_QWORD *)(**(_QWORD **)a1 + 80LL);
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 21LL) & 2) == 0 )
    {
      v8 = v12;
      if ( !v12 )
        v8 = *v11[0];
      if ( (unsigned int)GetMenuDefaultItem(v8, 1LL, 1LL) == -1 )
        _SetCloseDefault(v11);
    }
    FakeMDIChild = FindFakeMDIChild((struct tagWND *)v7);
    if ( FakeMDIChild )
      *(_QWORD *)(*a2 + 56LL) = *(_QWORD *)FakeMDIChild;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v5, v6);
}
