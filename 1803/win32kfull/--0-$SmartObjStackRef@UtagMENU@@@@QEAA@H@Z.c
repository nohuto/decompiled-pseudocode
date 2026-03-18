/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0138F04
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002133C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     xxxCreateDefaultImeWindow @ 0x1C005BB1C (xxxCreateDefaultImeWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, int a2)
{
  __int64 v2; // rbx

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(a1, 0LL);
  a1[2] = v2;
  return a1;
}
