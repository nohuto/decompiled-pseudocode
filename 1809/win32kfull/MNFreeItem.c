/*
 * XREFs of MNFreeItem @ 0x1C0069C4C
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C006C328 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006B530 (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006B570 (-FreeItemString@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall MNFreeItem(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *result; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(*(_QWORD *)a2 + 96LL) = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v10, a1);
  v11 = 0LL;
  FreeItemString(v10, a2);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v6);
  SmartObjStackRefBase<tagMENU>::Init(v10, a1);
  v11 = 0LL;
  v7 = UnlockSubMenu(v10, a2);
  result = SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v8);
  if ( v7 )
  {
    if ( a3 )
      return (_QWORD *)DestroyMenu(v7);
  }
  return result;
}
