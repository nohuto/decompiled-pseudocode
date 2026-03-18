/*
 * XREFs of LockPopupMenu @ 0x1C02226BC
 * Callers:
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C0221870 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-60h]
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v14, *a2);
  v14[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v14);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v6, v7);
  if ( !SmartObjStackRef<tagMENU>::operator==(a3) )
  {
    *(_QWORD *)&v10 = **(_QWORD **)a3 + 80LL;
    *((_QWORD *)&v10 + 1) = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    v12 = v10;
    HMAssignmentLock(&v12);
  }
  v8 = *(_QWORD *)(a3 + 16);
  if ( !v8 )
    v8 = **(_QWORD **)a3;
  *((_QWORD *)&v11 + 1) = v8;
  *(_QWORD *)&v11 = a2;
  v13 = v11;
  return HMAssignmentLock(&v13);
}
