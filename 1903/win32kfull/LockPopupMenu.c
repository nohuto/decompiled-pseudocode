/*
 * XREFs of LockPopupMenu @ 0x1C0222BFC
 * Callers:
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C0221DB0 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v15, *a2);
  v15[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v15);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v6, v7, v8);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    *(_QWORD *)&v11 = **(_QWORD **)a3 + 80LL;
    *((_QWORD *)&v11 + 1) = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    v13 = v11;
    HMAssignmentLock(&v13);
  }
  v9 = *(_QWORD *)(a3 + 16);
  if ( !v9 )
    v9 = **(_QWORD **)a3;
  *((_QWORD *)&v12 + 1) = v9;
  *(_QWORD *)&v12 = a2;
  v14 = v12;
  return HMAssignmentLock(&v14);
}
