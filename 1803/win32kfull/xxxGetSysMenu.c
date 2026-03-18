/*
 * XREFs of xxxGetSysMenu @ 0x1C00C2390
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000AF90 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxGetMenuBarInfo @ 0x1C00C36A8 (xxxGetMenuBarInfo.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01D4DC8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxGetSysMenuPtr @ 0x1C0039F88 (xxxGetSysMenuPtr.c)
 *     xxxSetSysMenu @ 0x1C00C2450 (xxxSetSysMenu.c)
 *     _GetSubMenu @ 0x1C00C28DC (_GetSubMenu.c)
 */

__int64 __fastcall xxxGetSysMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 SysMenuPtr; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 SubMenu; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v10, 0LL);
  v11 = 0LL;
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1, v4);
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v10, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v10) && a2 )
  {
    SubMenu = GetSubMenu();
    v11 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v10, SubMenu);
  }
  v7 = v11;
  if ( !v11 )
    v7 = *(_QWORD *)v10[0];
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v6);
  return v7;
}
