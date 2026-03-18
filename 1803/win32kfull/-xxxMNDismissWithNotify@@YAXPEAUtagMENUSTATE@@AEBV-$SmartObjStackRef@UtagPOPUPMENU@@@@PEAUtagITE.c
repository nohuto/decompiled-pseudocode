/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C01E4874
 * Callers:
 *     xxxMNButtonUp @ 0x1C01E58A4 (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C01E6710 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     zzzStartFade @ 0x1C01B20EC (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01E4EFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 */

__int64 __fastcall xxxMNDismissWithNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // r8d
  _QWORD v15[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v10 = 274;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    {
      v10 = 294;
      a5 = **(_QWORD **)(**(_QWORD **)a2 + 40LL);
      goto LABEL_7;
    }
    v10 = 273;
    a5 = 0LL;
  }
  a4 = *(_DWORD *)(*(_QWORD *)a3 + 8LL);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::Init(v15, *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  v15[2] = 0LL;
  v11 = zzzMNFadeSelection(v15, a3);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v12);
  if ( v11 )
    zzzStartFade();
  v13 = -1;
  if ( v10 != 274 )
    v13 = -3;
  xxxWindowEvent(0x8013u, *(_QWORD *)(**(_QWORD **)a2 + 16LL), v13, a4, 0);
  return xxxMNCancel(a1, v10, a4, a5);
}
