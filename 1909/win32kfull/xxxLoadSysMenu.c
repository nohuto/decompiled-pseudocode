/*
 * XREFs of xxxLoadSysMenu @ 0x1C0128D10
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00FB780 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C010D5C4 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxClientLoadMenu @ 0x1C0056C30 (xxxClientLoadMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetMenuInfo @ 0x1C0129EA8 (xxxSetMenuInfo.c)
 *     xxxSetMenuItemInfo @ 0x1C012C204 (xxxSetMenuItemInfo.c)
 *     RtlInitUnicodeStringOrId @ 0x1C013C7AC (RtlInitUnicodeStringOrId.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

unsigned __int8 *__fastcall xxxLoadSysMenu(int a1)
{
  __int64 v2; // rdx
  unsigned __int8 *Menu; // rbx
  __int64 v4; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 *v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h]
  _QWORD v24[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v26[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v27[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v28[3]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v29[10]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v30[12]; // [rsp+120h] [rbp+20h] BYREF

  memset(v30, 0, 0x28uLL);
  memset(v29, 0, sizeof(v29));
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v20[0] = 0LL;
  v20[1] = 0LL;
  RtlInitUnicodeStringOrId(v20, (unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, v20);
  if ( !Menu )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v4);
  v21 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
  v22 = Menu;
  HMLockObject(Menu);
  v30[0] = 40;
  v30[1] = -2147483632;
  v30[2] = 0x4000000;
  SmartObjStackRefBase<tagMENU>::Init(v24, (__int64)Menu);
  v24[2] = 0LL;
  xxxSetMenuInfo(v24, v30);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v6, v7);
  v29[0] = 0x8000000050LL;
  v29[9] = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v25, (__int64)Menu);
  v25[2] = 0LL;
  xxxSetMenuItemInfo((unsigned int)v25, 61536, 0, (unsigned int)v29, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v8, v9);
  if ( a1 != 48 )
  {
    v29[9] = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v26, (__int64)Menu);
    v26[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v26, 61472, 0, (unsigned int)v29, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v26, v13, v14);
    v29[9] = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v27, (__int64)Menu);
    v27[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v27, 61488, 0, (unsigned int)v29, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v15, v16);
    v29[9] = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v28, (__int64)Menu);
    v28[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v28, 61728, 0, (unsigned int)v29, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v17, v18);
  }
  if ( ThreadUnlock1(v11, v10, v12) && (*(_BYTE *)(_HMPheFromObject(Menu) + 25) & 1) == 0 )
    return Menu;
  else
    return 0LL;
}
