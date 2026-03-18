/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C006B998
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0021080 (NtUserThunkedMenuItemInfo.c)
 *     xxxLoadSysMenu @ 0x1C006B790 (xxxLoadSysMenu.c)
 * Callees:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002133C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00217EC (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     MakeMenuRtoL @ 0x1C0205058 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 **a1, unsigned int a2, int a3, __int64 a4, unsigned __int16 *a5)
{
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  _BOOL8 v12; // rdx
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // r8
  __int64 *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v22[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  _QWORD v24[4]; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+90h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v23 = 0LL;
  v9 = (__int64)a1[2];
  v21 = *v22[0];
  if ( !v9 )
    v9 = **a1;
  v10 = MNLookUpItem(v9, a2, a3, &v21);
  v23 = 0LL;
  v11 = v10;
  SmartObjStackRefBase<tagMENU>::operator=(v22, v21);
  if ( v11 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
    {
      v12 = (*(_DWORD *)(a4 + 8) & 0x2000) != 0;
      if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 || (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x20) != 0 )
      {
        v20 = a1[2];
        if ( !v20 )
          v20 = (__int64 *)**a1;
        MakeMenuRtoL(v20, v12);
      }
    }
    v13 = v23;
    if ( !v23 )
      v13 = *v22[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
    v24[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v24;
    v24[1] = v13;
    if ( v13 )
      _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    v25 = 0;
    v17 = SetLPITEMInfoNoRedraw(v22, v11, a4, a5, &v25);
    if ( v25 )
      xxxRedrawForSetLPITEMInfo(v22, (__int64)v11);
    ThreadUnlock1(v16, v15, v18);
  }
  else if ( !a3 && a2 == 61744 )
  {
    v17 = 1;
  }
  else
  {
    UserSetLastError(1456LL, v12);
    v17 = 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v12);
  return v17;
}
