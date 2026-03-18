/*
 * XREFs of ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01FBC8C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00C28A0 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01FBC34 (-FindFakeMDIChild@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C022B9A8 (_GetMenuDefaultItem.c)
 */

_QWORD *__fastcall SetupFakeMDIAppStuff(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct tagWND *FakeMDIChild; // rax
  _QWORD *v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v10, 0LL);
  v4 = a2[2];
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v10, v4);
  if ( (v11 || *v10[0]) && *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
  {
    v6 = *(_QWORD *)(**(_QWORD **)a1 + 80LL);
    if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 21LL) & 2) == 0 )
    {
      v7 = v11;
      if ( !v11 )
        v7 = *v10[0];
      if ( (unsigned int)GetMenuDefaultItem(v7, 1LL, 1LL) == -1 )
        _SetCloseDefault(v10);
    }
    FakeMDIChild = FindFakeMDIChild((struct tagWND *)v6);
    if ( FakeMDIChild )
      *(_QWORD *)(*a2 + 56LL) = *(_QWORD *)FakeMDIChild;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v5);
}
