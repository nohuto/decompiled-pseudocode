/*
 * XREFs of xxxSetDialogSystemMenu @ 0x1C0132A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C010AFAC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0132AC4 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxSetDialogSystemMenu(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 SysDesktopMenu; // rax
  _QWORD *v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v9, *(_QWORD *)(v2 + 64));
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v9) )
  {
    SysDesktopMenu = xxxLoadSysDesktopMenu(*(_QWORD *)(a1 + 24) + 64LL, 48LL);
    v10 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v9, SysDesktopMenu);
  }
  LockWndMenuWorker(a1, 1u, v9);
  LOBYTE(v3) = !SmartObjStackRef<tagMENU>::operator==((__int64)v9);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v4, v5, v6);
  return v3;
}
