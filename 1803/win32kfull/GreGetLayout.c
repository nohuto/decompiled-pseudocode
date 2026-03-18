/*
 * XREFs of GreGetLayout @ 0x1C002D278
 * Callers:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C000C8A4 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C002C73C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F2780 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0133238 (CreateCompatiblePublicDC.c)
 *     StopFade @ 0x1C01B18B0 (StopFade.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxDrawState @ 0x1C02071C8 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0207838 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BE28 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreGetLayout(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  unsigned int v6; // [rsp+2Ch] [rbp-Ch]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  v1 = -1;
  XDCOBJ::vLock((XDCOBJ *)&v4, a1);
  if ( v4 )
  {
    v1 = *(_DWORD *)(v4[10] + 312);
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v4);
    v7 = 0;
    v2 = *v4;
    HmgDecrementExclusiveReferenceCountEx(v4, v6, &v7);
    if ( v7 )
      bDeleteDCInternalEx(v2, 0LL);
  }
  return v1;
}
