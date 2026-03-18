/*
 * XREFs of xxxLoadSysMenu @ 0x1C001B578
 * Callers:
 *     xxxGetSystemMenu @ 0x1C000C650 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0132AC4 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C001D574 (xxxSetMenuItemInfo.c)
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxClientLoadMenu @ 0x1C00B5E80 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00E2FE4 (RtlInitUnicodeStringOrId.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxLoadSysMenu(int a1)
{
  __int64 Menu; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h]
  _BYTE v12[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h]
  _BYTE v14[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+80h] [rbp-80h]
  _BYTE v16[16]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v17; // [rsp+98h] [rbp-68h]
  _BYTE v18[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-50h]
  _BYTE v20[16]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-38h]
  _QWORD v22[10]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v23[12]; // [rsp+120h] [rbp+20h] BYREF

  memset(v23, 0, 0x28uLL);
  memset(v22, 0, sizeof(v22));
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v8[0] = 0LL;
  v8[1] = 0LL;
  RtlInitUnicodeStringOrId(v8, (unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, v8);
  if ( !Menu )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v9 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v9;
  v10 = Menu;
  HMLockObject(Menu);
  v23[0] = 40;
  v23[1] = -2147483632;
  v23[2] = 0x4000000;
  SmartObjStackRefBase<tagMENU>::Init(v12, Menu);
  v13 = 0LL;
  xxxSetMenuInfo(v12, v23);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12);
  v22[0] = 0x8000000050LL;
  v22[9] = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v14, Menu);
  v15 = 0LL;
  xxxSetMenuItemInfo((unsigned int)v14, 61536, 0, (unsigned int)v22, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14);
  if ( a1 != 48 )
  {
    v22[9] = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v16, Menu);
    v17 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v16, 61472, 0, (unsigned int)v22, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
    v22[9] = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v18, Menu);
    v19 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v18, 61488, 0, (unsigned int)v22, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18);
    v22[9] = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v20, Menu);
    v21 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v20, 61728, 0, (unsigned int)v22, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
  }
  if ( ThreadUnlock1(v5, v4, v6) && (*(_BYTE *)(_HMPheFromObject(Menu) + 25) & 1) == 0 )
    return Menu;
  else
    return 0LL;
}
