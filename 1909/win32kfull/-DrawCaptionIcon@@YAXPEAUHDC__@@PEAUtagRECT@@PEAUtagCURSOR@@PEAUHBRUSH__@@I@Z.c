/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243808
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 * Callees:
 *     _DrawIconEx @ 0x1C00226D0 (_DrawIconEx.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C0243678 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
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
  __int128 *v19; // rcx
  __int128 v20; // xmm1
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  HDC v24; // rbx
  __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // rcx
  char *OemBitmapInfoForDpi; // rax
  LONG left; // edi
  LONG top; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // eax
  int v40; // eax
  RECT v41; // [rsp+60h] [rbp-10h] BYREF

  v5 = a2->bottom - a2->top;
  *(_QWORD *)&v41.left = 0LL;
  *(_QWORD *)&v41.right = 0LL;
  DpiForSystem = GetDpiForSystem((__int64)a1, (__int64)a2, (__int64)a3);
  if ( v5 != *((__int16 *)GetOemBitmapInfoForDpi(29LL, DpiForSystem) + 3)
    || a4 == *(HBRUSH *)(gpsi + 4944LL)
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v41.left = left;
    v41.top = top;
    v41.right = left + v5;
    v41.bottom = top + v5;
    FillRect(a1, &v41, a4);
    v34 = GetDpiForSystem(v32, v31, v33);
    DpiDependentMetric = GetDpiDependentMetric(20LL, v34);
    v39 = GetDpiForSystem(v37, v36, v38);
    v40 = GetDpiDependentMetric(21LL, v39);
    DrawIconEx(
      a1,
      (int)(v5 - DpiDependentMetric) / 2 + left + 1,
      top + (int)(v5 - v40) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v40,
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
      v17 = GetDpiForSystem(i, v12, v11);
      v18 = GetDpiDependentMetric(20LL, v17);
      BltMe4Times(gcachedCaptions[2 * v14 + 1], v5, v18, ghdcMem, a3, a5);
      *(_QWORD *)&v41.right = a3;
      *(_QWORD *)&v41.left = &gcachedCaptions[2 * v14];
      HMAssignmentLock(&v41);
    }
    if ( v14 > 1LL )
    {
      v11 = v14 - 1LL;
      v12 = 16LL * v14;
      v14 = 1;
      do
      {
        v19 = (__int128 *)(v12 + gcachedCaptions[0]);
        v12 -= 16LL;
        v20 = *v19;
        *v19 = *(_OWORD *)(v12 + gcachedCaptions[0]);
        *(_OWORD *)(v12 + gcachedCaptions[0]) = v20;
        --v11;
      }
      while ( v11 );
    }
    v21 = gcachedCaptions[2 * v14 + 1];
    v24 = (HDC)PrepareHDCBITSBitmap(0LL, v12, v11);
    if ( v24 )
    {
      v26 = GetDpiForSystem(v23, v22, v25);
      v27 = v21 + 1;
      if ( (a5 & 1) != 0 )
        v27 = v21;
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v27, v26);
      NtGdiBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v5,
        v5,
        v24,
        *(__int16 *)OemBitmapInfoForDpi,
        *((__int16 *)OemBitmapInfoForDpi + 1),
        13369376,
        0,
        0);
    }
  }
  a2->left += v5;
}
