/*
 * XREFs of LockPopupMenu @ 0x1C020B0D8
 * Callers:
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C020A310 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v12, *a2);
  v12[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v12);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v6);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    v7 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    *(_QWORD *)&v10 = **(_QWORD **)a3 + 80LL;
    *((_QWORD *)&v10 + 1) = v7;
    HMAssignmentLock(&v10);
  }
  v8 = *(_QWORD *)(a3 + 16);
  if ( !v8 )
    v8 = **(_QWORD **)a3;
  *((_QWORD *)&v10 + 1) = v8;
  *(_QWORD *)&v10 = a2;
  v11 = v10;
  return HMAssignmentLock(&v11);
}
