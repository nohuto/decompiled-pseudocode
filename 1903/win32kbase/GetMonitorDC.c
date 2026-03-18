/*
 * XREFs of GetMonitorDC @ 0x1C003C510
 * Callers:
 *     UserGetMonitorDC @ 0x1C003C430 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C003E730 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreOffsetRgn @ 0x1C0015600 (GreOffsetRgn.c)
 *     GreSelectVisRgn @ 0x1C00162B0 (GreSelectVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     GreGetBounds @ 0x1C001BE60 (GreGetBounds.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 *     GreIsRendering @ 0x1C003C970 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C003C9C0 (GreSetDCOrg.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C003CAD4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C003CB48 (GetMonitorRect.c)
 *     GreCopyVisRgn @ 0x1C003D6D0 (GreCopyVisRgn.c)
 *     CreateCacheDC @ 0x1C003D880 (CreateCacheDC.c)
 *     GreGetDCOrgEx @ 0x1C003DAF0 (GreGetDCOrgEx.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C003DE78 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     IntersectRect @ 0x1C003DF10 (IntersectRect.c)
 *     GreSetRectRgn @ 0x1C0053B00 (GreSetRectRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C009B42C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
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
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 0x80000002, 0, 0) )
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
                GreSelectVisRgn(i[1], 0LL, 1u);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC, *(_DWORD *)(v9[5] + 88LL), *(_DWORD *)(v9[5] + 92LL));
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
            MonitorRegionForDpi = GetMonitorRegionForDpi(a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0);
            GreOffsetRgn(ghrgnGDC, -*(_DWORD *)(v9[5] + 88LL), -*(_DWORD *)(v9[5] + 92LL));
            GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
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
            GreGetBounds(i[1], 0LL, 5);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
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
            GreHintDCWnd(i[1], *(_QWORD *)i[2], *v9, (v20 >> 1) & 1, (*(_WORD *)(v21 + 42) & 0x3FFF) == 669);
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
