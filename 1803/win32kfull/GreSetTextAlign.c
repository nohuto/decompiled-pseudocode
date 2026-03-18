/*
 * XREFs of GreSetTextAlign @ 0x1C000D0B8
 * Callers:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C000C8A4 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 *     _ServerFixupMenuDC @ 0x1C00EBA98 (_ServerFixupMenuDC.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0133238 (CreateCompatiblePublicDC.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C01FECA4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawState @ 0x1C02071C8 (xxxDrawState.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 *     DrawTextExWorker @ 0x1C022C45C (DrawTextExWorker.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v8[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = *(_QWORD *)(v8[0] + 80LL);
    v3 = *(_DWORD *)(v5 + 156);
    *(_DWORD *)(v5 + 156) = a2;
    v6 = *(_QWORD *)(v4 + 80);
    if ( (*(_DWORD *)(v6 + 312) & 1) != 0 && (a2 & 6) != 6 )
      LOBYTE(a2) = a2 ^ 2;
    *(_DWORD *)(v6 + 152) = a2 & 0x1F;
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}
