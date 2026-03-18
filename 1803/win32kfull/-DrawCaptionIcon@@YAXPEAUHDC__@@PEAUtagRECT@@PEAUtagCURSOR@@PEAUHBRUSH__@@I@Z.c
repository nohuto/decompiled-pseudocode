/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0202548
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C02023B8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  int v6; // ebp
  unsigned int DpiForSystem; // eax
  int v11; // edi
  __int64 v12; // rcx
  struct tagCURSOR **v13; // rax
  _QWORD *v14; // rax
  __int64 i; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int128 *v20; // rcx
  __int128 v21; // xmm1
  unsigned int v22; // edi
  HDC v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rcx
  char *OemBitmapInfoForDpi; // rax
  LONG left; // edi
  LONG top; // esi
  unsigned int v29; // eax
  unsigned int DpiDependentMetric; // ebx
  unsigned int v31; // eax
  int v32; // eax
  RECT v33; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2->bottom - a2->top;
  DpiForSystem = GetDpiForSystem();
  if ( v6 != *((__int16 *)GetOemBitmapInfoForDpi(29LL, DpiForSystem) + 3)
    || a4 == *(HBRUSH *)(gpsi + 4944LL)
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v33.left = left;
    v33.top = top;
    v33.right = left + v6;
    v33.bottom = top + v6;
    FillRect(a1, &v33, a4);
    v29 = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(20LL, v29);
    v31 = GetDpiForSystem();
    v32 = GetDpiDependentMetric(21LL, v31);
    DrawIconEx(
      a1,
      (int)(v6 - DpiDependentMetric) / 2 + left + 1,
      top + (v6 - v32) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v32,
      0,
      0LL,
      3);
  }
  else
  {
    if ( (a5 & 0x10) != 0 )
    {
      v11 = a3 != (struct tagCURSOR *)gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      v11 = 1;
      v12 = 1LL;
      v13 = (struct tagCURSOR **)&gcachedCaptions[2];
      do
      {
        if ( *v13 == a3 )
          break;
        ++v11;
        ++v12;
        v13 += 2;
      }
      while ( v12 < 5 );
    }
    if ( v11 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        v14 = &gcachedCaptions[2];
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v14 )
            break;
          ++v11;
          v14 += 2;
        }
      }
      v16 = GetDpiForSystem();
      v17 = GetDpiDependentMetric(20LL, v16);
      BltMe4Times(gcachedCaptions[2 * v11 + 1], v6, v17, ghdcMem, a3, a5);
      *(_QWORD *)&v33.right = a3;
      *(_QWORD *)&v33.left = &gcachedCaptions[2 * v11];
      HMAssignmentLock(&v33);
    }
    if ( v11 > 1LL )
    {
      v18 = v11 - 1LL;
      v19 = 16LL * v11;
      v11 = 1;
      do
      {
        v20 = (__int128 *)(v19 + gcachedCaptions[0]);
        v19 -= 16LL;
        v21 = *v20;
        *v20 = *(_OWORD *)(v19 + gcachedCaptions[0]);
        *(_OWORD *)(v19 + gcachedCaptions[0]) = v21;
        --v18;
      }
      while ( v18 );
    }
    v22 = gcachedCaptions[2 * v11 + 1];
    v23 = (HDC)PrepareHDCBITSBitmap(0LL);
    if ( v23 )
    {
      v24 = GetDpiForSystem();
      v25 = v22 + 1;
      if ( (a5 & 1) != 0 )
        v25 = v22;
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v25, v24);
      NtGdiBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v6,
        v6,
        v23,
        *(__int16 *)OemBitmapInfoForDpi,
        *((__int16 *)OemBitmapInfoForDpi + 1),
        13369376,
        0,
        0);
    }
  }
  a2->left += v6;
}
