/*
 * XREFs of MNGetpItemFromIndex @ 0x1C0021DE0
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0020138 (xxxSetMenuInfo.c)
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C010C914 (_ServerFixupMenuDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     MNGetpItem @ 0x1C0222D2C (MNGetpItem.c)
 *     MNItemHitTest @ 0x1C0222D58 (MNItemHitTest.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNSetTop @ 0x1C0226E04 (xxxMNSetTop.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F910 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0246684 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxMNSetGapState @ 0x1C0246EC4 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02470F4 (xxxMNUpdateDraggingInfo.c)
 *     xxxMNUpdateShownMenu @ 0x1C02473A0 (xxxMNUpdateShownMenu.c)
 *     MNEraseBackground @ 0x1C024A558 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024A69C (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
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
