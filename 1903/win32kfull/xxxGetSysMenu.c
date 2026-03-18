/*
 * XREFs of xxxGetSysMenu @ 0x1C000C4CC
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000C370 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C002104C (xxxGetMenuBarInfo.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C002E54C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C02105FC (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 * Callees:
 *     _GetSubMenu @ 0x1C000C820 (_GetSubMenu.c)
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxGetSysMenu(struct tagWND *a1, int a2)
{
  __int64 SysMenuPtr; // rax
  __int64 v5; // rbx
  __int64 SubMenu; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v8, 0LL);
  v9 = 0LL;
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v9 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v8, SysMenuPtr);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v8) && a2 )
  {
    SubMenu = GetSubMenu();
    v9 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v8, SubMenu);
  }
  v5 = v9;
  if ( !v9 )
    v5 = *(_QWORD *)v8[0];
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8);
  return v5;
}
