/*
 * XREFs of xxxGetSysMenu @ 0x1C0128BFC
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000BC54 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0023C6C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxGetMenuBarInfo @ 0x1C012D47C (xxxGetMenuBarInfo.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C02100BC (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxGetSysMenuPtr @ 0x1C004A6F8 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxSetSysMenu @ 0x1C012C660 (xxxSetSysMenu.c)
 *     _GetSubMenu @ 0x1C012E4C0 (_GetSubMenu.c)
 */

__int64 __fastcall xxxGetSysMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 SysMenuPtr; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 SubMenu; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v12, 0LL);
  v13 = 0LL;
  xxxSetSysMenu(a1);
  SysMenuPtr = xxxGetSysMenuPtr(a1, v4, v5);
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v12, SysMenuPtr);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v12) && a2 )
  {
    SubMenu = GetSubMenu();
    v13 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v12, SubMenu);
  }
  v9 = v13;
  if ( !v13 )
    v9 = *(_QWORD *)v12[0];
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v7, v8);
  return v9;
}
