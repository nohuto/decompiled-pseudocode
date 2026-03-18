/*
 * XREFs of xxxHiliteMenuItem @ 0x1C024D170
 * Callers:
 *     NtUserHiliteMenuItem @ 0x1C022F660 (NtUserHiliteMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C015A7C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246400 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 */

__int64 __fastcall xxxHiliteMenuItem(_QWORD *a1, __int64 **a2, unsigned int a3, __int64 a4)
{
  char v4; // si
  signed int TopLevelMenuIndex; // edi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 *v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex((__int64)a2, a3);
  v8 = **a2;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 40LL) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded((ULONG_PTR)a1, a2, v8, a4);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, 0LL);
  xxxMNInvertItem(v12, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v9, v10);
  return 1LL;
}
