/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C01085F8
 * Callers:
 *     xxxGetSysMenuPtr @ 0x1C0039F88 (xxxGetSysMenuPtr.c)
 *     xxxTranslateAccelerator @ 0x1C00EC6AC (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C0108550 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _DestroyMenu @ 0x1C00507F0 (_DestroyMenu.c)
 *     xxxLoadSysMenu @ 0x1C006B790 (xxxLoadSysMenu.c)
 *     LockDesktopMenu @ 0x1C01086B0 (LockDesktopMenu.c)
 */

__int64 __fastcall xxxLoadSysDesktopMenu(__int64 *a1, int a2)
{
  __int64 v4; // rdi
  __int64 SysMenu; // rax
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v10, 0LL);
  v4 = 0LL;
  v11 = 0LL;
  SysMenu = xxxLoadSysMenu(a2);
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v10, SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v10) )
  {
    if ( *a1 )
    {
      v8 = v11;
      if ( !v11 )
        v8 = *(_QWORD *)v10[0];
      DestroyMenu(v8);
      v4 = *a1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 40LL) + 40LL) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, v10) )
      {
        v9 = v11;
        if ( !v11 )
          v9 = *(_QWORD *)v10[0];
        DestroyMenu(v9);
        v11 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v10, 0LL);
      }
      if ( v11 )
        v4 = v11;
      else
        v4 = *(_QWORD *)v10[0];
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v6);
  return v4;
}
