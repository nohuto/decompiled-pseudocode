/*
 * XREFs of FindNCHit @ 0x1C0108614
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C004AB30 (_HasCaptionIcon.c)
 *     GetWindowBordersForDpi @ 0x1C012DCF8 (GetWindowBordersForDpi.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     SizeBoxHwnd @ 0x1C025937C (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // esi
  unsigned int WindowDpiLastNotify; // r13d
  int v6; // r14d
  unsigned __int64 v7; // rbx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int128 v10; // xmm6
  _BYTE *v11; // r8
  __int64 v13; // rax
  int v14; // eax
  int v15; // r13d
  int v16; // edi
  int v17; // r12d
  __int64 v18; // r8
  int v19; // r9d
  int v20; // r12d
  char v21; // di
  int v22; // eax
  char v23; // cl
  int v24; // edi
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // r9d
  int WindowBordersForDpi; // eax
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int8 v32; // cl
  int v33; // eax
  __int64 v34; // rcx
  int v35; // ebx
  int v36; // eax
  int v37; // r13d
  unsigned int v38; // ebx
  __int64 v39; // rcx
  int DpiDependentMetric; // eax
  _BYTE *v41; // rcx
  char v42; // dl
  int v43; // edi
  int v44; // edi
  char v45; // al
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // [rsp+38h] [rbp-49h]
  int v49; // [rsp+38h] [rbp-49h]
  char v50; // [rsp+3Ch] [rbp-45h]
  __int128 v51; // [rsp+48h] [rbp-39h] BYREF
  __int64 v52; // [rsp+58h] [rbp-29h]
  unsigned __int64 v53; // [rsp+60h] [rbp-21h]
  int v54; // [rsp+68h] [rbp-19h] BYREF
  int v55; // [rsp+6Ch] [rbp-15h]
  int v56; // [rsp+70h] [rbp-11h]
  int v57; // [rsp+74h] [rbp-Dh]
  __int64 v58; // [rsp+78h] [rbp-9h]
  __int128 v59; // [rsp+88h] [rbp+7h] BYREF

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  v51 = 0uLL;
  v55 = 0;
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
  HIDWORD(v53) = SHIWORD(a2);
  LODWORD(v53) = (__int16)a2;
  v7 = v53;
  v48 = WindowDpiLastNotify;
  if ( !PtInRect(v2 + 22, v53) )
    return 0LL;
  if ( (*(_BYTE *)(v9 + 31) & 0x20) != 0 )
  {
    v14 = v8[3] - 4;
    v15 = *v8 + 4;
    v16 = v8[2] - 4;
    v17 = v8[1] + 4;
    v54 = v15;
    v56 = v16;
    v55 = v17;
    v57 = v14;
    if ( !PtInRect(&v54, v53) )
      return 2LL;
LABEL_47:
    if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
      v6 = *(_DWORD *)(v18 + 88) + *(_DWORD *)(v18 + 96) - v6;
    if ( v19 >= v17 )
    {
      v38 = v48;
      if ( *(char *)(v18 + 24) >= 0 )
      {
        LODWORD(v52) = 12;
        v39 = 2LL;
      }
      else
      {
        LODWORD(v52) = 23;
        v39 = 22LL;
      }
      v49 = v17 + GetDpiDependentMetric(v39, v48);
      DpiDependentMetric = GetDpiDependentMetric((unsigned int)v52, v38);
      if ( SHIDWORD(v53) >= v49 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 1) != 0 )
        return 5LL;
      if ( v6 >= v15 && v6 < v16 && SHIDWORD(v53) < v49 )
      {
        v41 = *(_BYTE **)(a1 + 40);
        v42 = v41[30];
        if ( (v42 & 8) != 0 )
        {
          if ( v6 < DpiDependentMetric + v15 )
          {
            if ( (unsigned int)HasCaptionIcon(a1) )
              return 3LL;
            return 2LL;
          }
        }
        else if ( (v41[21] & 2) != 0 )
        {
          return 2LL;
        }
        v43 = v16 - DpiDependentMetric;
        if ( v6 >= v43 )
          return 20LL;
        if ( (char)v41[24] >= 0 )
        {
          if ( (v42 & 3) != 0 )
          {
            v44 = v43 - DpiDependentMetric;
            if ( v6 >= v44 )
              return 9LL;
            if ( v6 >= v44 - DpiDependentMetric )
              return 8LL;
          }
          else if ( (v41[25] & 4) != 0 && v6 >= v43 - DpiDependentMetric )
          {
            return 21LL;
          }
        }
      }
    }
    return 2LL;
  }
  v10 = *(_OWORD *)(v9 + 104);
  v59 = v10;
  if ( PtInRect(&v59, v53) )
    return 1LL;
  v50 = v11[25];
  if ( (v50 & 2) != 0 )
  {
    LODWORD(v51) = v59 - 2;
    v20 = HIDWORD(v59) + 2;
    v58 = (unsigned int)(DWORD1(v59) - 2);
    HIDWORD(v51) = HIDWORD(v59) + 2;
    DWORD2(v51) = DWORD2(v59) + 2;
    DWORD1(v51) = DWORD1(v59) - 2;
  }
  else
  {
    v51 = v10;
    v20 = HIDWORD(v10);
    v58 = DWORD1(v10);
  }
  if ( (v11[16] & 2) != 0 )
  {
    v21 = v11[26];
    v22 = GetDpiDependentMetric(0LL, WindowDpiLastNotify);
    v23 = v21 ^ v50;
    v24 = v51;
    if ( (v23 & 0x40) != 0 )
    {
      v24 = v51 - v22;
      LODWORD(v51) = v51 - v22;
    }
    else
    {
      DWORD2(v51) += v22;
    }
  }
  else
  {
    v24 = v51;
  }
  v52 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v52 + 16) & 4) != 0 )
  {
    v25 = GetDpiDependentMetric(1LL, WindowDpiLastNotify);
    v26 = *(_QWORD *)(a1 + 40);
    v20 += v25;
    HIDWORD(v51) = v20;
    v52 = v26;
  }
  if ( PtInRect(&v51, v53) )
  {
    if ( (*(_BYTE *)(v27 + 25) & 2) != 0 )
    {
      DWORD2(v51) -= 2;
      DWORD1(v51) = v58 + 2;
      LODWORD(v51) = v24 + 2;
      HIDWORD(v51) = v20 - 2;
      if ( !PtInRect(&v51, v7) )
        return 18LL;
    }
    v45 = *(_BYTE *)(v27 + 16);
    if ( (v45 & 4) == 0 || SHIDWORD(v53) < SHIDWORD(v59) )
      return 7LL;
    if ( (v45 & 2) != 0 )
    {
      v46 = SizeBoxHwnd(a1);
      if ( v6 >= SDWORD2(v59) )
      {
        v47 = v46 != 0 ? 0xD : 0;
        return (unsigned int)(v47 + 4);
      }
      if ( (*(_BYTE *)(v52 + 26) & 0x40) != 0 && v6 < (int)v59 )
      {
        v47 = v46 != 0 ? 0xC : 0;
        return (unsigned int)(v47 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v27 + 28),
                          *(_DWORD *)(v27 + 24),
                          v27,
                          v28,
                          WindowDpiLastNotify);
  v30 = *(_DWORD **)(a1 + 40);
  v15 = WindowBordersForDpi + v30[22];
  v16 = v30[24] - WindowBordersForDpi;
  v17 = WindowBordersForDpi + v30[23];
  v54 = v15;
  v31 = v30[25] - WindowBordersForDpi;
  v56 = v16;
  LODWORD(v52) = v31;
  v57 = v31;
  v55 = v17;
  if ( PtInRect(&v54, v7) )
  {
    v19 = HIDWORD(v53);
    if ( SHIDWORD(v53) >= (int)v58 )
      return 0LL;
    if ( (*(_BYTE *)(v18 + 30) & 0xC0) != 0xC0 )
    {
      if ( (*(_BYTE *)(v18 + 16) & 1) != 0 )
        return 5LL;
      return 0LL;
    }
    goto LABEL_47;
  }
  v32 = *(_BYTE *)(v18 + 30);
  if ( (v32 & 4) == 0 )
  {
    if ( ((unsigned __int8)~(v32 >> 6) & (unsigned __int8)~(*(_BYTE *)(v18 + 21) >> 1) & 1) != 0
      && (*(_BYTE *)(v18 + 24) & 1) == 0 )
    {
      return 0LL;
    }
    return 18LL;
  }
  if ( *(char *)(v18 + 24) >= 0 )
  {
    v33 = GetDpiDependentMetric(13LL, v48);
    v34 = 12LL;
  }
  else
  {
    v33 = GetDpiDependentMetric(24LL, v48);
    v34 = 23LL;
  }
  v35 = -v33;
  v36 = -(int)GetDpiDependentMetric(v34, v48);
  v37 = v15 - v36;
  if ( SHIDWORD(v53) >= v17 - v35 )
  {
    if ( SHIDWORD(v53) >= v35 + (int)v52 )
      v3 = 6;
  }
  else
  {
    v3 = 3;
  }
  if ( v6 >= v37 )
  {
    if ( v6 >= v16 + v36 )
      v3 += 2;
  }
  else
  {
    ++v3;
  }
  return (unsigned int)(v3 + 9);
}
