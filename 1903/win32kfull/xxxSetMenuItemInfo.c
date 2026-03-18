/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C001D574
 * Callers:
 *     xxxLoadSysMenu @ 0x1C001B578 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C001B7C0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0020A88 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     MakeMenuRtoL @ 0x1C0246900 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(_QWORD **a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned int v19; // ebx
  _QWORD *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+90h] [rbp+20h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v23 = 0LL;
  v9 = a1[2];
  v21 = *(_QWORD *)v22[0];
  if ( !v9 )
    v9 = (_QWORD *)**a1;
  v10 = MNLookUpItem(v9, a2, a3, &v21);
  v23 = 0LL;
  v11 = v10;
  SmartObjStackRefBase<tagMENU>::operator=(v22, v21);
  if ( !v11 )
  {
    if ( !a3 && a2 == 61744 )
    {
      v16 = 1;
    }
    else
    {
      UserSetLastError(1456LL);
      v16 = 0;
    }
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0 )
    {
      v19 = 1;
    }
    else
    {
      v19 = 0;
      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) & 0x20) == 0 )
        goto LABEL_5;
    }
    v20 = a1[2];
    if ( !v20 )
      v20 = (_QWORD *)**a1;
    MakeMenuRtoL(v20, v19);
  }
LABEL_5:
  v12 = v23;
  if ( !v23 )
    v12 = *(_QWORD *)v22[0];
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v24 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
  v25 = v12;
  if ( v12 )
    HMLockObject(v12);
  v27 = 0;
  v16 = SetLPITEMInfoNoRedraw((unsigned int)v22, v11, a4, a5, (__int64)&v27);
  if ( v27 )
    xxxRedrawForSetLPITEMInfo(v22, v11);
  ThreadUnlock1(v15, v14, v17);
LABEL_12:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22);
  return v16;
}
