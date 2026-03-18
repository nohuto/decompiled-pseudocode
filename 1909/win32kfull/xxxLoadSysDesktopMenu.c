/*
 * XREFs of xxxLoadSysDesktopMenu @ 0x1C010D5C4
 * Callers:
 *     xxxGetSysMenuPtr @ 0x1C004A6F8 (xxxGetSysMenuPtr.c)
 *     xxxTranslateAccelerator @ 0x1C00EB884 (xxxTranslateAccelerator.c)
 *     xxxSetDialogSystemMenu @ 0x1C010D520 (xxxSetDialogSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C010D694 (LockDesktopMenu.c)
 *     xxxLoadSysMenu @ 0x1C0128D10 (xxxLoadSysMenu.c)
 */

__int64 __fastcall xxxLoadSysDesktopMenu(__int64 *a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 SysMenu; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  v4 = 0LL;
  v12 = 0LL;
  SysMenu = xxxLoadSysMenu(a2);
  v12 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v11, SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v11) )
  {
    if ( *a1 )
    {
      v9 = v12;
      if ( !v12 )
        v9 = *(_QWORD *)v11[0];
      DestroyMenu(v9);
      v4 = *a1;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 40LL) |= 0x80u;
      if ( !(unsigned int)LockDesktopMenu(a1, v11) )
      {
        v10 = v12;
        if ( !v12 )
          v10 = *(_QWORD *)v11[0];
        DestroyMenu(v10);
        v12 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v11, 0LL);
      }
      if ( v12 )
        v4 = v12;
      else
        v4 = *(_QWORD *)v11[0];
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v6, v7);
  return v4;
}
