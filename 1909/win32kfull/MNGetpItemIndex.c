/*
 * XREFs of MNGetpItemIndex @ 0x1C012A92C
 * Callers:
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C01297F4 (xxxDrawMenuItem.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0129B48 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C012A7A4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C012A974 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C012CEC0 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMNDoubleClick @ 0x1C0223C50 (xxxMNDoubleClick.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F2F0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 *     xxxDrawState @ 0x1C0248824 (xxxDrawState.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249504 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02496C8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNGetpItemIndex(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = a2 - *(_QWORD *)(a1 + 88);
  if ( (v2 & 0x8000000000000000uLL) == 0LL
    && v2 < 96 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL)
    && v2 == 96 * (v2 / 0x60) )
  {
    return (unsigned int)(v2 / 0x60);
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
