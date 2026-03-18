/*
 * XREFs of _CheckMenuItem @ 0x1C0159B34
 * Callers:
 *     NtUserCheckMenuItem @ 0x1C0159A40 (NtUserCheckMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C012DC74 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall CheckMenuItem(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v9, a1);
  v9[2] = 0LL;
  v5 = MenuItemState((__int64)v9, a2, a3, 8, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v6, v7);
  return v5;
}
