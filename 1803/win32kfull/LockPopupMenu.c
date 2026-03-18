/*
 * XREFs of LockPopupMenu @ 0x1C01E51B4
 * Callers:
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C01E442C (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-60h]
  __int128 v10; // [rsp+30h] [rbp-50h]
  __int128 v11; // [rsp+40h] [rbp-40h] BYREF
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v13, *a2);
  v13[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v13);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v6);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    *(_QWORD *)&v9 = **(_QWORD **)a3 + 80LL;
    *((_QWORD *)&v9 + 1) = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    v11 = v9;
    HMAssignmentLock(&v11);
  }
  v7 = *(_QWORD *)(a3 + 16);
  if ( !v7 )
    v7 = **(_QWORD **)a3;
  *((_QWORD *)&v10 + 1) = v7;
  *(_QWORD *)&v10 = a2;
  v12 = v10;
  return HMAssignmentLock(&v12);
}
