/*
 * XREFs of GreSetTextAlign @ 0x1C00A72C0
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

__int64 __fastcall GreSetTextAlign(HDC a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = *(_QWORD *)(v7[0] + 976LL);
    v3 = *(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 276) = a2;
    v5 = *(_QWORD *)(v7[0] + 976LL);
    if ( (*(_DWORD *)(v5 + 108) & 1) != 0 && (a2 & 6) != 6 )
      LOBYTE(a2) = a2 ^ 2;
    *(_DWORD *)(v5 + 272) = a2 & 0x1F;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v3;
}
