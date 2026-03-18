/*
 * XREFs of GetMonitorDC @ 0x1C0033A78
 * Callers:
 *     UserGetMonitorDC @ 0x1C0045330 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C001E320 (GreSetRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C001E910 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     GreGetBounds @ 0x1C0028E20 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgn @ 0x1C00315A0 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1C0033740 (GreIsRendering.c)
 *     GreOffsetRgn @ 0x1C00347B0 (GreOffsetRgn.c)
 *     IntersectRect @ 0x1C0057618 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C0057744 (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0057840 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C00599F8 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GreGetDCOrgEx @ 0x1C00615B0 (GreGetDCOrgEx.c)
 *     CreateCacheDC @ 0x1C0062F20 (CreateCacheDC.c)
 *     GreCopyVisRgn @ 0x1C0063650 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C0063710 (GreSetDCOrg.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A8988 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 result; // rax
  HRGN RectRgnIndirect; // rax
  __int128 v28; // xmm0
  HDC v29; // rcx
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+40h] [rbp-10h] BYREF

  v30 = 0uLL;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 24); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
          SpbCheckDce(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], -2147483646, 0, 1) )
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
            RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion(a2, RectRgnIndirect, *(HRGN *)(a1 + 40));
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
                GreSelectVisRgn(i[1], 0LL, 1);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC);
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
            MonitorRegionForDpi = GetMonitorRegionForDpi(a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0, 0, 0, 0);
            GreOffsetRgn(ghrgnGDC);
            GreSelectVisRgn(i[1], ghrgnGDC, 2);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v14 = v9[5];
              v15 = *(_DWORD *)(v14 + 92);
              LODWORD(v14) = 2 * *(_DWORD *)(v14 + 88);
              LODWORD(v30) = v14 + v30;
              DWORD2(v30) += v14;
              HIDWORD(v30) += 2 * v15;
              DWORD1(v30) += 2 * v15;
              v31 = *(_OWORD *)GetMonitorRect(&v31, a2);
              IntersectRect(&v30, &v30, &v31);
              v16 = v9[5];
              v17 = -*(_DWORD *)(v16 + 92);
              v18 = -*(_DWORD *)(v16 + 88);
              DWORD2(v30) -= *(_DWORD *)(v16 + 88);
              HIDWORD(v30) += v17;
              LODWORD(v30) = v18 + v30;
              DWORD1(v30) += v17;
            }
            GreSetDCOrg((HDC)i[1]);
            GreGetBounds(i[1], 0LL, 5);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn(i[1], ghrgnGDC, 2);
            v28 = *(_OWORD *)GetMonitorRect(&v31, a2);
            v31 = v28;
            if ( a3 )
              v30 = v28;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v30) -= DWORD1(v31);
            DWORD2(v30) -= v31;
            v29 = (HDC)i[1];
            LODWORD(v30) = v30 - v31;
            DWORD1(v30) -= DWORD1(v31);
            GreSetDCOrg(v29);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 )
            GreHintDCWnd(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v9 && (*(_BYTE *)(v9[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
          {
            v22 = v9[5];
            LOBYTE(v21) = ~*(_BYTE *)(v22 + 27);
            GreHintDCWnd(i[1], *(_QWORD *)i[2], *v9, (v21 >> 1) & 1, (*(_WORD *)(v22 + 42) & 0x3FFF) == 669);
          }
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v20, v19);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24, v23);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          return i[1];
        }
      }
    }
    result = CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2);
    if ( result )
      continue;
    break;
  }
  return result;
}
