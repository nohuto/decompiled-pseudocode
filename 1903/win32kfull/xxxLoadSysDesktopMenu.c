/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C0132AC4
 * Callers:
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 *     xxxTranslateAccelerator @ 0x1C0110944 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C0132A20 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x1C001B578 (xxxLoadSysMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C0022400 (_DestroyMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C0132B94 (LockDesktopMenu.c)
 */

__int64 __fastcall xxxLoadSysDesktopMenu(__int64 *a1, int a2)
{
  __int64 v4; // rdi
  __int64 SysMenu; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v12, 0LL);
  v4 = 0LL;
  v13 = 0LL;
  SysMenu = xxxLoadSysMenu(a2);
  v13 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v12, SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v12) )
  {
    if ( *a1 )
    {
      v10 = v13;
      if ( !v13 )
        v10 = *(_QWORD *)v12[0];
      DestroyMenu(v10);
      v4 = *a1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 40LL) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, v12) )
      {
        v11 = v13;
        if ( !v13 )
          v11 = *(_QWORD *)v12[0];
        DestroyMenu(v11);
        v13 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v12, 0LL);
      }
      if ( v13 )
        v4 = v13;
      else
        v4 = *(_QWORD *)v12[0];
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v6, v7, v8);
  return v4;
}
