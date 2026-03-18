/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C00A5F5C
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C006A1B0 (NtUserThunkedMenuItemInfo.c)
 *     xxxLoadSysMenu @ 0x1C00A5D4C (xxxLoadSysMenu.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006A6D4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006AA5C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MakeMenuRtoL @ 0x1C022E148 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 **a1, unsigned int a2, int a3, __int64 a4, unsigned __int16 *a5)
{
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  _BOOL8 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 *v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v23[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h]
  _QWORD v25[4]; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+90h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
  v24 = 0LL;
  v9 = (__int64)a1[2];
  v22 = *v23[0];
  if ( !v9 )
    v9 = **a1;
  v10 = MNLookUpItem(v9, a2, a3, &v22);
  v24 = 0LL;
  v11 = v10;
  SmartObjStackRefBase<tagMENU>::operator=(v23);
  if ( v11 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
    {
      v12 = (*(_DWORD *)(a4 + 8) & 0x2000) != 0;
      if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 || (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x20) != 0 )
      {
        v21 = a1[2];
        if ( !v21 )
          v21 = (__int64 *)**a1;
        MakeMenuRtoL(v21, v12);
      }
    }
    v15 = v24;
    if ( !v24 )
      v15 = *v23[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
    v25[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v25;
    v25[1] = v15;
    if ( v15 )
      _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
    v26 = 0;
    v19 = SetLPITEMInfoNoRedraw(v23, v11, a4, a5, &v26);
    if ( v26 )
      xxxRedrawForSetLPITEMInfo(v23, (__int64)v11);
    ThreadUnlock1(v18, v17);
  }
  else if ( !a3 && a2 == 61744 )
  {
    v19 = 1;
  }
  else
  {
    UserSetLastError(1456LL, v12, v13, v14);
    v19 = 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v12);
  return v19;
}
