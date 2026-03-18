/*
 * XREFs of xxxDrawCaptionBar @ 0x1C00C2CE4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxRedrawTitle @ 0x1C006E8C0 (xxxRedrawTitle.c)
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C2AA8 (xxxDWP_DoNCActivate.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     IS_UI_LANGID @ 0x1C000D4D0 (IS_UI_LANGID.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     DrawEdge @ 0x1C0010DBC (DrawEdge.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     xxxMNCanClose @ 0x1C00C3104 (xxxMNCanClose.c)
 *     GetWindowBorders @ 0x1C00C3220 (GetWindowBorders.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00C3254 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00C327C (GetWindowFrameMetricForDpi.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DrawFrame @ 0x1C0130CD8 (DrawFrame.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  char v27; // bl
  unsigned int v28; // edx
  int DpiDependentMetric; // eax
  __int64 v30; // rcx
  unsigned int v31; // eax
  int v32; // r12d
  unsigned int v33; // eax
  int v34; // r8d
  int v35; // eax
  _BOOL8 v36; // rcx
  unsigned int DpiForSystem; // eax
  char v38; // r8
  unsigned int v39; // eax
  int v40; // ebx
  int v41; // ebx
  unsigned int v42; // r14d
  unsigned int v43; // edi
  unsigned int v44; // ebx
  char *OemBitmapInfoForDpi; // rax
  unsigned int v46; // r9d
  unsigned int v47; // edi
  unsigned int v48; // r8d
  bool v49; // cl
  unsigned int v50; // edi
  unsigned int v51; // eax
  int v52; // edx
  unsigned int v53; // edi
  int v54; // ecx
  __int16 *v55; // rax
  LONG v56; // edi
  int v57; // edx
  int v58; // ecx
  BOOL v59; // eax
  unsigned int v61; // [rsp+38h] [rbp-91h]
  unsigned int v62; // [rsp+60h] [rbp-69h]
  int v63; // [rsp+60h] [rbp-69h]
  unsigned int v64; // [rsp+60h] [rbp-69h]
  unsigned int v65; // [rsp+60h] [rbp-69h]
  unsigned int v66; // [rsp+60h] [rbp-69h]
  int v67; // [rsp+64h] [rbp-65h]
  unsigned int v68; // [rsp+64h] [rbp-65h]
  int v69; // [rsp+64h] [rbp-65h]
  bool v70; // [rsp+68h] [rbp-61h]
  LONG v71; // [rsp+6Ch] [rbp-5Dh]
  int v72; // [rsp+6Ch] [rbp-5Dh]
  unsigned int v73; // [rsp+70h] [rbp-59h]
  int v74; // [rsp+74h] [rbp-55h]
  __int64 v75; // [rsp+78h] [rbp-51h]
  int v76; // [rsp+78h] [rbp-51h]
  HDC v78; // [rsp+80h] [rbp-49h]
  __int64 v80; // [rsp+90h] [rbp-39h]
  __int16 *v81; // [rsp+90h] [rbp-39h]
  LONG left; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v83; // [rsp+A4h] [rbp-25h]
  int v84; // [rsp+A8h] [rbp-21h]
  int v85; // [rsp+ACh] [rbp-1Dh]
  __int64 v86; // [rsp+B0h] [rbp-19h]
  unsigned int v87; // [rsp+B8h] [rbp-11h]
  int v88; // [rsp+BCh] [rbp-Dh]
  int v89; // [rsp+C0h] [rbp-9h]
  int v90; // [rsp+C4h] [rbp-5h]
  __int64 v91; // [rsp+C8h] [rbp-1h]
  RECT v92; // [rsp+D0h] [rbp+7h] BYREF

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
  ClearHungFlag((struct tagWND *)BugCheckParameter2, 784);
  GetRect(BugCheckParameter2, &v92.left, 34);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    if ( (v3 & 1) != 0 )
      v8 = *(_QWORD *)(gpsi + 4912LL);
    else
      v8 = *(_QWORD *)(gpsi + 4920LL);
    v74 = 32;
    goto LABEL_8;
  }
  v74 = 0;
  if ( (v3 & 1) == 0 )
  {
    v8 = *(_QWORD *)(gpsi + 4720LL);
LABEL_8:
    v75 = v8;
    goto LABEL_9;
  }
  v7 = *(_QWORD *)(gpsi + 4712LL);
  v75 = v7;
LABEL_9:
  v9 = *(_QWORD *)(BugCheckParameter2 + 40);
  v62 = 15;
  if ( (*(_DWORD *)(v9 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(BugCheckParameter2);
LABEL_11:
    v73 = WindowDpiLastNotify;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 0
    || (v26 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 448LL)) == 0
    || (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 52LL) & 1) == 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 416LL) + 284LL);
    goto LABEL_11;
  }
  v73 = 96;
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
    v71 = top + GetDpiDependentMetric(13LL, DpiForSystem);
    v92.bottom = v71;
    v80 = GreSelectBrush(v4, v75);
    goto LABEL_49;
  }
LABEL_19:
  if ( (*(_BYTE *)(v12 + 25) & 3) == 0 || (*(_BYTE *)(v12 + 20) & 8) != 0 )
    v62 = 6;
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
    v38 = 5;
  }
  else
  {
    if ( (*(_BYTE *)(v21 + 26) & 2) == 0 )
      goto LABEL_31;
    v38 = 2;
  }
  LOBYTE(WindowFrameMetricForDpi) = DrawEdge(v4, &v92, v38, 8207);
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
    v39 = GetDpiForSystem();
    v40 = v22 + GetResizeBorderWidthForDpi(v39);
    LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
    v41 = -v40;
    right = v41 + v92.right;
    v92.left -= v41;
    top = v92.top - v41;
    v92.bottom += v41;
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
  v27 = *(_BYTE *)(v18 + 24);
  v28 = GetDpiForSystem();
  if ( v27 < 0 )
  {
    v11 |= 0x20u;
    DpiDependentMetric = GetDpiDependentMetric(24LL, v28);
    v67 = 41;
  }
  else
  {
    DpiDependentMetric = GetDpiDependentMetric(13LL, v28);
  }
  v4 = a2;
  left = v92.left;
  v84 = right - v92.left;
  v92.bottom = top + DpiDependentMetric;
  v71 = top + DpiDependentMetric;
  v83 = top + DpiDependentMetric;
  v85 = 1;
  v86 = *(_QWORD *)(gpsi + 8LL * v62 + 4696);
  GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)&left, 1);
  GreSelectBrush(a2, v75);
LABEL_49:
  v30 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_BYTE *)(v30 + 30) & 8) != 0 || (*(_BYTE *)(v30 + 21) & 2) == 0 )
  {
    v63 = 1;
    v31 = GetDpiForSystem();
    v32 = GetDpiDependentMetric(12LL, v31);
    v33 = GetDpiForSystem();
    v34 = GetDpiDependentMetric(23LL, v33);
    v76 = v34;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v11 )
      {
        if ( v11 != 12 )
        {
          v42 = top + 2;
          v72 = v71 - 2;
          v43 = right - 2;
          NtGdiPatBlt(v4, v43, v42, 2, v72 - v42, 15728673);
          v44 = v67 + 3;
          if ( (v11 & 0x10) == 0 )
            v44 = v67;
          OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v44, v73);
          v46 = v44;
          v4 = a2;
          v47 = v43 - *((__int16 *)OemBitmapInfoForDpi + 2);
          v92.right = v47;
          BitBltSysBmp(a2, v47, v42, v46, 1);
          v48 = v47;
          v49 = (v11 & 0x20) == 0;
          v70 = v49;
          if ( (v11 & 0xC) != 12 && v49 )
          {
            v64 = v47 - 2;
            NtGdiPatBlt(a2, v47 - 2, v42, 2, v72 - v42, 15728673);
            v50 = 8;
            if ( (v11 & 2) != 0 )
              v51 = 8;
            else
              v51 = (v11 & 8) != 0 ? 17 : 14;
            v68 = v51;
            v65 = v64 - *((__int16 *)GetOemBitmapInfoForDpi(v51, v73) + 2);
            BitBltSysBmp(a2, v65, v42, v68, 1);
            if ( (v11 & 1) == 0 )
              v50 = (v11 & 4) != 0 ? 7 : 4;
            v66 = v65 - *((__int16 *)GetOemBitmapInfoForDpi(v50, v73) + 2);
            BitBltSysBmp(a2, v66, v42, v50, 1);
            v47 = v66 - 2;
            v92.right = v66 - 2;
            NtGdiPatBlt(a2, v66 - 2, v42, 2, v72 - v42, 15728673);
            v49 = v70;
            v52 = 3;
            v63 = 3;
            v48 = v47;
          }
          else
          {
            v52 = 1;
          }
          if ( (v11 & 0x1C) != 0 && v49 && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 25LL) & 4) != 0 )
          {
            v53 = v48 - 2;
            NtGdiPatBlt(a2, v48 - 2, v42, 2, v72 - v42, 15728673);
            v47 = v53 - *((__int16 *)GetOemBitmapInfoForDpi(11LL, v73) + 2);
            v92.right = v47;
            BitBltSysBmp(a2, v47, v42, 0xBu, 1);
            v52 = v63 + 1;
          }
          left = v47;
          v85 = 2;
          v90 = 2;
          v92.bottom = v72 + 2;
          v92.top = v42 - 2;
          v83 = v42 - 2;
          if ( (v11 & 0x20) != 0 )
            v32 = v76;
          v86 = 0LL;
          v91 = 0LL;
          v87 = v47;
          v88 = v72;
          v84 = v32 * v52;
          v89 = v32 * v52;
          GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)&left, 2);
          if ( v80 )
            GreSelectBrush(a2, v80);
          goto LABEL_56;
        }
        v54 = v32 + 2;
      }
      else
      {
        v54 = 3 * v32;
      }
      v69 = v54;
      v78 = (HDC)PrepareHDCBITSBitmap(0LL);
      if ( v78 )
      {
        v55 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v73);
        v56 = right - v69;
        v61 = v55[1];
        v81 = v55;
        v57 = v55[2] + *v55 - v69 - v32;
        v92.right = v56;
        NtGdiBitBltInternal(v4, v56, top, v69, v55[3], v78, v57, v61, 13369376, 0, 0);
        if ( v11 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 25LL) & 4) != 0 )
          {
            v92.right = v56 - v32 + 2;
            NtGdiBitBltInternal(v4, v92.right, top, v32, v81[3], v78, v81[2] + *v81 - v32, v81[1], 13369376, 0, 0);
            v59 = (unsigned int)IS_UI_LANGID(v58) || *(_WORD *)(gpsi + 7012LL) == 1037;
            if ( v59 && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 26LL) & 0x40) != 0 )
              NtGdiBitBltInternal(
                v4,
                v92.right - 2,
                top + 2,
                v32 - 4,
                v81[3] - 4,
                v78,
                *v81 - v32 + v81[2] + 2,
                v81[1] + 2,
                -2134114272,
                0,
                0);
          }
        }
      }
      goto LABEL_56;
    }
    if ( !v11 || (v11 & 0xC) != 12 && (v11 & 0x20) == 0 )
    {
      v35 = 3;
    }
    else
    {
      right -= 2;
      if ( v11 == 12 && (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 25LL) & 4) != 0 )
        v35 = 2;
      else
        v35 = 1;
    }
    if ( (v11 & 0x20) != 0 )
      v32 = v34;
    v92.right = right - v35 * v32;
  }
LABEL_56:
  LOBYTE(WindowFrameMetricForDpi) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v36 = (unsigned int)xxxDrawCaptionTemp(BugCheckParameter2, v4, (__int64)&v92, 0LL, 0LL, v74 | a3 | (v11 >> 4) & 2) == 0;
    LOBYTE(WindowFrameMetricForDpi) = SetOrClrWF(v36, BugCheckParameter2, 1800LL, 1LL);
  }
  return WindowFrameMetricForDpi;
}
