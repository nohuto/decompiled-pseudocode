/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02417CC
 * Callers:
 *     xxxDoScrollMenu @ 0x1C0242160 (xxxDoScrollMenu.c)
 * Callees:
 *     _GetSubMenu @ 0x1C000C820 (_GetSubMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxClientLoadMenu @ 0x1C00B5E80 (xxxClientLoadMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00E2FE4 (RtlInitUnicodeStringOrId.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C0132B94 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 SubMenu; // rdi
  __int64 *v6; // rbx
  unsigned __int8 *Menu; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v14[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v14, 0LL);
  v4 = *((_QWORD *)a1 + 3);
  SubMenu = 0LL;
  v15 = 0LL;
  v6 = (__int64 *)(v4 + 80);
  if ( !a2 )
    v6 = (__int64 *)(v4 + 72);
  SmartObjStackRefBase<tagMENU>::operator=(v14, *v6);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v14) && (*(_DWORD *)(gptiCurrent + 480LL) & 5) == 0 )
  {
    *(_QWORD *)&v13.Length = 0LL;
    v13.Buffer = 0LL;
    RtlInitUnicodeStringOrId(&v13, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, (char **)&v13);
    v15 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v14, (__int64)Menu);
    LockDesktopMenu((__int64)v6, v14);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v14) )
  {
    v11 = v15;
    if ( !v15 )
      v11 = *v14[0];
    SubMenu = GetSubMenu(v11);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v8, v9, v10);
  return (struct tagMENU *)SubMenu;
}
