/*
 * XREFs of FindNCHit @ 0x1C0123470
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01EA5F8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C002142C (_HasCaptionIcon.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C00AC334 (GetWindowBordersForDpi.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     SizeBoxHwnd @ 0x1C0240DA0 (SizeBoxHwnd.c)
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
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r9
  int WindowBordersForDpi; // eax
  _DWORD *v31; // r8
  unsigned __int8 v32; // cl
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // ebx
  int v37; // eax
  int v38; // r13d
  unsigned int v39; // ebx
  __int64 v40; // rcx
  __int64 v41; // r8
  int DpiDependentMetric; // eax
  _BYTE *v43; // rcx
  char v44; // dl
  int v45; // edi
  int v46; // edi
  char v47; // al
  __int64 v48; // rax
  int v49; // eax
  unsigned int v50; // [rsp+38h] [rbp-39h]
  int v51; // [rsp+38h] [rbp-39h]
  char v52; // [rsp+3Ch] [rbp-35h]
  __int128 v53; // [rsp+48h] [rbp-29h] BYREF
  __int64 v54; // [rsp+58h] [rbp-19h]
  unsigned __int64 v55; // [rsp+60h] [rbp-11h]
  __int64 v56; // [rsp+68h] [rbp-9h]
  __int128 v57; // [rsp+78h] [rbp+7h] BYREF

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  if ( (v2[58] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (v2[72] & 0xF) == 0
         && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
  }
  v6 = (__int16)a2;
  HIDWORD(v55) = SHIWORD(a2);
  LODWORD(v55) = (__int16)a2;
  v7 = v55;
  v50 = WindowDpiLastNotify;
  if ( !PtInRect(v2 + 22, v55) )
    return 0LL;
  if ( (*(_BYTE *)(v9 + 31) & 0x20) != 0 )
  {
    v14 = v8[3] - 4;
    v15 = *v8 + 4;
    v16 = v8[2] - 4;
    v17 = v8[1] + 4;
    LODWORD(v53) = v15;
    *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v16, v17);
    HIDWORD(v53) = v14;
    if ( !PtInRect(&v53, v55) )
      return 2LL;
LABEL_47:
    if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
      v6 = *(_DWORD *)(v18 + 88) + *(_DWORD *)(v18 + 96) - v6;
    if ( v19 >= v17 )
    {
      v39 = v50;
      if ( *(char *)(v18 + 24) >= 0 )
      {
        LODWORD(v54) = 12;
        v40 = 2LL;
      }
      else
      {
        LODWORD(v54) = 23;
        v40 = 22LL;
      }
      v51 = v17 + GetDpiDependentMetric(v40, v50, v18);
      DpiDependentMetric = GetDpiDependentMetric((unsigned int)v54, v39, v41);
      if ( SHIDWORD(v55) >= v51 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 1) != 0 )
        return 5LL;
      if ( v6 >= v15 && v6 < v16 && SHIDWORD(v55) < v51 )
      {
        v43 = *(_BYTE **)(a1 + 40);
        v44 = v43[30];
        if ( (v44 & 8) != 0 )
        {
          if ( v6 < DpiDependentMetric + v15 )
          {
            if ( (unsigned int)HasCaptionIcon(a1) )
              return 3LL;
            return 2LL;
          }
        }
        else if ( (v43[21] & 2) != 0 )
        {
          return 2LL;
        }
        v45 = v16 - DpiDependentMetric;
        if ( v6 >= v45 )
          return 20LL;
        if ( (char)v43[24] >= 0 )
        {
          if ( (v44 & 3) != 0 )
          {
            v46 = v45 - DpiDependentMetric;
            if ( v6 >= v46 )
              return 9LL;
            if ( v6 >= v46 - DpiDependentMetric )
              return 8LL;
          }
          else if ( (v43[25] & 4) != 0 && v6 >= v45 - DpiDependentMetric )
          {
            return 21LL;
          }
        }
      }
    }
    return 2LL;
  }
  v10 = *(_OWORD *)(v9 + 104);
  v57 = v10;
  if ( PtInRect(&v57, v55) )
    return 1LL;
  v52 = v11[25];
  if ( (v52 & 2) != 0 )
  {
    LODWORD(v53) = v57 - 2;
    v20 = HIDWORD(v57) + 2;
    v56 = (unsigned int)(DWORD1(v57) - 2);
    HIDWORD(v53) = HIDWORD(v57) + 2;
    DWORD2(v53) = DWORD2(v57) + 2;
    DWORD1(v53) = DWORD1(v57) - 2;
  }
  else
  {
    v53 = v10;
    v20 = HIDWORD(v10);
    v56 = DWORD1(v10);
  }
  if ( (v11[16] & 2) != 0 )
  {
    v21 = v11[26];
    v22 = GetDpiDependentMetric(0LL, WindowDpiLastNotify, (__int64)v11);
    v23 = v21 ^ v52;
    v24 = v53;
    if ( (v23 & 0x40) != 0 )
    {
      v24 = v53 - v22;
      LODWORD(v53) = v53 - v22;
    }
    else
    {
      DWORD2(v53) += v22;
    }
  }
  else
  {
    v24 = v53;
  }
  v25 = *(_QWORD *)(a1 + 40);
  v54 = v25;
  if ( (*(_BYTE *)(v25 + 16) & 4) != 0 )
  {
    v26 = GetDpiDependentMetric(1LL, WindowDpiLastNotify, v25);
    v27 = *(_QWORD *)(a1 + 40);
    v20 += v26;
    HIDWORD(v53) = v20;
    v54 = v27;
  }
  if ( PtInRect(&v53, v55) )
  {
    if ( (*(_BYTE *)(v28 + 25) & 2) != 0 )
    {
      DWORD2(v53) -= 2;
      DWORD1(v53) = v56 + 2;
      LODWORD(v53) = v24 + 2;
      HIDWORD(v53) = v20 - 2;
      if ( !PtInRect(&v53, v7) )
        return 18LL;
    }
    v47 = *(_BYTE *)(v28 + 16);
    if ( (v47 & 4) == 0 || SHIDWORD(v55) < SHIDWORD(v57) )
      return 7LL;
    if ( (v47 & 2) != 0 )
    {
      v48 = SizeBoxHwnd(a1);
      if ( v6 >= SDWORD2(v57) )
      {
        v49 = v48 != 0 ? 0xD : 0;
        return (unsigned int)(v49 + 4);
      }
      if ( (*(_BYTE *)(v54 + 26) & 0x40) != 0 && v6 < (int)v57 )
      {
        v49 = v48 != 0 ? 0xC : 0;
        return (unsigned int)(v49 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v28 + 28),
                          *(_DWORD *)(v28 + 24),
                          v28,
                          v29,
                          WindowDpiLastNotify);
  v31 = *(_DWORD **)(a1 + 40);
  v15 = WindowBordersForDpi + v31[22];
  v16 = v31[24] - WindowBordersForDpi;
  v17 = WindowBordersForDpi + v31[23];
  LODWORD(v53) = v15;
  LODWORD(v54) = v31[25] - WindowBordersForDpi;
  HIDWORD(v53) = v54;
  *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v16, v17);
  if ( PtInRect(&v53, v7) )
  {
    v19 = HIDWORD(v55);
    if ( SHIDWORD(v55) >= (int)v56 )
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
    v33 = GetDpiDependentMetric(13LL, v50, v18);
    v35 = 12LL;
  }
  else
  {
    v33 = GetDpiDependentMetric(24LL, v50, v18);
    v35 = 23LL;
  }
  v36 = -v33;
  v37 = -(int)GetDpiDependentMetric(v35, v50, v34);
  v38 = v15 - v37;
  if ( SHIDWORD(v55) >= v17 - v36 )
  {
    if ( SHIDWORD(v55) >= v36 + (int)v54 )
      v3 = 6;
  }
  else
  {
    v3 = 3;
  }
  if ( v6 >= v38 )
  {
    if ( v6 >= v16 + v37 )
      v3 += 2;
  }
  else
  {
    ++v3;
  }
  return (unsigned int)(v3 + 9);
}
