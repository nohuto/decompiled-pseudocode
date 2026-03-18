/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C022DE28
 * Callers:
 *     xxxGetMenuItemRect @ 0x1C022E1EC (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C022E474 (xxxMenuItemFromPoint.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetPopupFromMenu @ 0x1C006A864 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuPwnd(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0
    && (!a1 || (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x29C) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v8, 0LL);
    v4 = *(_QWORD *)(a2 + 16);
    if ( !v4 )
      v4 = **(_QWORD **)a2;
    v5 = MNGetPopupFromMenu(v4, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v8, (__int64)v5);
    if ( *(_QWORD *)v8[0] )
      v3 = *(_QWORD *)(*(_QWORD *)v8[0] + 16LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v6);
  }
  return v3;
}
