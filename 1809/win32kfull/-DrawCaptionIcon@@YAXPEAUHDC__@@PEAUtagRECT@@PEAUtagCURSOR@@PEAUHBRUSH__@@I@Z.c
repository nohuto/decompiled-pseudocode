/*
 * XREFs of ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022AF18
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022AD88 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
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
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int128 *v21; // rcx
  __int128 v22; // xmm1
  unsigned int v23; // edi
  HDC v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rcx
  char *OemBitmapInfoForDpi; // rax
  LONG left; // edi
  LONG top; // esi
  unsigned int v30; // eax
  __int64 v31; // r8
  int DpiDependentMetric; // ebx
  unsigned int v33; // eax
  __int64 v34; // r8
  int v35; // eax
  RECT v36; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2->bottom - a2->top;
  DpiForSystem = GetDpiForSystem();
  if ( v6 != *((__int16 *)GetOemBitmapInfoForDpi(29LL, DpiForSystem) + 3)
    || a4 == *(HBRUSH *)(gpsi + 4944LL)
    || *((_QWORD *)a3 + 16) )
  {
    left = a2->left;
    top = a2->top;
    v36.left = left;
    v36.top = top;
    v36.right = left + v6;
    v36.bottom = top + v6;
    FillRect(a1, &v36, a4);
    v30 = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(20LL, v30, v31);
    v33 = GetDpiForSystem();
    v35 = GetDpiDependentMetric(21LL, v33, v34);
    DrawIconEx(
      a1,
      (v6 - DpiDependentMetric) / 2 + left + 1,
      top + (v6 - v35) / 2,
      (__int64)a3,
      DpiDependentMetric,
      v35,
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
      v18 = GetDpiDependentMetric(20LL, v16, v17);
      BltMe4Times(gcachedCaptions[2 * v11 + 1], v6, v18, ghdcMem, a3, a5);
      *(_QWORD *)&v36.right = a3;
      *(_QWORD *)&v36.left = &gcachedCaptions[2 * v11];
      HMAssignmentLock(&v36);
    }
    if ( v11 > 1LL )
    {
      v19 = v11 - 1LL;
      v20 = 16LL * v11;
      v11 = 1;
      do
      {
        v21 = (__int128 *)(v20 + gcachedCaptions[0]);
        v20 -= 16LL;
        v22 = *v21;
        *v21 = *(_OWORD *)(v20 + gcachedCaptions[0]);
        *(_OWORD *)(v20 + gcachedCaptions[0]) = v22;
        --v19;
      }
      while ( v19 );
    }
    v23 = gcachedCaptions[2 * v11 + 1];
    v24 = (HDC)PrepareHDCBITSBitmap(0LL);
    if ( v24 )
    {
      v25 = GetDpiForSystem();
      v26 = v23 + 1;
      if ( (a5 & 1) != 0 )
        v26 = v23;
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v26, v25);
      NtGdiBitBltInternal(
        a1,
        a2->left,
        a2->top,
        v6,
        v6,
        v24,
        *(__int16 *)OemBitmapInfoForDpi,
        *((__int16 *)OemBitmapInfoForDpi + 1),
        13369376,
        0,
        0);
    }
  }
  a2->left += v6;
}
