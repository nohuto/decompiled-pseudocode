/*
 * XREFs of GreGetTextAlign @ 0x1C00A70F4
 * Callers:
 *     DrawFrameControl @ 0x1C007BB1C (DrawFrameControl.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     _ServerFixupMenuDC @ 0x1C01060C4 (_ServerFixupMenuDC.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C01109FC (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0151E08 (CreateCompatiblePublicDC.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227A4C (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxDrawState @ 0x1C0230354 (xxxDrawState.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 *     DrawTextExWorker @ 0x1C024239C (DrawTextExWorker.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextAlign(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = 0;
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 276LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
