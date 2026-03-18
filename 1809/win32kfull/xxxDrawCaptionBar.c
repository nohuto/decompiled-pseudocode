/*
 * XREFs of xxxDrawCaptionBar @ 0x1C00A7DE8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00A7B84 (xxxDWP_DoNCActivate.c)
 *     xxxRedrawTitle @ 0x1C00B3850 (xxxRedrawTitle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ClearHungFlag @ 0x1C001F610 (ClearHungFlag.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C0020A70 (xxxMNCanClose.c)
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     DrawEdge @ 0x1C007AF44 (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     GetWindowBorders @ 0x1C00A8414 (GetWindowBorders.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00ABA6C (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00ABA94 (GetWindowFrameMetricForDpi.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C0106910 (IS_UI_LANGID.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     DrawFrame @ 0x1C014FA18 (DrawFrame.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(ULONG_PTR BugCheckParameter2, HDC a2, int a3)
{
  __int16 v3; // di
  HDC v4; // rbx
  int WindowFrameMetricForDpi; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int WindowDpiLastNotify; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  char v13; // dl
  char v14; // al
  char v15; // al
  int right; // edi
  int top; // r14d
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r14d
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // r8
  char v28; // bl
  __int64 v29; // rdx
  __int64 v30; // r8
  int DpiDependentMetric; // eax
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // r8
  int v35; // r12d
  unsigned int v36; // eax
  __int64 v37; // r8
  int v38; // r8d
  int v39; // eax
  BOOL v40; // ecx
  unsigned int DpiForSystem; // eax
  __int64 v42; // r8
  unsigned int v43; // eax
  int v44; // ebx
  int v45; // ebx
  int v46; // r14d
  int v47; // edi
  unsigned int v48; // ebx
  __int64 OemBitmapInfoForDpi; // rax
  LONG v50; // edi
  LONG v51; // r8d
  bool v52; // cl
  unsigned int v53; // edi
  unsigned int v54; // eax
  int v55; // edx
  int v56; // edi
  int v57; // ecx
  __int16 *v58; // rax
  LONG v59; // edi
  int v61; // [rsp+30h] [rbp-99h]
  int v62; // [rsp+38h] [rbp-91h]
  int v63; // [rsp+60h] [rbp-69h]
  int v64; // [rsp+60h] [rbp-69h]
  int v65; // [rsp+60h] [rbp-69h]
  int v66; // [rsp+60h] [rbp-69h]
  int v67; // [rsp+64h] [rbp-65h]
  int v68; // [rsp+64h] [rbp-65h]
  bool v69; // [rsp+68h] [rbp-61h]
  LONG v70; // [rsp+6Ch] [rbp-5Dh]
  int v71; // [rsp+6Ch] [rbp-5Dh]
  unsigned int v72; // [rsp+70h] [rbp-59h]
  int v73; // [rsp+74h] [rbp-55h]
  __int64 v74; // [rsp+78h] [rbp-51h]
  int v75; // [rsp+78h] [rbp-51h]
  HDC v77; // [rsp+80h] [rbp-49h]
  __int64 v79; // [rsp+90h] [rbp-39h]
  __int64 v80; // [rsp+98h] [rbp-31h]
  __int16 *v81; // [rsp+98h] [rbp-31h]
  LONG left; // [rsp+A0h] [rbp-29h] BYREF
  int v83; // [rsp+A4h] [rbp-25h]
  int v84; // [rsp+A8h] [rbp-21h]
  int v85; // [rsp+ACh] [rbp-1Dh]
  __int64 v86; // [rsp+B0h] [rbp-19h]
  LONG v87; // [rsp+B8h] [rbp-11h]
  int v88; // [rsp+BCh] [rbp-Dh]
  int v89; // [rsp+C0h] [rbp-9h]
  int v90; // [rsp+C4h] [rbp-5h]
  __int64 v91; // [rsp+C8h] [rbp-1h]
  struct tagRECT v92; // [rsp+D0h] [rbp+7h] BYREF

  v3 = a3;
  v67 = 0;
  v4 = a2;
  v80 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    WindowFrameMetricForDpi = IsVisible(BugCheckParameter2);
    if ( !WindowFrameMetricForDpi )
      return WindowFrameMetricForDpi;
  }
  ClearHungFlag((struct tagWND *)BugCheckParameter2, 0x310u);
  GetRect(BugCheckParameter2, (__int64)&v92, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    if ( (v3 & 1) != 0 )
      v8 = *(_QWORD *)(gpsi + 4912LL);
    else
      v8 = *(_QWORD *)(gpsi + 4920LL);
    v73 = 32;
    goto LABEL_8;
  }
  v73 = 0;
  if ( (v3 & 1) == 0 )
  {
    v8 = *(_QWORD *)(gpsi + 4720LL);
LABEL_8:
    v74 = v8;
    goto LABEL_9;
  }
  v7 = *(_QWORD *)(gpsi + 4712LL);
  v74 = v7;
LABEL_9:
  v9 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_DWORD *)(v9 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(BugCheckParameter2);
LABEL_11:
    v72 = WindowDpiLastNotify;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 0
    || (v26 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 456LL)) == 0
    || (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 64LL) & 1) == 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 424LL) + 284LL);
    goto LABEL_11;
  }
  v72 = 96;
LABEL_12:
  v11 = 0;
  if ( !(unsigned int)xxxMNCanClose(BugCheckParameter2, v7) )
    v11 = 16;
  v12 = *(_QWORD *)(BugCheckParameter2 + 40);
  v13 = *(_BYTE *)(v12 + 30);
  v14 = *(_BYTE *)(v12 + 31);
  if ( (v13 & 1) != 0 )
  {
    if ( (v14 & 1) != 0 )
      v11 |= 2u;
  }
  else
  {
    v11 |= 8u;
  }
  v15 = v14 & 0x20;
  if ( (v13 & 2) != 0 )
  {
    if ( !v15 )
      goto LABEL_19;
    v11 |= 1u;
  }
  else
  {
    v11 |= 4u;
  }
  if ( v15 )
  {
    if ( v3 < 0 )
    {
      DrawEdge(v4, &v92, 5, 8207);
      DrawFrame(v4);
      ++v92.left;
      right = v92.right - 1;
      top = v92.top + 1;
    }
    else
    {
      v92.left += 3;
      right = v92.right - 3;
      top = v92.top + 3;
    }
    v92.top = top;
    v92.right = right;
    DpiForSystem = GetDpiForSystem();
    v70 = top + GetDpiDependentMetric(13LL, DpiForSystem, v42);
    v92.bottom = v70;
    v80 = GreSelectBrush(v4, v74);
    goto LABEL_53;
  }
LABEL_19:
  if ( (*(_BYTE *)(v12 + 25) & 3) == 0 || (*(_BYTE *)(v12 + 20) & 8) != 0 )
    v79 = 4744LL;
  else
    v79 = 4816LL;
  if ( (v3 & 0x8000) == 0 )
  {
    WindowFrameMetricForDpi = -(int)GetWindowBorders(*(unsigned int *)(v12 + 28), *(unsigned int *)(v12 + 24));
    v92.left -= WindowFrameMetricForDpi;
    right = WindowFrameMetricForDpi + v92.right;
    top = v92.top - WindowFrameMetricForDpi;
    goto LABEL_23;
  }
  v19 = GetDpiForSystem();
  WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v20, v19);
  v21 = *(_QWORD *)(BugCheckParameter2 + 40);
  v22 = WindowFrameMetricForDpi;
  if ( (*(_BYTE *)(v21 + 25) & 1) != 0 )
  {
    v27 = 5;
  }
  else
  {
    if ( (*(_BYTE *)(v21 + 26) & 2) == 0 )
      goto LABEL_31;
    v27 = 2;
  }
  LOBYTE(WindowFrameMetricForDpi) = DrawEdge(v4, &v92, v27, 8207);
LABEL_31:
  v23 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_BYTE *)(v23 + 30) & 4) == 0
    && (v22 <= 0
     || (v24 = *(_DWORD *)(v23 + 28),
         LOBYTE(WindowFrameMetricForDpi) = (v24 & 0x40000) == 0,
         (((v24 & 0xC00000) != 12582912) & (unsigned __int8)WindowFrameMetricForDpi) != 0)
     || (WindowFrameMetricForDpi = GetAppCompatFlags2(39168LL), (WindowFrameMetricForDpi & 0x30000000) != 0)) )
  {
    right = v92.right;
    top = v92.top;
  }
  else
  {
    v43 = GetDpiForSystem();
    v44 = v22 + GetResizeBorderWidthForDpi(v43);
    LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
    v45 = -v44;
    right = v45 + v92.right;
    v92.left -= v45;
    top = v92.top - v45;
    v92.bottom += v45;
    v4 = a2;
    v92.right = right;
    v92.top = top;
  }
  v25 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_BYTE *)(v25 + 30) & 0xC0) == 0 && (*(_BYTE *)(v25 + 24) & 1) == 0 )
    goto LABEL_24;
  LOBYTE(WindowFrameMetricForDpi) = DrawFrame(v4);
  ++v92.left;
  right = v92.right - 1;
  top = v92.top + 1;
LABEL_23:
  v92.top = top;
  v92.right = right;
LABEL_24:
  v18 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_BYTE *)(v18 + 16) & 8) == 0 )
    return WindowFrameMetricForDpi;
  v28 = *(_BYTE *)(v18 + 24);
  v29 = (unsigned int)GetDpiForSystem();
  if ( v28 < 0 )
  {
    v11 |= 0x20u;
    DpiDependentMetric = GetDpiDependentMetric(24LL, v29, v30);
    v67 = 41;
  }
  else
  {
    DpiDependentMetric = GetDpiDependentMetric(13LL, v29, v30);
  }
  v4 = a2;
  left = v92.left;
  v92.bottom = top + DpiDependentMetric;
  v84 = right - v92.left;
  v70 = top + DpiDependentMetric;
  v83 = top + DpiDependentMetric;
  v85 = 1;
  v86 = *(_QWORD *)(v79 + gpsi);
  GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&left, 1);
  GreSelectBrush(a2, v74);
LABEL_53:
  v32 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_BYTE *)(v32 + 30) & 8) != 0 || (*(_BYTE *)(v32 + 21) & 2) == 0 )
  {
    v63 = 1;
    v33 = GetDpiForSystem();
    v35 = GetDpiDependentMetric(12LL, v33, v34);
    v36 = GetDpiForSystem();
    v38 = GetDpiDependentMetric(23LL, v36, v37);
    v75 = v38;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v11 )
      {
        if ( v11 != 12 )
        {
          v46 = top + 2;
          v71 = v70 - 2;
          v47 = right - 2;
          NtGdiPatBlt(v4, v47, v46, 2, v71 - v46, 15728673);
          v48 = v67 + 3;
          if ( (v11 & 0x10) == 0 )
            v48 = v67;
          OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v48, v72);
          v4 = a2;
          v50 = v47 - *(__int16 *)(OemBitmapInfoForDpi + 4);
          v92.right = v50;
          BitBltSysBmp(a2, v50, v46, 1);
          v51 = v50;
          v52 = (v11 & 0x20) == 0;
          v69 = v52;
          if ( (v11 & 0xC) != 12 && v52 )
          {
            v64 = v50 - 2;
            NtGdiPatBlt(a2, v50 - 2, v46, 2, v71 - v46, 15728673);
            v53 = 8;
            if ( (v11 & 2) != 0 )
              v54 = 8;
            else
              v54 = (v11 & 8) != 0 ? 17 : 14;
            v65 = v64 - *(__int16 *)(GetOemBitmapInfoForDpi(v54, v72) + 4);
            BitBltSysBmp(a2, v65, v46, 1);
            if ( (v11 & 1) == 0 )
              v53 = (v11 & 4) != 0 ? 7 : 4;
            v66 = v65 - *(__int16 *)(GetOemBitmapInfoForDpi(v53, v72) + 4);
            BitBltSysBmp(a2, v66, v46, 1);
            v50 = v66 - 2;
            v92.right = v66 - 2;
            NtGdiPatBlt(a2, v66 - 2, v46, 2, v71 - v46, 15728673);
            v52 = v69;
            v55 = 3;
            v63 = 3;
            v51 = v50;
          }
          else
          {
            v55 = 1;
          }
          if ( (v11 & 0x1C) != 0 && v52 && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 25LL) & 4) != 0 )
          {
            v56 = v51 - 2;
            NtGdiPatBlt(a2, v51 - 2, v46, 2, v71 - v46, 15728673);
            v50 = v56 - *(__int16 *)(GetOemBitmapInfoForDpi(11LL, v72) + 4);
            v92.right = v50;
            BitBltSysBmp(a2, v50, v46, 1);
            v55 = v63 + 1;
          }
          left = v50;
          v85 = 2;
          v90 = 2;
          v92.bottom = v71 + 2;
          v92.top = v46 - 2;
          v83 = v46 - 2;
          if ( (v11 & 0x20) != 0 )
            v35 = v75;
          v86 = 0LL;
          v91 = 0LL;
          v87 = v50;
          v88 = v71;
          v84 = v35 * v55;
          v89 = v35 * v55;
          GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&left, 2);
          if ( v80 )
            GreSelectBrush(a2, v80);
          goto LABEL_60;
        }
        v57 = v35 + 2;
      }
      else
      {
        v57 = 3 * v35;
      }
      v68 = v57;
      v77 = (HDC)PrepareHDCBITSBitmap(0LL);
      if ( v77 )
      {
        v58 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v72);
        v59 = right - v68;
        v62 = v58[1];
        v61 = v58[2] + *v58 - v68 - v35;
        v81 = v58;
        LODWORD(v58) = v58[3];
        v92.right = v59;
        NtGdiBitBltInternal(v4, v59, top, v68, (int)v58, v77, v61, v62, 13369376, 0, 0);
        if ( v11 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 25LL) & 4) != 0 )
          {
            v92.right = v59 - v35 + 2;
            NtGdiBitBltInternal(v4, v92.right, top, v35, v81[3], v77, v81[2] + *v81 - v35, v81[1], 13369376, 0, 0);
            if ( ((unsigned int)IS_UI_LANGID() || *(_WORD *)(gpsi + 7012LL) == 1037)
              && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 26LL) & 0x40) != 0 )
            {
              NtGdiBitBltInternal(
                v4,
                v92.right - 2,
                top + 2,
                v35 - 4,
                v81[3] - 4,
                v77,
                v81[2] + *v81 - v35 + 2,
                v81[1] + 2,
                -2134114272,
                0,
                0);
            }
          }
        }
      }
      goto LABEL_60;
    }
    if ( !v11 || (v11 & 0xC) != 12 && (v11 & 0x20) == 0 )
    {
      v39 = 3;
    }
    else
    {
      right -= 2;
      if ( v11 == 12 && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 25LL) & 4) != 0 )
        v39 = 2;
      else
        v39 = 1;
    }
    if ( (v11 & 0x20) != 0 )
      v35 = v38;
    v92.right = right - v39 * v35;
  }
LABEL_60:
  LOBYTE(WindowFrameMetricForDpi) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v40 = xxxDrawCaptionTemp(BugCheckParameter2, v4, &v92, 0LL, 0LL, v73 | a3 | (v11 >> 4) & 2) == 0;
    LOBYTE(WindowFrameMetricForDpi) = SetOrClrWF(v40, BugCheckParameter2, 0x708u, 1);
  }
  return WindowFrameMetricForDpi;
}
