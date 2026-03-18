/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C02465E0
 * Callers:
 *     xxxGetMenuItemRect @ 0x1C02469A8 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C0246C4C (xxxMenuItemFromPoint.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0020C18 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuPwnd(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0
    && (!a1 || (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) != 0x29C) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, 0LL);
    v6 = *(_QWORD *)(a2 + 16);
    if ( !v6 )
      v6 = **(_QWORD **)a2;
    v7 = MNGetPopupFromMenu(v6, 0LL, v4, v5);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v12, (__int64)v7);
    if ( *(_QWORD *)v12[0] )
      v3 = *(_QWORD *)(*(_QWORD *)v12[0] + 16LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v8, v9, v10);
  }
  return v3;
}
