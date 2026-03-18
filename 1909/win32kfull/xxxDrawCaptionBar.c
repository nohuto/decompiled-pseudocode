/*
 * XREFs of xxxDrawCaptionBar @ 0x1C012F140
 * Callers:
 *     xxxRedrawTitle @ 0x1C0017A40 (xxxRedrawTitle.c)
 *     xxxDrawWindowFrame @ 0x1C002E4B0 (xxxDrawWindowFrame.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 * Callees:
 *     IsVisible @ 0x1C002F1E0 (IsVisible.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C004A180 (xxxMNCanClose.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     IS_UI_LANGID @ 0x1C00EADCC (IS_UI_LANGID.c)
 *     DrawEdge @ 0x1C012B8CC (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     GetResizeBorderWidthForDpi @ 0x1C012C1DC (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C012C374 (GetWindowFrameMetricForDpi.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     GetWindowBorders @ 0x1C012DDEC (GetWindowBorders.c)
 *     DrawFrame @ 0x1C0157530 (DrawFrame.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(struct tagWND *a1, HDC a2, int a3)
{
  __int16 v4; // di
  HDC v5; // rbx
  int WindowFrameMetricForDpi; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // rcx
  char v16; // al
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  int right; // edi
  int top; // r14d
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // bl
  unsigned int v30; // edx
  int DpiDependentMetric; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // eax
  int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // r8d
  int v44; // eax
  BOOL v45; // ecx
  char v46; // r8
  int v47; // ecx
  __int16 *v48; // rax
  LONG v49; // edi
  unsigned int DpiForSystem; // eax
  unsigned int v51; // eax
  int v52; // ebx
  int v53; // ebx
  unsigned int v54; // r14d
  unsigned int v55; // edi
  unsigned int v56; // ebx
  char *OemBitmapInfoForDpi; // rax
  unsigned int v58; // r9d
  unsigned int v59; // edi
  unsigned int v60; // r8d
  bool v61; // cl
  unsigned int v62; // edi
  unsigned int v63; // eax
  int v64; // edx
  unsigned int v65; // edi
  int v66; // ecx
  int v68; // [rsp+30h] [rbp-99h]
  int v69; // [rsp+38h] [rbp-91h]
  int v70; // [rsp+60h] [rbp-69h]
  unsigned int v71; // [rsp+60h] [rbp-69h]
  unsigned int v72; // [rsp+60h] [rbp-69h]
  unsigned int v73; // [rsp+60h] [rbp-69h]
  int v74; // [rsp+64h] [rbp-65h]
  int v75; // [rsp+64h] [rbp-65h]
  unsigned int v76; // [rsp+64h] [rbp-65h]
  bool v77; // [rsp+68h] [rbp-61h]
  LONG v78; // [rsp+6Ch] [rbp-5Dh]
  int v79; // [rsp+6Ch] [rbp-5Dh]
  unsigned int v80; // [rsp+70h] [rbp-59h]
  int v81; // [rsp+74h] [rbp-55h]
  __int64 v82; // [rsp+78h] [rbp-51h]
  int v83; // [rsp+78h] [rbp-51h]
  HDC v85; // [rsp+80h] [rbp-49h]
  __int64 v87; // [rsp+90h] [rbp-39h]
  __int64 v88; // [rsp+98h] [rbp-31h]
  __int16 *v89; // [rsp+98h] [rbp-31h]
  LONG left; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v91; // [rsp+A4h] [rbp-25h]
  int v92; // [rsp+A8h] [rbp-21h]
  int v93; // [rsp+ACh] [rbp-1Dh]
  __int64 v94; // [rsp+B0h] [rbp-19h]
  unsigned int v95; // [rsp+B8h] [rbp-11h]
  int v96; // [rsp+BCh] [rbp-Dh]
  int v97; // [rsp+C0h] [rbp-9h]
  int v98; // [rsp+C4h] [rbp-5h]
  __int64 v99; // [rsp+C8h] [rbp-1h]
  struct tagRECT v100; // [rsp+D0h] [rbp+7h] BYREF

  v74 = 0;
  *(_QWORD *)&v100.left = 0LL;
  v4 = a3;
  *(_QWORD *)&v100.right = 0LL;
  v5 = a2;
  v88 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    WindowFrameMetricForDpi = IsVisible((__int64)a1);
    if ( !WindowFrameMetricForDpi )
      return WindowFrameMetricForDpi;
  }
  ClearHungFlag(a1, 0x310u);
  GetRect((__int64)a1, (__int64)&v100, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    if ( (v4 & 1) != 0 )
      v9 = *(_QWORD *)(gpsi + 4912LL);
    else
      v9 = *(_QWORD *)(gpsi + 4920LL);
    v81 = 32;
    goto LABEL_8;
  }
  v81 = 0;
  if ( (v4 & 1) == 0 )
  {
    v9 = *(_QWORD *)(gpsi + 4720LL);
LABEL_8:
    v82 = v9;
    goto LABEL_9;
  }
  v7 = *(_QWORD *)(gpsi + 4712LL);
  v82 = v7;
LABEL_9:
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v10 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v10 + 288) & 0xF) != 0
    || (v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
    || (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) == 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
LABEL_13:
    v80 = WindowDpiLastNotify;
    goto LABEL_14;
  }
  v80 = 96;
LABEL_14:
  v14 = 0;
  if ( !(unsigned int)xxxMNCanClose((__int64)a1, v7, v8) )
    v14 = 16;
  v15 = *((_QWORD *)a1 + 5);
  LOBYTE(v12) = *(_BYTE *)(v15 + 30);
  v16 = *(_BYTE *)(v15 + 31);
  if ( (v12 & 1) != 0 )
  {
    if ( (v16 & 1) != 0 )
      v14 |= 2u;
  }
  else
  {
    v14 |= 8u;
  }
  v17 = v16 & 0x20;
  if ( (v12 & 2) != 0 )
  {
    if ( !v17 )
      goto LABEL_21;
    v14 |= 1u;
  }
  else
  {
    v14 |= 4u;
  }
  if ( v17 )
  {
    if ( v4 < 0 )
    {
      DrawEdge(v5, &v100, 5, 8207);
      DrawFrame(v5);
      ++v100.left;
      right = v100.right - 1;
      top = v100.top + 1;
    }
    else
    {
      v100.left += 3;
      right = v100.right - 3;
      top = v100.top + 3;
    }
    v100.top = top;
    v100.right = right;
    DpiForSystem = GetDpiForSystem(v15, v12, v13);
    v78 = top + GetDpiDependentMetric(13LL, DpiForSystem);
    v100.bottom = v78;
    v88 = GreSelectBrush(v5, v82);
    goto LABEL_49;
  }
LABEL_21:
  if ( (*(_BYTE *)(v15 + 25) & 3) == 0 || (*(_BYTE *)(v15 + 20) & 8) != 0 )
    v87 = 4744LL;
  else
    v87 = 4816LL;
  if ( (v4 & 0x8000) == 0 )
  {
    WindowFrameMetricForDpi = -(int)GetWindowBorders(*(unsigned int *)(v15 + 28), *(unsigned int *)(v15 + 24), v13);
    v100.left -= WindowFrameMetricForDpi;
    right = WindowFrameMetricForDpi + v100.right;
    top = v100.top - WindowFrameMetricForDpi;
    goto LABEL_25;
  }
  v23 = GetDpiForSystem(v15, v12, v13);
  WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v24, v23);
  v18 = *((_QWORD *)a1 + 5);
  v25 = WindowFrameMetricForDpi;
  if ( (*(_BYTE *)(v18 + 25) & 1) != 0 )
  {
    v46 = 5;
  }
  else
  {
    if ( (*(_BYTE *)(v18 + 26) & 2) == 0 )
      goto LABEL_31;
    v46 = 2;
  }
  LOBYTE(WindowFrameMetricForDpi) = DrawEdge(v5, &v100, v46, 8207);
LABEL_31:
  v26 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v26 + 30) & 4) == 0
    && (v25 <= 0
     || (v18 = *(unsigned int *)(v26 + 28),
         LOBYTE(WindowFrameMetricForDpi) = (v18 & 0x40000) == 0,
         (((v18 & 0xC00000) != 12582912) & (unsigned __int8)WindowFrameMetricForDpi) != 0)
     || (WindowFrameMetricForDpi = GetAppCompatFlags2(39168LL, v18), (WindowFrameMetricForDpi & 0x30000000) != 0)) )
  {
    right = v100.right;
    top = v100.top;
  }
  else
  {
    v51 = GetDpiForSystem(v26, v18, v19);
    v52 = v25 + GetResizeBorderWidthForDpi(v51);
    LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
    v53 = -v52;
    right = v53 + v100.right;
    v100.left -= v53;
    top = v100.top - v53;
    v100.bottom += v53;
    v5 = a2;
    v100.right = right;
    v100.top = top;
  }
  v27 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v27 + 30) & 0xC0) == 0 && (*(_BYTE *)(v27 + 24) & 1) == 0 )
    goto LABEL_26;
  LOBYTE(WindowFrameMetricForDpi) = DrawFrame(v5);
  ++v100.left;
  right = v100.right - 1;
  top = v100.top + 1;
LABEL_25:
  v100.top = top;
  v100.right = right;
LABEL_26:
  v22 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v22 + 16) & 8) == 0 )
    return WindowFrameMetricForDpi;
  v29 = *(_BYTE *)(v22 + 24);
  v30 = GetDpiForSystem(v22, v18, v19);
  if ( v29 < 0 )
  {
    v14 |= 0x20u;
    DpiDependentMetric = GetDpiDependentMetric(24LL, v30);
    v74 = 41;
  }
  else
  {
    DpiDependentMetric = GetDpiDependentMetric(13LL, v30);
  }
  v5 = a2;
  left = v100.left;
  v100.bottom = top + DpiDependentMetric;
  v92 = right - v100.left;
  v78 = top + DpiDependentMetric;
  v91 = top + DpiDependentMetric;
  v93 = 1;
  v94 = *(_QWORD *)(v87 + gpsi);
  GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)&left, 1);
  GreSelectBrush(a2, v82);
LABEL_49:
  v34 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v34 + 30) & 8) != 0 || (*(_BYTE *)(v34 + 21) & 2) == 0 )
  {
    v70 = 1;
    v35 = GetDpiForSystem(v34, v32, v33);
    v36 = GetDpiDependentMetric(12LL, v35);
    v40 = GetDpiForSystem(v38, v37, v39);
    v41 = GetDpiDependentMetric(23LL, v40);
    v43 = v41;
    v83 = v41;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v14 )
      {
        if ( v14 != 12 )
        {
          v54 = top + 2;
          v79 = v78 - 2;
          v55 = right - 2;
          NtGdiPatBlt(v5, v55, v54, 2, v79 - v54, 15728673);
          v56 = v74 + 3;
          if ( (v14 & 0x10) == 0 )
            v56 = v74;
          OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v56, v80);
          v58 = v56;
          v5 = a2;
          v59 = v55 - *((__int16 *)OemBitmapInfoForDpi + 2);
          v100.right = v59;
          BitBltSysBmp((__int64)a2, v59, v54, v58, 1);
          v60 = v59;
          v61 = (v14 & 0x20) == 0;
          v77 = v61;
          if ( (v14 & 0xC) != 12 && v61 )
          {
            v71 = v59 - 2;
            NtGdiPatBlt(a2, v59 - 2, v54, 2, v79 - v54, 15728673);
            v62 = 8;
            if ( (v14 & 2) != 0 )
              v63 = 8;
            else
              v63 = (v14 & 8) != 0 ? 17 : 14;
            v76 = v63;
            v72 = v71 - *((__int16 *)GetOemBitmapInfoForDpi(v63, v80) + 2);
            BitBltSysBmp((__int64)a2, v72, v54, v76, 1);
            if ( (v14 & 1) == 0 )
              v62 = (v14 & 4) != 0 ? 7 : 4;
            v73 = v72 - *((__int16 *)GetOemBitmapInfoForDpi(v62, v80) + 2);
            BitBltSysBmp((__int64)a2, v73, v54, v62, 1);
            v59 = v73 - 2;
            v100.right = v73 - 2;
            NtGdiPatBlt(a2, v73 - 2, v54, 2, v79 - v54, 15728673);
            v61 = v77;
            v64 = 3;
            v70 = 3;
            v60 = v59;
          }
          else
          {
            v64 = 1;
          }
          if ( (v14 & 0x1C) != 0 && v61 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v65 = v60 - 2;
            NtGdiPatBlt(a2, v60 - 2, v54, 2, v79 - v54, 15728673);
            v59 = v65 - *((__int16 *)GetOemBitmapInfoForDpi(11LL, v80) + 2);
            v100.right = v59;
            BitBltSysBmp((__int64)a2, v59, v54, 0xBu, 1);
            v64 = v70 + 1;
          }
          left = v59;
          v93 = 2;
          v98 = 2;
          v100.bottom = v79 + 2;
          v100.top = v54 - 2;
          v91 = v54 - 2;
          if ( (v14 & 0x20) != 0 )
            v36 = v83;
          v94 = 0LL;
          v99 = 0LL;
          v95 = v59;
          v96 = v79;
          v92 = v36 * v64;
          v97 = v36 * v64;
          GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)&left, 2);
          if ( v88 )
            GreSelectBrush(a2, v88);
          goto LABEL_56;
        }
        v47 = v36 + 2;
      }
      else
      {
        v47 = 3 * v36;
      }
      v75 = v47;
      v85 = (HDC)PrepareHDCBITSBitmap(0LL, v42, v41);
      if ( v85 )
      {
        v48 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v80);
        v49 = right - v75;
        v69 = v48[1];
        v68 = v48[2] + *v48 - v75 - v36;
        v89 = v48;
        LODWORD(v48) = v48[3];
        v100.right = v49;
        NtGdiBitBltInternal(v5, v49, top, v75, (int)v48, v85, v68, v69, 13369376, 0, 0);
        if ( v14 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v100.right = v49 - v36 + 2;
            NtGdiBitBltInternal(v5, v100.right, top, v36, v89[3], v85, v89[2] + *v89 - v36, v89[1], 13369376, 0, 0);
            if ( ((unsigned int)IS_UI_LANGID(v66) || *(_WORD *)(gpsi + 7012LL) == 1037)
              && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
            {
              NtGdiBitBltInternal(
                v5,
                v100.right - 2,
                top + 2,
                v36 - 4,
                v89[3] - 4,
                v85,
                v89[2] + *v89 - v36 + 2,
                v89[1] + 2,
                -2134114272,
                0,
                0);
            }
          }
        }
      }
    }
    else
    {
      if ( !v14 || (v14 & 0xC) != 12 && (v14 & 0x20) == 0 )
      {
        v44 = 3;
      }
      else
      {
        right -= 2;
        if ( v14 == 12 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          v44 = 2;
        else
          v44 = 1;
      }
      if ( (v14 & 0x20) != 0 )
        v36 = v43;
      v100.right = right - v44 * v36;
    }
  }
LABEL_56:
  LOBYTE(WindowFrameMetricForDpi) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v45 = xxxDrawCaptionTemp((ULONG_PTR)a1, v5, &v100, 0LL, 0LL, a3 | v81 | (v14 >> 4) & 2) == 0;
    LOBYTE(WindowFrameMetricForDpi) = SetOrClrWF(v45, (__int64)a1, 0x708u, 1);
  }
  return WindowFrameMetricForDpi;
}
