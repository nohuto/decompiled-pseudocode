/*
 * XREFs of xxxLoadSysMenu @ 0x1C00A5D4C
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00A625C (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C01283F8 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetMenuItemInfo @ 0x1C00A5F5C (xxxSetMenuItemInfo.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00A60B8 (RtlInitUnicodeStringOrId.c)
 *     xxxSetMenuInfo @ 0x1C00AAED0 (xxxSetMenuInfo.c)
 *     xxxClientLoadMenu @ 0x1C00B3DE8 (xxxClientLoadMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxLoadSysMenu(int a1)
{
  __int64 v2; // rdx
  __int64 Menu; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD v13[3]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v15[3]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v16[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v17[3]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v18[16]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v20[18]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v21; // [rsp+118h] [rbp+18h]
  _DWORD v22[12]; // [rsp+120h] [rbp+20h] BYREF

  RtlInitUnicodeStringOrId(v18, (unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, v18);
  if ( !Menu )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
  v19[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v19;
  v19[1] = Menu;
  _InterlockedIncrement((volatile signed __int32 *)(Menu + 8));
  v22[0] = 40;
  v22[1] = -2147483632;
  v22[2] = 0x4000000;
  SmartObjStackRefBase<tagMENU>::Init(v13, Menu);
  v13[2] = 0LL;
  xxxSetMenuInfo(v13, v22);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v5);
  v20[0] = 80;
  v20[1] = 128;
  v21 = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v14, Menu);
  v14[2] = 0LL;
  xxxSetMenuItemInfo((unsigned int)v14, 61536, 0, (unsigned int)v20, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v6);
  if ( a1 != 48 )
  {
    v21 = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v15, Menu);
    v15[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v15, 61472, 0, (unsigned int)v20, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v9);
    v21 = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v16, Menu);
    v16[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v16, 61488, 0, (unsigned int)v20, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v10);
    v21 = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v17, Menu);
    v17[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v17, 61728, 0, (unsigned int)v20, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v11);
  }
  if ( ThreadUnlock1(v8, v7)
    && (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)Menu
                 + *((_QWORD *)&gSharedInfo + 1)
                 + 25LL) & 1) == 0 )
  {
    return Menu;
  }
  else
  {
    return 0LL;
  }
}
