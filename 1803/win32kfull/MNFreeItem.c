/*
 * XREFs of MNFreeItem @ 0x1C00229EC
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxInsertMenuItem @ 0x1C0023244 (xxxInsertMenuItem.c)
 *     _DestroyMenu @ 0x1C00507F0 (_DestroyMenu.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?FreeItemString@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0021C64 (-FreeItemString@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0021CAC (-UnlockSubMenu@@YAPEAUtagMENU@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _DestroyMenu @ 0x1C00507F0 (_DestroyMenu.c)
 */

_QWORD *__fastcall MNFreeItem(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  _QWORD *result; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(*a2 + 96LL) = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v10, a1);
  v11 = 0LL;
  FreeItemString((__int64)v10, a2);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v6);
  SmartObjStackRefBase<tagMENU>::Init(v10, a1);
  v11 = 0LL;
  v7 = UnlockSubMenu((__int64)v10, (__int64)a2);
  result = SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v8);
  if ( v7 )
  {
    if ( a3 )
      return (_QWORD *)DestroyMenu(v7);
  }
  return result;
}
