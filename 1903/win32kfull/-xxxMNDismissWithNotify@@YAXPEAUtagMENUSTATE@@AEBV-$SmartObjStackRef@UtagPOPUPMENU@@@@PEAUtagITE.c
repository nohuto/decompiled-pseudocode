/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0222274
 * Callers:
 *     xxxMNButtonUp @ 0x1C022331C (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C0224190 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     zzzStartFade @ 0x1C01E9ED0 (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0222918 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 */

__int64 __fastcall xxxMNDismissWithNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // r14d
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  _QWORD v15[4]; // [rsp+30h] [rbp-38h] BYREF

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
  SmartObjStackRefBase<tagMENU>::Init(v15, *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  v15[2] = 0LL;
  v9 = zzzMNFadeSelection(v15, a3);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v10, v11, v12);
  if ( v9 )
    zzzStartFade();
  v13 = 0xFFFFFFFFLL;
  if ( v8 != 274 )
    v13 = 4294967293LL;
  xxxWindowEvent(0x8013u, *(struct tagWND **)(**(_QWORD **)a2 + 16LL), v13, a4, 0);
  return xxxMNCancel(v7);
}
