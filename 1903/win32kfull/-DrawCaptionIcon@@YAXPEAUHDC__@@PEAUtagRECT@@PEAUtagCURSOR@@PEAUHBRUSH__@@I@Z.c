/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243F48
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     _DrawIconEx @ 0x1C002CFB4 (_DrawIconEx.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243DB8 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 */

void __fastcall DrawCaptionIcon(HDC a1, struct tagRECT *a2, struct tagCURSOR *a3, HBRUSH a4, char a5)
{
  unsigned int v5; // r14d
  unsigned int DpiForSystem; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 i; // rcx
  int v14; // edi
  struct tagCURSOR **v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r8
  __int128 *v20; // rcx
  __int128 v21; // xmm1
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  HDC v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  int v29; // ecx
  char *OemBitmapInfoForDpi; // rax
  LONG left; // edi
  LONG top; // esi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // eax
  int v44; // eax
  RECT v45; // [rsp+60h] [rbp-10h] BYREF

  v5 = a2->bottom - a2->top;
  *(_QWORD *)&v45.left = 0LL;
  *(_QWORD *)&v45.right = 0LL;
  DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4);
  if ( v5 != *((__int16 *)GetOemBitmapInfoForDpi(29, DpiForSystem) + 3)
    || a4 == *(HBRUSH *)(gpsi + 4944LL)
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v45.left = left;
    v45.top = top;
    v45.right = left + v5;
    v45.bottom = top + v5;
    FillRect(a1, &v45, a4);
    v37 = GetDpiForSystem(v34, v33, v35, v36);
    DpiDependentMetric = GetDpiDependentMetric(20LL, v37);
    v43 = GetDpiForSystem(v40, v39, v41, v42);
    v44 = GetDpiDependentMetric(21LL, v43);
    DrawIconEx(
      a1,
      (int)(v5 - DpiDependentMetric) / 2 + left + 1,
      top + (int)(v5 - v44) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v44,
      0,
      0LL,
      3);
  }
  else
  {
    v12 = a5 & 0x10;
    if ( (a5 & 0x10) != 0 )
    {
      i = (__int64)a3 - gcachedCaptions[0];
      v14 = a3 != (struct tagCURSOR *)gcachedCaptions[0] ? 5 : 0;
    }
    else
    {
      v14 = 1;
      i = 1LL;
      v15 = (struct tagCURSOR **)&gcachedCaptions[2];
      do
      {
        if ( *v15 == a3 )
          break;
        ++v14;
        ++i;
        v15 += 2;
      }
      while ( i < 5 );
    }
    if ( v14 >= 5 )
    {
      if ( (a5 & 0x10) != 0 )
      {
        v14 = 0;
      }
      else
      {
        v14 = 1;
        v16 = &gcachedCaptions[2];
        for ( i = 1LL; i < 4; ++i )
        {
          if ( !*v16 )
            break;
          ++v14;
          v16 += 2;
        }
      }
      v17 = GetDpiForSystem(i, v12, v11, 1LL);
      v18 = GetDpiDependentMetric(20LL, v17);
      BltMe4Times(gcachedCaptions[2 * v14 + 1], v5, v18, ghdcMem, a3, a5);
      *(_QWORD *)&v45.right = a3;
      *(_QWORD *)&v45.left = &gcachedCaptions[2 * v14];
      HMAssignmentLock(&v45);
    }
    if ( v14 > 1LL )
    {
      v19 = v14 - 1LL;
      v12 = 16LL * v14;
      v14 = 1;
      do
      {
        v20 = (__int128 *)(v12 + gcachedCaptions[0]);
        v12 -= 16LL;
        v21 = *v20;
        *v20 = *(_OWORD *)(v12 + gcachedCaptions[0]);
        *(_OWORD *)(v12 + gcachedCaptions[0]) = v21;
        --v19;
      }
      while ( v19 );
    }
    v22 = gcachedCaptions[2 * v14 + 1];
    v25 = (HDC)PrepareHDCBITSBitmap(0LL, v12);
    if ( v25 )
    {
      v28 = GetDpiForSystem(v24, v23, v26, v27);
      v29 = v22 + 1;
      if ( (a5 & 1) != 0 )
        v29 = v22;
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v29, v28);
      NtGdiBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v5,
        v5,
        v25,
        *(__int16 *)OemBitmapInfoForDpi,
        *((__int16 *)OemBitmapInfoForDpi + 1),
        13369376,
        0,
        0);
    }
  }
  a2->left += v5;
}
