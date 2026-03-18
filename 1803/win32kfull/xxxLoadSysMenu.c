/*
 * XREFs of xxxLoadSysMenu @ 0x1C006B790
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00C2104 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C01085F8 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0013668 (xxxSetMenuInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     RtlInitUnicodeStringOrId @ 0x1C006B768 (RtlInitUnicodeStringOrId.c)
 *     xxxSetMenuItemInfo @ 0x1C006B998 (xxxSetMenuItemInfo.c)
 *     xxxClientLoadMenu @ 0x1C006C1CC (xxxClientLoadMenu.c)
 */

__int64 __fastcall xxxLoadSysMenu(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v14[3]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[3]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v18[3]; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING v19; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v20[3]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v21[18]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+118h] [rbp+18h]
  _DWORD v23[12]; // [rsp+120h] [rbp+20h] BYREF

  RtlInitUnicodeStringOrId(&v19, (WCHAR *)(unsigned __int16)a1);
  v3 = xxxClientLoadMenu(0LL, &v19);
  if ( !v3 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
  v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v20;
  v20[1] = v3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v23[0] = 40;
  v23[1] = -2147483632;
  v23[2] = 0x4000000;
  SmartObjStackRefBase<tagMENU>::Init(v14, v3);
  v14[2] = 0LL;
  xxxSetMenuInfo(v14, (__int64)v23);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v5);
  v21[0] = 80;
  v21[1] = 128;
  v22 = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v15, v3);
  v15[2] = 0LL;
  xxxSetMenuItemInfo((unsigned int)v15, 61536, 0, (unsigned int)v21, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v6);
  if ( a1 != 48 )
  {
    v22 = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v16, v3);
    v16[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v16, 61472, 0, (unsigned int)v21, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v10);
    v22 = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v17, v3);
    v17[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v17, 61488, 0, (unsigned int)v21, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v11);
    v22 = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v18, v3);
    v18[2] = 0LL;
    xxxSetMenuItemInfo((unsigned int)v18, 61728, 0, (unsigned int)v21, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18, v12);
  }
  if ( ThreadUnlock1(v8, v7, v9)
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v3 + gSharedInfo[1] + 25LL) & 1) == 0 )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}
