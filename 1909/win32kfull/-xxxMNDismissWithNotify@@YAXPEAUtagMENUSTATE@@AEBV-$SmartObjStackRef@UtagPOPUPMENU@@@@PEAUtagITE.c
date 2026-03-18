/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0221D34
 * Callers:
 *     xxxMNButtonUp @ 0x1C0222DDC (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C0223C50 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     zzzStartFade @ 0x1C01E9D50 (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02223D8 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 */

__int64 __fastcall xxxMNDismissWithNotify(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v7; // r14d
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  _QWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a1;
  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v8 = 274;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    {
      v8 = 294;
      goto LABEL_7;
    }
    v8 = 273;
  }
  a4 = *(_DWORD *)(*(_QWORD *)a3 + 8LL);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::Init(v14, *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  v14[2] = 0LL;
  v9 = zzzMNFadeSelection(v14, a3);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v10, v11);
  if ( v9 )
    zzzStartFade();
  v12 = 0xFFFFFFFFLL;
  if ( v8 != 274 )
    v12 = 4294967293LL;
  xxxWindowEvent(0x8013u, *(struct tagWND **)(**(_QWORD **)a2 + 16LL), v12, a4, 0);
  return xxxMNCancel(v7);
}
