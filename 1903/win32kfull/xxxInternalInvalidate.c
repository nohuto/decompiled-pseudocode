/*
 * XREFs of xxxInternalInvalidate @ 0x1C00C3B70
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00E122C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0141284 (xxxInvalidateWallpaperWindow.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D957C (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01DA188 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E8E34 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0208D70 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     UserRedrawDesktop @ 0x1C023B5E4 (UserRedrawDesktop.c)
 *     xxxCompositedPaint @ 0x1C023B694 (xxxCompositedPaint.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C009A3E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoSyncPaint @ 0x1C00B051C (xxxDoSyncPaint.c)
 *     CalcWindowRgn @ 0x1C00B40E0 (CalcWindowRgn.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00C3D60 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C00C4444 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C0209430 (SpbCheckRect.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // edi
  HRGN v5; // r8
  struct tagWND *v6; // rsi
  struct tagWND *i; // r14
  __int64 v8; // r12
  __int64 v9; // rcx
  struct tagRECT v10; // xmm0
  HRGN v11; // r15
  __int64 RectRgnIndirect; // rax
  HRGN v14; // [rsp+38h] [rbp-38h]
  struct tagWND *v15; // [rsp+40h] [rbp-30h]
  struct tagRECT v16; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v17; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v14 = a2;
  v15 = 0LL;
  v5 = a2;
  v6 = a1;
  i = 0LL;
  v8 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 27LL) & 2) != 0 )
        break;
    }
    if ( i )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
        v8 = RectRgnIndirect;
        if ( RectRgnIndirect )
        {
          v5 = (HRGN)RectRgnIndirect;
          v14 = (HRGN)RectRgnIndirect;
        }
        else
        {
          v5 = v14;
        }
      }
      v15 = v6;
      a3 |= 0x80u;
      v6 = i;
    }
  }
  v9 = *((_QWORD *)v6 + 5);
  if ( (((a3 & 1) != 0) & (*(_BYTE *)(v9 + 26) >> 3)) != 0 )
  {
    *(_DWORD *)(v9 + 232) |= 2u;
    v9 = *((_QWORD *)v6 + 5);
  }
  if ( (a3 & 0x400) != 0 )
    v10 = *(struct tagRECT *)(v9 + 88);
  else
    v10 = *(struct tagRECT *)(v9 + 104);
  v16 = v10;
  if ( (a3 & 9) != 0 )
  {
    v11 = v5;
    if ( v5 == (HRGN)1 )
    {
      v11 = (HRGN)ghrgnInv1;
      CalcWindowRgn((__int64)v6, ghrgnInv1, (a3 & 0x400) == 0);
    }
  }
  else
  {
    v11 = (HRGN)ghrgnInv1;
    SetEmptyRgn(ghrgnInv1);
  }
  if ( (a3 & 9) == 0 || (a3 & 1) == 0 || (unsigned int)IntersectWithParents(v6, &v16) )
  {
    if ( (a3 & 0x1001) == 0x1001 )
    {
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
      {
        *(_QWORD *)&v17.left = 0LL;
        *(_QWORD *)&v17.right = 0LL;
        if ( (unsigned int)GreGetRgnBox(v11, &v17) )
        {
          IntersectRect(&v17, &v17, &v16);
          SpbCheckRect(v6, &v17, 0);
        }
      }
    }
    InternalInvalidate2(v6, v14, v11, &v16, a3);
    if ( i )
    {
      v6 = v15;
      if ( v8 )
        GreDeleteObject(v8);
    }
    if ( (a3 & 0x100) != 0 )
    {
      xxxInternalUpdateWindow(v6, (a3 & 0x40) == 0);
    }
    else if ( (a3 & 0x200) != 0 )
    {
      if ( (a3 & 0x40) == 0 )
        v3 = (a3 & 0x80u) != 0 ? 32 : 4;
      xxxDoSyncPaint((__int64)v6, v3);
    }
  }
}
