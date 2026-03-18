/*
 * XREFs of MNGetpItemFromIndex @ 0x1C00AB734
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxSetMenuInfo @ 0x1C00AAED0 (xxxSetMenuInfo.c)
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 *     _ServerFixupMenuDC @ 0x1C01060C4 (_ServerFixupMenuDC.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     MNGetpItem @ 0x1C020B204 (MNGetpItem.c)
 *     MNItemHitTest @ 0x1C020B230 (MNItemHitTest.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMNSetTop @ 0x1C020F0B8 (xxxMNSetTop.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227A4C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C022DECC (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxMNSetGapState @ 0x1C022E6BC (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C022E8CC (xxxMNUpdateDraggingInfo.c)
 *     xxxMNUpdateShownMenu @ 0x1C022EB74 (xxxMNUpdateShownMenu.c)
 *     MNEraseBackground @ 0x1C0231918 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0231A54 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNGetpItemFromIndex(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || a2 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 88) + 96LL * (int)a2;
}
