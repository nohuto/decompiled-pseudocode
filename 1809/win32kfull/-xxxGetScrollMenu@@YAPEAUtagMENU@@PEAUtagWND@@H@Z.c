/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0228D28
 * Callers:
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00A60B8 (RtlInitUnicodeStringOrId.c)
 *     _GetSubMenu @ 0x1C00A6A3C (_GetSubMenu.c)
 *     xxxClientLoadMenu @ 0x1C00B3DE8 (xxxClientLoadMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C01284C8 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 SubMenu; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rdx
  unsigned __int8 *Menu; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v13[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v13, 0LL);
  v4 = *((_QWORD *)a1 + 3);
  SubMenu = 0LL;
  v14 = 0LL;
  v6 = (__int64 *)(v4 + 80);
  if ( !a2 )
    v6 = (__int64 *)(v4 + 72);
  v7 = *v6;
  v14 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v13, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v13) && (*(_DWORD *)(gptiCurrent + 488LL) & 5) == 0 )
  {
    RtlInitUnicodeStringOrId(&v12, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, &v12.Length);
    v14 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v13, (__int64)Menu);
    LockDesktopMenu((__int64)v6, v13);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v13) )
  {
    v10 = v14;
    if ( !v14 )
      v10 = *v13[0];
    SubMenu = GetSubMenu(v10);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v9);
  return (struct tagMENU *)SubMenu;
}
