/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C012C204
 * Callers:
 *     xxxLoadSysMenu @ 0x1C0128D10 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0129140 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00289DC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C012CEC0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MakeMenuRtoL @ 0x1C02461C0 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 **a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned __int16 *a5)
{
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r8
  unsigned int v22; // ebx
  __int64 *v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v25[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  __int64 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  __int64 v29; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+90h] [rbp+20h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
  v26 = 0LL;
  v9 = (__int64)a1[2];
  v24 = *v25[0];
  if ( !v9 )
    v9 = **a1;
  v10 = MNLookUpItem(v9, a2, a3, &v24);
  v26 = 0LL;
  v11 = v10;
  SmartObjStackRefBase<tagMENU>::operator=(v25, v24);
  if ( !v11 )
  {
    if ( !a3 && a2 == 61744 )
    {
      v19 = 1;
    }
    else
    {
      UserSetLastError(1456LL, v12, v13, v14);
      v19 = 0;
    }
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 )
    {
      v22 = 1;
    }
    else
    {
      v22 = 0;
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x20) == 0 )
        goto LABEL_5;
    }
    v23 = a1[2];
    if ( !v23 )
      v23 = (__int64 *)**a1;
    MakeMenuRtoL(v23, v22);
  }
LABEL_5:
  v15 = v26;
  if ( !v26 )
    v15 = *v25[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
  v27 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v27;
  v28 = v15;
  if ( v15 )
    HMLockObject(v15);
  v30 = 0;
  v19 = SetLPITEMInfoNoRedraw(v25, v11, a4, a5, &v30);
  if ( v30 )
    xxxRedrawForSetLPITEMInfo(v25, v11);
  ThreadUnlock1(v18, v17, v20);
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v12, v13);
  return v19;
}
