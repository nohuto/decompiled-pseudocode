/*
 * XREFs of UnlockPopupMenu @ 0x1C0222AF8
 * Callers:
 *     MNFreePopup @ 0x1C02104E4 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C0221870 (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  if ( !v3 )
    return 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v7, v3);
  v7[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v7);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7, v5, v6);
  return HMAssignmentUnlock(a2);
}
