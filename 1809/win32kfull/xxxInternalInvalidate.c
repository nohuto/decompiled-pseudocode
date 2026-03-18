/*
 * XREFs of xxxInternalInvalidate @ 0x1C0039F20
 * Callers:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00C1390 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0104F04 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C013684C (xxxInvalidateWallpaperWindow.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01C61D8 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C6DC4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01D3CCC (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01F2AC0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     UserRedrawDesktop @ 0x1C0223048 (UserRedrawDesktop.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C003B3B8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C003BFEC (IntersectWithParents.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     xxxDoSyncPaint @ 0x1C006E41C (xxxDoSyncPaint.c)
 *     CalcWindowRgn @ 0x1C006F268 (CalcWindowRgn.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F7460 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01F3180 (SpbCheckRect.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  struct tagWND *v6; // rsi
  HRGN v7; // r14
  __int64 v8; // rcx
  struct tagRECT v9; // xmm0
  HRGN v10; // r15
  HRGN RectRgnIndirect; // rax
  __int64 StyleWindow; // [rsp+38h] [rbp-38h]
  struct tagWND *v13; // [rsp+40h] [rbp-30h]
  struct tagRECT v14; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v4 = a3;
  StyleWindow = 0LL;
  v13 = 0LL;
  v6 = a1;
  v7 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    StyleWindow = GetStyleWindow((__int64)a1, 2818);
    if ( StyleWindow )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect(*((_QWORD *)v6 + 5) + 88LL);
        v7 = RectRgnIndirect;
        if ( RectRgnIndirect )
          a2 = RectRgnIndirect;
      }
      v13 = v6;
      v4 |= 0x80u;
      v6 = (struct tagWND *)StyleWindow;
    }
  }
  v8 = *((_QWORD *)v6 + 5);
  if ( (((v4 & 1) != 0) & (*(_BYTE *)(v8 + 26) >> 3)) != 0 )
  {
    *(_DWORD *)(v8 + 232) |= 2u;
    v8 = *((_QWORD *)v6 + 5);
  }
  if ( (v4 & 0x400) != 0 )
    v9 = *(struct tagRECT *)(v8 + 88);
  else
    v9 = *(struct tagRECT *)(v8 + 104);
  v14 = v9;
  if ( (v4 & 9) != 0 )
  {
    v10 = a2;
    if ( a2 == (HRGN)1 )
    {
      v10 = (HRGN)ghrgnInv1;
      CalcWindowRgn(v6, ghrgnInv1, (v4 & 0x400) == 0);
    }
  }
  else
  {
    v10 = (HRGN)ghrgnInv1;
    SetEmptyRgn(ghrgnInv1);
  }
  if ( (v4 & 9) == 0 || (v4 & 1) == 0 || (unsigned int)IntersectWithParents(v6, &v14) )
  {
    if ( (v4 & 0x1001) == 0x1001 )
    {
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
      {
        *(_QWORD *)&v15.left = 0LL;
        *(_QWORD *)&v15.right = 0LL;
        if ( (unsigned int)GreGetRgnBox(v10, &v15) )
        {
          IntersectRect(&v15, &v15, &v14);
          SpbCheckRect(v6, &v15, 0);
        }
      }
    }
    InternalInvalidate2(v6, a2, v10, &v14, v4);
    if ( StyleWindow )
    {
      v6 = v13;
      if ( v7 )
        GreDeleteObject(v7);
    }
    if ( (v4 & 0x100) != 0 )
    {
      xxxInternalUpdateWindow(v6, (v4 & 0x40) == 0);
    }
    else if ( (v4 & 0x200) != 0 )
    {
      if ( (v4 & 0x40) == 0 )
        v3 = (v4 & 0x80u) != 0 ? 32 : 4;
      xxxDoSyncPaint(v6, v3);
    }
  }
}
