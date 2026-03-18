/*
 * XREFs of xxxInternalInvalidate @ 0x1C002AC50
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C005068C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E7FA8 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0112F84 (xxxInvalidateWallpaperWindow.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01A3F40 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01A4C48 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01B11A4 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01CE4E0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     UserRedrawDesktop @ 0x1C01FAF04 (UserRedrawDesktop.c)
 *     xxxCompositedPaint @ 0x1C01FAF90 (xxxCompositedPaint.c)
 * Callees:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C002B4F4 (IntersectWithParents.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00383F0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDoSyncPaint @ 0x1C0064E98 (xxxDoSyncPaint.c)
 *     CalcWindowRgn @ 0x1C0074A3C (CalcWindowRgn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01CEB18 (SpbCheckRect.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // edi
  HRGN v5; // r8
  struct tagWND *v6; // rsi
  struct tagWND *i; // r14
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagRECT v11; // xmm0
  HRGN v12; // r15
  __int64 RectRgnIndirect; // rax
  HRGN v15; // [rsp+38h] [rbp-38h]
  struct tagWND *v16; // [rsp+40h] [rbp-30h]
  struct tagRECT v17; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v18; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v15 = a2;
  v16 = 0LL;
  v5 = a2;
  v6 = a1;
  i = 0LL;
  v8 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 10) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 27LL) & 2) != 0 )
        break;
    }
    if ( i )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL, 1LL, 1LL);
        v8 = RectRgnIndirect;
        if ( RectRgnIndirect )
        {
          v5 = (HRGN)RectRgnIndirect;
          v15 = (HRGN)RectRgnIndirect;
        }
        else
        {
          v5 = v15;
        }
      }
      v16 = v6;
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
  v10 = a3 & 0x400;
  if ( (a3 & 0x400) != 0 )
    v11 = *(struct tagRECT *)(v9 + 88);
  else
    v11 = *(struct tagRECT *)(v9 + 104);
  v17 = v11;
  if ( (a3 & 9) != 0 )
  {
    v12 = v5;
    if ( v5 == (HRGN)1 )
    {
      v12 = (HRGN)ghrgnInv1;
      CalcWindowRgn(v6, ghrgnInv1, (_DWORD)v10 == 0);
    }
  }
  else
  {
    v12 = (HRGN)ghrgnInv1;
    SetEmptyRgn(ghrgnInv1, v10, v5);
  }
  if ( (a3 & 9) == 0 || (a3 & 1) == 0 || (unsigned int)IntersectWithParents(v6, &v17) )
  {
    if ( (a3 & 0x1001) == 0x1001 )
    {
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
      {
        *(_QWORD *)&v18.left = 0LL;
        *(_QWORD *)&v18.right = 0LL;
        if ( (unsigned int)GreGetRgnBox(v12, &v18) )
        {
          IntersectRect(&v18, &v18, &v17);
          SpbCheckRect(v6, &v18, 0);
        }
      }
    }
    InternalInvalidate2(v6, v15, v12, &v17, a3);
    if ( i )
    {
      v6 = v16;
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
      xxxDoSyncPaint(v6, v3);
    }
  }
}
