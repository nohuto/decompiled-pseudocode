/*
 * XREFs of GetMonitorDC @ 0x1C002A590
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C00451E8 (UserGetMonitorDC.c)
 * Callees:
 *     GreOffsetRgn @ 0x1C001CB60 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C001E010 (GreSetRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     GreGetBounds @ 0x1C0026520 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgnShared @ 0x1C0029E90 (GreSelectVisRgnShared.c)
 *     GreIsRendering @ 0x1C002A550 (GreIsRendering.c)
 *     IntersectRect @ 0x1C00393F4 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C0039468 (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0039B78 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003A670 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C003A6F0 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     GreSetDCOrg @ 0x1C006AE40 (GreSetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00760E0 (GreGetDCOrgEx.c)
 *     CreateCacheDC @ 0x1C0099470 (CreateCacheDC.c)
 *     GreCopyVisRgn @ 0x1C009D9C0 (GreCopyVisRgn.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 *i; // rbx
  int v7; // eax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 StyleWindow; // rax
  __int64 RedirectionBitmap; // r15
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r8
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int128 v25; // xmm0
  HDC v26; // rcx
  struct HOBJ__ *RectRgnIndirect; // rax
  __int128 v28; // [rsp+30h] [rbp-20h] BYREF
  __int128 v29; // [rsp+40h] [rbp-10h] BYREF

  v28 = 0uLL;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 24); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
          SpbCheckDce(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 0x80000002, 0, 1) )
        {
          i[2] = *(_QWORD *)(a1 + 16);
          i[3] = *(_QWORD *)(a1 + 24);
          i[4] = *(_QWORD *)(a1 + 32);
          i[9] = *(_QWORD *)(a1 + 72);
          i[10] = *(_QWORD *)(a1 + 80);
          v7 = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
          *((_DWORD *)i + 16) = v7;
          v8 = *(_QWORD *)(a1 + 40);
          if ( v8 > 1 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion(a2, (HRGN)RectRgnIndirect, *(HRGN *)(a1 + 40));
            v7 = *((_DWORD *)i + 16);
          }
          else
          {
            i[5] = v8;
          }
          v9 = 0LL;
          if ( (v7 & 0x4000) != 0
            && (int)IsGetStyleWindowSupported() >= 0
            && (StyleWindow = GetStyleWindow(i[2], 2848LL), (v9 = (_QWORD *)StyleWindow) != 0LL) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(StyleWindow + 40) + 26LL) & 0x20) == 0
              && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              RedirectionBitmap = GetRedirectionBitmap(v9);
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
                && !(unsigned int)GreSelectRedirectionBitmap(i[1], RedirectionBitmap) )
              {
                GreSelectVisRgnShared((HDC)i[1], 0LL, 1);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC, *(_DWORD *)(v9[5] + 88LL), *(_DWORD *)(v9[5] + 92LL));
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
            MonitorRegionForDpi = GetMonitorRegionForDpi(a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0, 0, 0, 0);
            GreOffsetRgn(ghrgnGDC, -*(_DWORD *)(v9[5] + 88LL), -*(_DWORD *)(v9[5] + 92LL));
            GreSelectVisRgnShared((HDC)i[1], ghrgnGDC, 2);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v14 = v9[5];
              v15 = *(_DWORD *)(v14 + 92);
              LODWORD(v14) = 2 * *(_DWORD *)(v14 + 88);
              LODWORD(v28) = v14 + v28;
              DWORD2(v28) += v14;
              HIDWORD(v28) += 2 * v15;
              DWORD1(v28) += 2 * v15;
              v29 = *(_OWORD *)GetMonitorRect(&v29, a2);
              IntersectRect(&v28, &v28, &v29);
              v16 = v9[5];
              v17 = -*(_DWORD *)(v16 + 92);
              v18 = -*(_DWORD *)(v16 + 88);
              DWORD2(v28) -= *(_DWORD *)(v16 + 88);
              HIDWORD(v28) += v17;
              LODWORD(v28) = v18 + v28;
              DWORD1(v28) += v17;
            }
            GreSetDCOrg((HDC)i[1]);
            GreGetBounds((HDC)i[1], 0LL, 5);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgnShared((HDC)i[1], ghrgnGDC, 2);
            v25 = *(_OWORD *)GetMonitorRect(&v29, a2);
            v29 = v25;
            if ( a3 )
              v28 = v25;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v28) -= DWORD1(v29);
            DWORD2(v28) -= v29;
            v26 = (HDC)i[1];
            LODWORD(v28) = v28 - v29;
            DWORD1(v28) -= DWORD1(v29);
            GreSetDCOrg(v26);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 )
            GreHintDCWnd(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v9 && (*(_BYTE *)(v9[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
          {
            v21 = v9[5];
            LOBYTE(v20) = ~*(_BYTE *)(v21 + 27);
            GreHintDCWnd(i[1], *(_QWORD *)i[2], *v9, (v20 >> 1) & 1, (*(_WORD *)(v21 + 42) & 0x2FFF) == 669);
          }
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v19);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2) )
      continue;
    break;
  }
  return 0LL;
}
