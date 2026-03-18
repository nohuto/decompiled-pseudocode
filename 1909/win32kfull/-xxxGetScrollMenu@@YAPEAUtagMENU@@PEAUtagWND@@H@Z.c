/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02411AC
 * Callers:
 *     xxxDoScrollMenu @ 0x1C0241B40 (xxxDoScrollMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxClientLoadMenu @ 0x1C0056C30 (xxxClientLoadMenu.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockDesktopMenu @ 0x1C010D694 (LockDesktopMenu.c)
 *     _GetSubMenu @ 0x1C012E4C0 (_GetSubMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C013C7AC (RtlInitUnicodeStringOrId.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 SubMenu; // rdi
  __int64 *v6; // rbx
  unsigned __int8 *Menu; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
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
  SmartObjStackRefBase<tagMENU>::operator=(v13, *v6);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v13) && (*(_DWORD *)(gptiCurrent + 480LL) & 5) == 0 )
  {
    *(_QWORD *)&v12.Length = 0LL;
    v12.Buffer = 0LL;
    RtlInitUnicodeStringOrId(&v12, (WCHAR *)(a2 != 0 ? 80LL : 64LL));
    Menu = xxxClientLoadMenu(0LL, (char **)&v12);
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
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v8, v9);
  return (struct tagMENU *)SubMenu;
}
