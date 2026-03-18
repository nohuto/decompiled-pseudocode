/*
 * XREFs of FindNCHit @ 0x1C012D5D8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     GetWindowBordersForDpi @ 0x1C0092084 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00A9364 (GetDpiCacheSlot.c)
 *     _HasCaptionIcon @ 0x1C00A9D50 (_HasCaptionIcon.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCD30 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     SizeBoxHwnd @ 0x1C0259ABC (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // r14d
  __int64 v4; // r13
  unsigned int WindowDpiLastNotify; // edi
  int v6; // r15d
  unsigned __int64 v7; // rbx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int128 v10; // xmm6
  _BYTE *v11; // r8
  __int64 v13; // rax
  int v14; // eax
  int v15; // esi
  int v16; // r12d
  __int64 v17; // r8
  int v18; // r10d
  unsigned __int8 v19; // dl
  __int64 v20; // r12
  int v21; // esi
  bool v22; // zf
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // r13
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  int WindowBordersForDpi; // eax
  _DWORD *v31; // r8
  int v32; // r12d
  int v33; // eax
  unsigned __int8 v34; // cl
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  int DpiCacheSlot; // eax
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // ebx
  int v44; // esi
  int v45; // eax
  int v46; // eax
  int v47; // ebx
  __int64 v48; // rdx
  unsigned int v49; // eax
  int v50; // r12d
  int DpiDependentMetric; // eax
  unsigned int v52; // eax
  _BYTE *v53; // rcx
  int v54; // esi
  int v55; // esi
  char v56; // al
  __int64 v57; // rax
  int v58; // eax
  __int128 v59; // [rsp+38h] [rbp-39h] BYREF
  int v60; // [rsp+48h] [rbp-29h]
  __int64 v61; // [rsp+50h] [rbp-21h]
  unsigned __int64 v62; // [rsp+58h] [rbp-19h]
  int v63; // [rsp+60h] [rbp-11h] BYREF
  int v64; // [rsp+64h] [rbp-Dh]
  int v65; // [rsp+68h] [rbp-9h]
  int v66; // [rsp+6Ch] [rbp-5h]
  __int128 v67; // [rsp+78h] [rbp+7h] BYREF
  __int64 v68; // [rsp+88h] [rbp+17h]

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  v61 = a1;
  v4 = a1;
  v64 = 0;
  v59 = 0uLL;
  if ( (v2[58] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (v2[72] & 0xF) == 0
         && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
  }
  v6 = (__int16)a2;
  HIDWORD(v62) = SHIWORD(a2);
  LODWORD(v62) = (__int16)a2;
  v7 = v62;
  if ( !PtInRect(v2 + 22, v62) )
    return 0LL;
  if ( (*(_BYTE *)(v9 + 31) & 0x20) != 0 )
  {
    v14 = v8[3] - 4;
    v15 = v8[2] - 4;
    v16 = v8[1] + 4;
    v60 = *v8 + 4;
    v63 = v60;
    v65 = v15;
    v64 = v16;
    v66 = v14;
    if ( !PtInRect(&v63, v62) )
      return 2LL;
LABEL_94:
    if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 )
      v6 = *(_DWORD *)(v17 + 88) + *(_DWORD *)(v17 + 96) - v6;
    if ( v18 >= v16 )
    {
      v45 = *(unsigned __int16 *)(gpsi + 6998LL);
      if ( *(char *)(v17 + 24) >= 0 )
      {
        if ( WindowDpiLastNotify == v45 )
        {
          DpiDependentMetric = *(_DWORD *)(gpsi + 2292LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          DpiDependentMetric = *(_DWORD *)(gpsi + 2412LL);
        }
        else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        {
          DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(2LL, WindowDpiLastNotify);
        }
        else
        {
          DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
        }
        v47 = DpiDependentMetric + v16;
        v50 = DpiDependentMetric + v16;
        if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v48 = *(unsigned int *)(gpsi + 2332LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v48 = *(unsigned int *)(gpsi + 2452LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
            v52 = ScaleSystemMetricForDPIWithoutCache(12LL, WindowDpiLastNotify);
          else
            v52 = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
          v48 = v52;
        }
      }
      else
      {
        if ( WindowDpiLastNotify == v45 )
        {
          v46 = *(_DWORD *)(gpsi + 2372LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v46 = *(_DWORD *)(gpsi + 2492LL);
        }
        else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        {
          v46 = ScaleSystemMetricForDPIWithoutCache(22LL, WindowDpiLastNotify);
        }
        else
        {
          v46 = GetDpiDependentMetric(22LL, WindowDpiLastNotify);
        }
        v47 = v46 + v16;
        if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v48 = *(unsigned int *)(gpsi + 2376LL);
        }
        else if ( WindowDpiLastNotify == 96 )
        {
          v48 = *(unsigned int *)(gpsi + 2496LL);
        }
        else
        {
          if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
            v49 = ScaleSystemMetricForDPIWithoutCache(23LL, WindowDpiLastNotify);
          else
            v49 = GetDpiDependentMetric(23LL, WindowDpiLastNotify);
          v48 = v49;
        }
        v50 = v47;
      }
      if ( SHIDWORD(v62) >= v50 && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 16LL) & 1) != 0 )
        return 5LL;
      if ( v6 >= v60 && v6 < v15 && SHIDWORD(v62) < v47 )
      {
        v53 = *(_BYTE **)(v4 + 40);
        LOBYTE(v17) = v53[30];
        if ( (v17 & 8) != 0 )
        {
          if ( v6 < (int)v48 + v60 )
          {
            if ( (unsigned int)HasCaptionIcon(v4, v48, v17, HIDWORD(v62)) )
              return 3LL;
            return 2LL;
          }
        }
        else if ( (v53[21] & 2) != 0 )
        {
          return 2LL;
        }
        v54 = v15 - v48;
        if ( v6 >= v54 )
          return 20LL;
        if ( (char)v53[24] >= 0 )
        {
          if ( (v17 & 3) != 0 )
          {
            v55 = v54 - v48;
            if ( v6 >= v55 )
              return 9LL;
            if ( v6 >= v55 - (int)v48 )
              return 8LL;
          }
          else if ( (v53[25] & 4) != 0 && v6 >= v54 - (int)v48 )
          {
            return 21LL;
          }
        }
      }
    }
    return 2LL;
  }
  v10 = *(_OWORD *)(v9 + 104);
  v67 = v10;
  if ( PtInRect(&v67, v62) )
    return 1LL;
  v19 = v11[25];
  if ( (v19 & 2) != 0 )
  {
    v20 = (unsigned int)(DWORD1(v67) - 2);
    DWORD1(v59) = DWORD1(v67) - 2;
    LODWORD(v59) = v67 - 2;
    v21 = HIDWORD(v67) + 2;
    HIDWORD(v59) = HIDWORD(v67) + 2;
    DWORD2(v59) = DWORD2(v67) + 2;
  }
  else
  {
    v59 = v10;
    v21 = HIDWORD(v10);
    v20 = DWORD1(v10);
  }
  v22 = (v11[16] & 2) == 0;
  v68 = v20;
  if ( !v22 )
  {
    v23 = *(unsigned __int16 *)(gpsi + 6998LL);
    if ( ((v19 ^ v11[26]) & 0x40) != 0 )
    {
      if ( WindowDpiLastNotify == v23 )
      {
        v24 = *(_DWORD *)(gpsi + 2284LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v24 = *(_DWORD *)(gpsi + 2404LL);
      }
      else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
      {
        v24 = ScaleSystemMetricForDPIWithoutCache(0LL, WindowDpiLastNotify);
      }
      else
      {
        v24 = GetDpiDependentMetric(0LL, WindowDpiLastNotify);
      }
      LODWORD(v59) = v59 - v24;
    }
    else
    {
      if ( WindowDpiLastNotify == v23 )
      {
        v25 = *(_DWORD *)(gpsi + 2284LL);
      }
      else if ( WindowDpiLastNotify == 96 )
      {
        v25 = *(_DWORD *)(gpsi + 2404LL);
      }
      else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
      {
        v25 = ScaleSystemMetricForDPIWithoutCache(0LL, WindowDpiLastNotify);
      }
      else
      {
        v25 = GetDpiDependentMetric(0LL, WindowDpiLastNotify);
      }
      DWORD2(v59) += v25;
    }
  }
  v26 = *(_QWORD *)(v4 + 40);
  if ( (*(_BYTE *)(v26 + 16) & 4) != 0 )
  {
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v27 = *(_DWORD *)(gpsi + 2288LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v27 = *(_DWORD *)(gpsi + 2408LL);
    }
    else if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
    {
      v27 = ScaleSystemMetricForDPIWithoutCache(1LL, WindowDpiLastNotify);
    }
    else
    {
      v27 = GetDpiDependentMetric(1LL, WindowDpiLastNotify);
    }
    v21 += v27;
    HIDWORD(v59) = v21;
    v26 = *(_QWORD *)(v61 + 40);
  }
  if ( PtInRect(&v59, v62) )
  {
    if ( (*(_BYTE *)(v26 + 25) & 2) != 0 )
    {
      LODWORD(v59) = v59 + 2;
      DWORD2(v59) -= 2;
      DWORD1(v59) = v20 + 2;
      HIDWORD(v59) = v21 - 2;
      if ( !PtInRect(&v59, v7) )
        return 18LL;
    }
    v56 = *(_BYTE *)(v26 + 16);
    if ( (v56 & 4) == 0 || SHIDWORD(v62) < SHIDWORD(v67) )
      return 7LL;
    if ( (v56 & 2) != 0 )
    {
      v57 = SizeBoxHwnd(v28);
      if ( v6 >= SDWORD2(v67) )
      {
        v58 = v57 != 0 ? 0xD : 0;
        return (unsigned int)(v58 + 4);
      }
      if ( (*(_BYTE *)(v26 + 26) & 0x40) != 0 && v6 < (int)v67 )
      {
        v58 = v57 != 0 ? 0xC : 0;
        return (unsigned int)(v58 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v26 + 28),
                          *(unsigned int *)(v26 + 24),
                          v28,
                          v29,
                          WindowDpiLastNotify);
  v4 = v61;
  v31 = *(_DWORD **)(v61 + 40);
  v32 = v31[23];
  v15 = v31[24] - WindowBordersForDpi;
  v60 = WindowBordersForDpi + v31[22];
  v16 = WindowBordersForDpi + v32;
  v63 = v60;
  v33 = v31[25] - WindowBordersForDpi;
  v65 = v15;
  LODWORD(v61) = v33;
  v66 = v33;
  v64 = v16;
  if ( PtInRect(&v63, v7) )
  {
    v18 = HIDWORD(v62);
    if ( SHIDWORD(v62) >= (int)v68 )
      return 0LL;
    if ( (*(_BYTE *)(v17 + 30) & 0xC0) != 0xC0 )
    {
      if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
        return 5LL;
      return 0LL;
    }
    goto LABEL_94;
  }
  v34 = *(_BYTE *)(v17 + 30);
  if ( (v34 & 4) == 0 )
  {
    if ( ((unsigned __int8)~(v34 >> 6) & (unsigned __int8)~(*(_BYTE *)(v17 + 21) >> 1) & 1) != 0
      && (*(_BYTE *)(v17 + 24) & 1) == 0 )
    {
      return 0LL;
    }
    return 18LL;
  }
  v35 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( *(char *)(v17 + 24) >= 0 )
  {
    if ( WindowDpiLastNotify == v35 )
    {
      v36 = *(_DWORD *)(gpsi + 2336LL);
    }
    else if ( WindowDpiLastNotify == 96 )
    {
      v36 = *(_DWORD *)(gpsi + 2456LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
        v41 = ScaleSystemMetricForDPIWithoutCache(13LL, WindowDpiLastNotify);
      else
        v41 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
      v36 = v41;
    }
    if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v38 = *(_DWORD *)(gpsi + 2332LL);
      goto LABEL_81;
    }
    if ( WindowDpiLastNotify == 96 )
    {
      v38 = *(_DWORD *)(gpsi + 2452LL);
      goto LABEL_81;
    }
    DpiCacheSlot = GetDpiCacheSlot(WindowDpiLastNotify);
    v40 = 12LL;
    goto LABEL_78;
  }
  if ( WindowDpiLastNotify == v35 )
  {
    v36 = *(_DWORD *)(gpsi + 2380LL);
  }
  else if ( WindowDpiLastNotify == 96 )
  {
    v36 = *(_DWORD *)(gpsi + 2500LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
      v37 = ScaleSystemMetricForDPIWithoutCache(24LL, WindowDpiLastNotify);
    else
      v37 = GetDpiDependentMetric(24LL, WindowDpiLastNotify);
    v36 = v37;
  }
  if ( WindowDpiLastNotify != *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    if ( WindowDpiLastNotify == 96 )
    {
      v38 = *(_DWORD *)(gpsi + 2496LL);
      goto LABEL_81;
    }
    DpiCacheSlot = GetDpiCacheSlot(WindowDpiLastNotify);
    v40 = 23LL;
LABEL_78:
    if ( DpiCacheSlot == -1 )
      v38 = ScaleSystemMetricForDPIWithoutCache(v40, WindowDpiLastNotify);
    else
      v38 = GetDpiDependentMetric(v40, WindowDpiLastNotify);
    goto LABEL_81;
  }
  v38 = *(_DWORD *)(gpsi + 2376LL);
LABEL_81:
  v42 = -v38;
  v43 = -v36;
  v44 = v42 + v15;
  if ( SHIDWORD(v62) >= v16 - v43 )
  {
    if ( SHIDWORD(v62) >= v43 + (int)v61 )
      v3 = 6;
  }
  else
  {
    v3 = 3;
  }
  if ( v6 >= v60 - v42 )
  {
    if ( v6 >= v44 )
      v3 += 2;
  }
  else
  {
    ++v3;
  }
  return (unsigned int)(v3 + 9);
}
