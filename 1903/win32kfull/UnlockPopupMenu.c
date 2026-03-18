/*
 * XREFs of UnlockPopupMenu @ 0x1C0223038
 * Callers:
 *     MNFreePopup @ 0x1C0210A24 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C0221DB0 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  if ( !v3 )
    return 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v8, v3);
  v8[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v8);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v5, v6, v7);
  return HMAssignmentUnlock(a2);
}
