/*
 * XREFs of FindNCHit @ 0x1C01013E8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C5264 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C0039D4C (GetDpiCacheSlot.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 *     _HasCaptionIcon @ 0x1C00C4988 (_HasCaptionIcon.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     SizeBoxHwnd @ 0x1C022AE24 (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // r14d
  unsigned int WindowDpiLastNotify; // edi
  int v5; // r12d
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // r8
  __int128 v9; // xmm6
  _BYTE *v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  int v14; // eax
  int v15; // esi
  int v16; // r13d
  __int64 v17; // r8
  int v18; // r10d
  unsigned __int8 v19; // dl
  int v20; // r13d
  int v21; // esi
  int v22; // eax
  int DpiDependentMetric; // eax
  int v24; // eax
  __int64 v25; // r13
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  int WindowBordersForDpi; // eax
  int v30; // edx
  _DWORD *v31; // r8
  int v32; // eax
  unsigned __int8 v33; // cl
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // eax
  int DpiCacheSlot; // eax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  int v42; // ebx
  int v43; // esi
  int v44; // eax
  int v45; // eax
  int v46; // ebx
  int v47; // edx
  int v48; // eax
  int v49; // r13d
  int v50; // eax
  int v51; // eax
  _BYTE *v52; // rcx
  char v53; // r10
  int v54; // esi
  int v55; // esi
  char v56; // al
  __int64 v57; // rax
  int v58; // eax
  __int128 v59; // [rsp+38h] [rbp-39h] BYREF
  int v60; // [rsp+48h] [rbp-29h]
  __int64 v61; // [rsp+50h] [rbp-21h]
  unsigned __int64 v62; // [rsp+58h] [rbp-19h]
  int v63; // [rsp+60h] [rbp-11h]
  __int64 v64; // [rsp+68h] [rbp-9h]
  __int128 v65; // [rsp+78h] [rbp+7h] BYREF

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  v61 = a1;
  if ( (v2[58] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (v2[72] & 0xF) == 0
         && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
  }
  v5 = (__int16)a2;
  HIDWORD(v62) = SHIWORD(a2);
  LODWORD(v62) = (__int16)a2;
  v6 = v62;
  if ( !PtInRect(v2 + 22, v62) )
    return 0LL;
  if ( (*(_BYTE *)(v8 + 31) & 0x20) != 0 )
  {
    v14 = v7[3] - 4;
    v15 = v7[2] - 4;
    v16 = v7[1] + 4;
    v60 = *v7 + 4;
    LODWORD(v59) = v60;
    *(_QWORD *)((char *)&v59 + 4) = __PAIR64__(v15, v16);
    HIDWORD(v59) = v14;
    if ( !PtInRect(&v59, v62) )
      return 2LL;
    goto LABEL_97;
  }
  v9 = *(_OWORD *)(v8 + 104);
  v65 = v9;
  if ( PtInRect(&v65, v62) )
    return 1LL;
  v19 = v10[25];
  if ( (v19 & 2) != 0 )
  {
    v20 = v65 - 2;
    LODWORD(v59) = v65 - 2;
    v21 = HIDWORD(v65) + 2;
    v64 = (unsigned int)(DWORD1(v65) - 2);
    HIDWORD(v59) = HIDWORD(v65) + 2;
    DWORD2(v59) = DWORD2(v65) + 2;
    DWORD1(v59) = DWORD1(v65) - 2;
  }
  else
  {
    v59 = v9;
    v21 = HIDWORD(v9);
    v20 = v9;
    v64 = DWORD1(v9);
  }
  if ( (v10[16] & 2) != 0 )
  {
    v22 = *(unsigned __int16 *)(gpsi + 6998LL);
    if ( ((v19 ^ v10[26]) & 0x40) != 0 )
    {
      if ( WindowDpiLastNotify == v22 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2284LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(gpsi + 2404LL);
      }
      else
      {
        if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
          DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(0LL, WindowDpiLastNotify);
        else
          DpiDependentMetric = GetDpiDependentMetric(0LL, WindowDpiLastNotify);
        v11 = v61;
      }
      LODWORD(v59) = v20 - DpiDependentMetric;
    }
    else
    {
      if ( WindowDpiLastNotify == v22 )
      {
        v24 = *(_DWORD *)(gpsi + 2284LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v24 = *(_DWORD *)(gpsi + 2404LL);
      }
      else
      {
        if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
          v24 = ScaleSystemMetricForDPIWithoutCache(0LL, WindowDpiLastNotify);
        else
          v24 = GetDpiDependentMetric(0LL, WindowDpiLastNotify);
        v11 = v61;
      }
      DWORD2(v59) += v24;
    }
  }
  v25 = *(_QWORD *)(v11 + 40);
  if ( (*(_BYTE *)(v25 + 16) & 4) != 0 )
  {
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v26 = *(_DWORD *)(gpsi + 2288LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v26 = *(_DWORD *)(gpsi + 2408LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        v26 = ScaleSystemMetricForDPIWithoutCache(1LL, WindowDpiLastNotify);
      else
        v26 = GetDpiDependentMetric(1LL, WindowDpiLastNotify);
      v11 = v61;
    }
    v25 = *(_QWORD *)(v11 + 40);
    v21 += v26;
    HIDWORD(v59) = v21;
  }
  if ( PtInRect(&v59, v62) )
  {
    if ( (*(_BYTE *)(v25 + 25) & 2) != 0 )
    {
      LODWORD(v59) = v59 + 2;
      DWORD2(v59) -= 2;
      DWORD1(v59) = v64 + 2;
      HIDWORD(v59) = v21 - 2;
      if ( !PtInRect(&v59, v6) )
        return 18LL;
    }
    v56 = *(_BYTE *)(v25 + 16);
    if ( (v56 & 4) == 0 || SHIDWORD(v62) < SHIDWORD(v65) )
      return 7LL;
    if ( (v56 & 2) != 0 )
    {
      v57 = SizeBoxHwnd(v28);
      if ( v5 >= SDWORD2(v65) )
      {
        v58 = v57 != 0 ? 0xD : 0;
        return (unsigned int)(v58 + 4);
      }
      if ( (*(_BYTE *)(v25 + 26) & 0x40) != 0 && v5 < (int)v65 )
      {
        v58 = v57 != 0 ? 0xC : 0;
        return (unsigned int)(v58 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v25 + 28),
                          *(_DWORD *)(v25 + 24),
                          v27,
                          v28,
                          WindowDpiLastNotify);
  v30 = -WindowBordersForDpi;
  v31 = *(_DWORD **)(v61 + 40);
  v32 = v31[22] + WindowBordersForDpi;
  v15 = v30 + v31[24];
  v16 = v31[23] - v30;
  HIDWORD(v59) = v30 + v31[25];
  v63 = HIDWORD(v59);
  v60 = v32;
  LODWORD(v59) = v32;
  *(_QWORD *)((char *)&v59 + 4) = __PAIR64__(v15, v16);
  if ( PtInRect(&v59, v6) )
  {
    v18 = HIDWORD(v62);
    if ( SHIDWORD(v62) >= (int)v64 )
      return 0LL;
    if ( (*(_BYTE *)(v17 + 30) & 0xC0) != 0xC0 )
    {
      if ( (*(_BYTE *)(v17 + 16) & 1) == 0 )
        return 0LL;
      return 5LL;
    }
LABEL_97:
    if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
      v5 = *(_DWORD *)(v17 + 88) + *(_DWORD *)(v17 + 96) - v5;
    if ( v18 >= v16 )
    {
      v44 = *(unsigned __int16 *)(gpsi + 6998LL);
      if ( *(char *)(v17 + 24) >= 0 )
      {
        if ( WindowDpiLastNotify == v44 )
        {
          v50 = *(_DWORD *)(gpsi + 2292LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v50 = *(_DWORD *)(gpsi + 2412LL);
        }
        else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        {
          v50 = ScaleSystemMetricForDPIWithoutCache(2LL, WindowDpiLastNotify);
        }
        else
        {
          v50 = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
        }
        v46 = v50 + v16;
        v49 = v50 + v16;
        if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v47 = *(_DWORD *)(gpsi + 2332LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v47 = *(_DWORD *)(gpsi + 2452LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
            v51 = ScaleSystemMetricForDPIWithoutCache(12LL, WindowDpiLastNotify);
          else
            v51 = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
          v47 = v51;
        }
      }
      else
      {
        if ( WindowDpiLastNotify == v44 )
        {
          v45 = *(_DWORD *)(gpsi + 2372LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v45 = *(_DWORD *)(gpsi + 2492LL);
        }
        else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        {
          v45 = ScaleSystemMetricForDPIWithoutCache(22LL, WindowDpiLastNotify);
        }
        else
        {
          v45 = GetDpiDependentMetric(22LL, WindowDpiLastNotify);
        }
        v46 = v45 + v16;
        if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v47 = *(_DWORD *)(gpsi + 2376LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v47 = *(_DWORD *)(gpsi + 2496LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
            v48 = ScaleSystemMetricForDPIWithoutCache(23LL, WindowDpiLastNotify);
          else
            v48 = GetDpiDependentMetric(23LL, WindowDpiLastNotify);
          v47 = v48;
        }
        v49 = v46;
      }
      if ( SHIDWORD(v62) >= v49 && (*(_BYTE *)(*(_QWORD *)(v61 + 40) + 16LL) & 1) != 0 )
        return 5LL;
      if ( v5 >= v60 && v5 < v15 && SHIDWORD(v62) < v46 )
      {
        v52 = *(_BYTE **)(v61 + 40);
        v53 = v52[30];
        if ( (v53 & 8) != 0 )
        {
          if ( v5 < v47 + v60 )
            return (unsigned int)((unsigned int)HasCaptionIcon(v61) != 0) + 2;
        }
        else if ( (v52[21] & 2) != 0 )
        {
          return 2LL;
        }
        v54 = v15 - v47;
        if ( v5 >= v54 )
          return 20LL;
        if ( (char)v52[24] >= 0 )
        {
          if ( (v53 & 3) != 0 )
          {
            v55 = v54 - v47;
            if ( v5 >= v55 )
              return 9LL;
            if ( v5 >= v55 - v47 )
              return 8LL;
          }
          else if ( (v52[25] & 4) != 0 && v5 >= v54 - v47 )
          {
            return 21LL;
          }
        }
      }
    }
    return 2LL;
  }
  v33 = *(_BYTE *)(v17 + 30);
  if ( (v33 & 4) == 0 )
  {
    if ( ((unsigned __int8)~(v33 >> 6) & (unsigned __int8)~(*(_BYTE *)(v17 + 21) >> 1) & 1) == 0
      || (*(_BYTE *)(v17 + 24) & 1) != 0 )
    {
      return 18LL;
    }
    return 0LL;
  }
  v34 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( *(char *)(v17 + 24) >= 0 )
  {
    if ( WindowDpiLastNotify == v34 )
    {
      v35 = *(_DWORD *)(gpsi + 2336LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v35 = *(_DWORD *)(gpsi + 2456LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        v40 = ScaleSystemMetricForDPIWithoutCache(13LL, WindowDpiLastNotify);
      else
        v40 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
      v35 = v40;
    }
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v37 = *(_DWORD *)(gpsi + 2332LL);
      goto LABEL_84;
    }
    if ( WindowDpiLastNotify == 96 )
    {
      v37 = *(_DWORD *)(gpsi + 2452LL);
      goto LABEL_84;
    }
    DpiCacheSlot = GetDpiCacheSlot(WindowDpiLastNotify);
    v39 = 12LL;
    goto LABEL_81;
  }
  if ( WindowDpiLastNotify == v34 )
  {
    v35 = *(_DWORD *)(gpsi + 2380LL);
  }
  else if ( WindowDpiLastNotify == 96 )
  {
    v35 = *(_DWORD *)(gpsi + 2500LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
      v36 = ScaleSystemMetricForDPIWithoutCache(24LL, WindowDpiLastNotify);
    else
      v36 = GetDpiDependentMetric(24LL, WindowDpiLastNotify);
    v35 = v36;
  }
  if ( WindowDpiLastNotify != *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    if ( WindowDpiLastNotify == 96 )
    {
      v37 = *(_DWORD *)(gpsi + 2496LL);
      goto LABEL_84;
    }
    DpiCacheSlot = GetDpiCacheSlot(WindowDpiLastNotify);
    v39 = 23LL;
LABEL_81:
    if ( DpiCacheSlot == -1 )
      v37 = ScaleSystemMetricForDPIWithoutCache(v39, WindowDpiLastNotify);
    else
      v37 = GetDpiDependentMetric(v39, WindowDpiLastNotify);
    goto LABEL_84;
  }
  v37 = *(_DWORD *)(gpsi + 2376LL);
LABEL_84:
  v41 = -v37;
  v42 = -v35;
  v43 = v41 + v15;
  if ( SHIDWORD(v62) >= v16 - v42 )
  {
    if ( SHIDWORD(v62) >= v42 + v63 )
      v3 = 6;
  }
  else
  {
    v3 = 3;
  }
  if ( v5 >= v60 - v41 )
  {
    if ( v5 >= v43 )
      v3 += 2;
  }
  else
  {
    ++v3;
  }
  return (unsigned int)(v3 + 9);
}
