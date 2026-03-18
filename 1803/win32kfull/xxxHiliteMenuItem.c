/*
 * XREFs of xxxHiliteMenuItem @ 0x1C020B944
 * Callers:
 *     NtUserHiliteMenuItem @ 0x1C01F0B00 (NtUserHiliteMenuItem.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C013088C (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0205270 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 */

__int64 __fastcall xxxHiliteMenuItem(_QWORD *a1, __int64 **a2, unsigned int a3, __int64 a4)
{
  char v4; // si
  int TopLevelMenuIndex; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 *v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex((__int64)a2, a3);
  v8 = **a2;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 40LL) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded((__int64)a1, (__int64)a2, v8, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, 0LL);
  xxxMNInvertItem(v11, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v9);
  return 1LL;
}
