/*
 * XREFs of xxxSetDialogSystemMenu @ 0x1C010D520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E554C (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C010D5C4 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 SysDesktopMenu; // rax
  _QWORD *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v8, 0LL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v9 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v8, *(_QWORD *)(v2 + 64));
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v8) )
  {
    SysDesktopMenu = xxxLoadSysDesktopMenu(*(_QWORD *)(a1 + 24) + 64LL, 48LL);
    v9 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v8, SysDesktopMenu);
  }
  LockWndMenuWorker(a1, 1u, v8);
  LOBYTE(v3) = !SmartObjStackRef<tagMENU>::operator==((__int64)v8);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v4, v5);
  return v3;
}
