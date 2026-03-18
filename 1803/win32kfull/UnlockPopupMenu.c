/*
 * XREFs of UnlockPopupMenu @ 0x1C01E55D8
 * Callers:
 *     MNFreePopup @ 0x1C01D51B4 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C01E442C (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  if ( !v3 )
    return 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v6, v3);
  v6[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v6);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v6, v5);
  return HMAssignmentUnlock(a2);
}
