/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02002F8
 * Callers:
 *     xxxDoScrollMenu @ 0x1C0200C74 (xxxDoScrollMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C006B768 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadMenu @ 0x1C006C1CC (xxxClientLoadMenu.c)
 *     _GetSubMenu @ 0x1C00C28DC (_GetSubMenu.c)
 *     LockDesktopMenu @ 0x1C01086B0 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 SubMenu; // rdi
  __int64 *v5; // rsi
  unsigned __int8 *Menu; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _UNICODE_STRING v10; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v11[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v11, 0LL);
  SubMenu = 0LL;
  v12 = 0LL;
  v5 = (__int64 *)(*((_QWORD *)a1 + 3) + (a2 != 0 ? 80LL : 72LL));
  SmartObjStackRefBase<tagMENU>::operator=(v11, *v5);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v11) && (*(_DWORD *)(gptiCurrent + 480LL) & 5) == 0 )
  {
    RtlInitUnicodeStringOrId(&v10, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, &v10.Length);
    v12 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v11, (__int64)Menu);
    LockDesktopMenu((__int64)v5, v11);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v11) )
  {
    v8 = v12;
    if ( !v12 )
      v8 = *v11[0];
    SubMenu = GetSubMenu(v8);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v7);
  return (struct tagMENU *)SubMenu;
}
