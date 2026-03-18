/*
 * XREFs of xxxGetSysMenu @ 0x1C00A60E8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0069EDC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00ABF90 (xxxGetMenuBarInfo.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BC7F0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01F9934 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C0020FE8 (xxxGetSysMenuPtr.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxSetSysMenu @ 0x1C00A6430 (xxxSetSysMenu.c)
 *     _GetSubMenu @ 0x1C00A6A3C (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxGetSysMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v8, 0LL);
  v9 = 0LL;
  xxxSetSysMenu(a1);
  xxxGetSysMenuPtr(a1, v4);
  v9 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v8);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v8) && a2 )
  {
    GetSubMenu();
    v9 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v8);
  }
  v6 = v9;
  if ( !v9 )
    v6 = *(_QWORD *)v8[0];
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v5);
  return v6;
}
