/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C012DCDC
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00289DC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     _ServerFixupMenuDC @ 0x1C00E6B94 (_ServerFixupMenuDC.c)
 *     xxxGetSystemMenu @ 0x1C00FB780 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C012C8A0 (xxxEnableMenuItem.c)
 *     xxxGetMenuBarInfo @ 0x1C012D47C (xxxGetMenuBarInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator bool(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) || **(_QWORD **)a1 != 0LL;
}
