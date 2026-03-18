/*
 * XREFs of xxxDrawCaptionBar @ 0x1C000CB10
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     xxxRedrawTitle @ 0x1C0017BF0 (xxxRedrawTitle.c)
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     IS_UI_LANGID @ 0x1C000BC6C (IS_UI_LANGID.c)
 *     IsVisible @ 0x1C0028D70 (IsVisible.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     DrawEdge @ 0x1C008D37C (DrawEdge.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     GetWindowBorders @ 0x1C00905B4 (GetWindowBorders.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00913B8 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00913E0 (GetWindowFrameMetricForDpi.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     ClearHungFlag @ 0x1C0099DDC (ClearHungFlag.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C00A93A0 (xxxMNCanClose.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     DrawFrame @ 0x1C0156770 (DrawFrame.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

char __fastcall xxxDrawCaptionBar(struct tagWND *a1, HDC a2, int a3)
{
  __int16 v4; // di
  HDC v5; // rbx
  int WindowFrameMetricForDpi; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rcx
  char v13; // al
  char v14; // al
  __int64 v15; // rdx
  int v16; // edi
  unsigned int v17; // r14d
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // bl
  __int64 v26; // rdx
  int DpiDependentMetric; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // r8d
  int v37; // eax
  _BOOL8 v38; // rcx
  int v39; // ecx
  __int16 *v40; // rax
  unsigned int v41; // edi
  unsigned int DpiForSystem; // eax
  unsigned int v43; // eax
  int v44; // ebx
  int v45; // ebx
  unsigned int v46; // r14d
  int v47; // edi
  int v48; // ebx
  char *OemBitmapInfoForDpi; // rax
  unsigned int v50; // r9d
  unsigned int v51; // edi
  unsigned int v52; // r8d
  bool v53; // cl
  int v54; // edi
  int v55; // eax
  int v56; // edx
  unsigned int v57; // edi
  int v58; // ecx
  unsigned int v60; // [rsp+30h] [rbp-99h]
  int v61; // [rsp+38h] [rbp-91h]
  int v62; // [rsp+60h] [rbp-69h]
  unsigned int v63; // [rsp+60h] [rbp-69h]
  unsigned int v64; // [rsp+60h] [rbp-69h]
  unsigned int v65; // [rsp+60h] [rbp-69h]
  int v66; // [rsp+64h] [rbp-65h]
  unsigned int v67; // [rsp+64h] [rbp-65h]
  unsigned int v68; // [rsp+64h] [rbp-65h]
  bool v69; // [rsp+68h] [rbp-61h]
  int v70; // [rsp+6Ch] [rbp-5Dh]
  int v71; // [rsp+6Ch] [rbp-5Dh]
  unsigned int v72; // [rsp+70h] [rbp-59h]
  int v73; // [rsp+74h] [rbp-55h]
  __int64 v74; // [rsp+78h] [rbp-51h]
  unsigned int v75; // [rsp+78h] [rbp-51h]
  HDC v77; // [rsp+80h] [rbp-49h]
  __int64 v79; // [rsp+90h] [rbp-39h]
  __int64 v80; // [rsp+98h] [rbp-31h]
  __int16 *v81; // [rsp+98h] [rbp-31h]
  unsigned int v82; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v83; // [rsp+A4h] [rbp-25h]
  int v84; // [rsp+A8h] [rbp-21h]
  int v85; // [rsp+ACh] [rbp-1Dh]
  __int64 v86; // [rsp+B0h] [rbp-19h]
  unsigned int v87; // [rsp+B8h] [rbp-11h]
  int v88; // [rsp+BCh] [rbp-Dh]
  int v89; // [rsp+C0h] [rbp-9h]
  int v90; // [rsp+C4h] [rbp-5h]
  __int64 v91; // [rsp+C8h] [rbp-1h]
  __int64 v92; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v93; // [rsp+D8h] [rbp+Fh]

  v66 = 0;
  v92 = 0LL;
  v4 = a3;
  v93 = 0LL;
  v5 = a2;
  v80 = 0LL;
  if ( (a3 & 0x800) == 0 )
  {
    WindowFrameMetricForDpi = IsVisible(a1);
    if ( !WindowFrameMetricForDpi )
      return WindowFrameMetricForDpi;
  }
  ClearHungFlag(a1);
  GetRect(a1, &v92, 34LL);
  if ( !gbDisableAlpha && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000010) == 0x80000010 )
  {
    if ( (v4 & 1) != 0 )
      v7 = *(_QWORD *)(gpsi + 4912LL);
    else
      v7 = *(_QWORD *)(gpsi + 4920LL);
    v73 = 32;
    goto LABEL_8;
  }
  v73 = 0;
  if ( (v4 & 1) == 0 )
  {
    v7 = *(_QWORD *)(gpsi + 4720LL);
LABEL_8:
    v74 = v7;
    goto LABEL_9;
  }
  v74 = *(_QWORD *)(gpsi + 4712LL);
LABEL_9:
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v8 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v8 + 288) & 0xF) != 0
    || (v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
    || (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 64LL) & 1) == 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
LABEL_13:
    v72 = WindowDpiLastNotify;
    goto LABEL_14;
  }
  v72 = 96;
LABEL_14:
  v11 = 0;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    v11 = 16;
  v12 = *((_QWORD *)a1 + 5);
  LOBYTE(v10) = *(_BYTE *)(v12 + 30);
  v13 = *(_BYTE *)(v12 + 31);
  if ( (v10 & 1) != 0 )
  {
    if ( (v13 & 1) != 0 )
      v11 |= 2u;
  }
  else
  {
    v11 |= 8u;
  }
  v14 = v13 & 0x20;
  if ( (v10 & 2) != 0 )
  {
    if ( !v14 )
      goto LABEL_21;
    v11 |= 1u;
  }
  else
  {
    v11 |= 4u;
  }
  if ( v14 )
  {
    if ( v4 < 0 )
    {
      DrawEdge(v5);
      DrawFrame(v5);
      LODWORD(v92) = v92 + 1;
      v16 = v93 - 1;
      v17 = HIDWORD(v92) + 1;
    }
    else
    {
      LODWORD(v92) = v92 + 3;
      v16 = v93 - 3;
      v17 = HIDWORD(v92) + 3;
    }
    HIDWORD(v92) = v17;
    LODWORD(v93) = v16;
    DpiForSystem = GetDpiForSystem(v12, v10);
    v70 = v17 + GetDpiDependentMetric(13LL, DpiForSystem);
    HIDWORD(v93) = v70;
    v80 = GreSelectBrush(v5, v74);
    goto LABEL_49;
  }
LABEL_21:
  if ( (*(_BYTE *)(v12 + 25) & 3) == 0 || (*(_BYTE *)(v12 + 20) & 8) != 0 )
    v79 = 4744LL;
  else
    v79 = 4816LL;
  if ( v4 < 0 )
  {
    v19 = GetDpiForSystem(v12, v10);
    WindowFrameMetricForDpi = GetWindowFrameMetricForDpi(v20, v19);
    v15 = *((_QWORD *)a1 + 5);
    v21 = WindowFrameMetricForDpi;
    if ( (*(_BYTE *)(v15 + 25) & 1) != 0 || (*(_BYTE *)(v15 + 26) & 2) != 0 )
      LOBYTE(WindowFrameMetricForDpi) = DrawEdge(v5);
    v22 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v22 + 30) & 4) == 0
      && (v21 <= 0
       || (v15 = *(unsigned int *)(v22 + 28),
           LOBYTE(WindowFrameMetricForDpi) = (v15 & 0x40000) == 0,
           (((v15 & 0xC00000) != 12582912) & (unsigned __int8)WindowFrameMetricForDpi) != 0)
       || (WindowFrameMetricForDpi = GetAppCompatFlags2(39168LL), (WindowFrameMetricForDpi & 0x30000000) != 0)) )
    {
      v16 = v93;
      v17 = HIDWORD(v92);
    }
    else
    {
      v43 = GetDpiForSystem(v22, v15);
      v44 = v21 + GetResizeBorderWidthForDpi(v43);
      LOBYTE(WindowFrameMetricForDpi) = DrawFrame(a2);
      v45 = -v44;
      v16 = v45 + v93;
      LODWORD(v92) = v92 - v45;
      v17 = HIDWORD(v92) - v45;
      HIDWORD(v93) += v45;
      v5 = a2;
      LODWORD(v93) = v16;
      HIDWORD(v92) = v17;
    }
    v23 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v23 + 30) & 0xC0) == 0 && (*(_BYTE *)(v23 + 24) & 1) == 0 )
      goto LABEL_26;
    LOBYTE(WindowFrameMetricForDpi) = DrawFrame(v5);
    LODWORD(v92) = v92 + 1;
    v16 = v93 - 1;
    v17 = HIDWORD(v92) + 1;
  }
  else
  {
    WindowFrameMetricForDpi = -(int)GetWindowBorders(*(unsigned int *)(v12 + 28), *(unsigned int *)(v12 + 24));
    LODWORD(v92) = v92 - WindowFrameMetricForDpi;
    v16 = WindowFrameMetricForDpi + v93;
    v17 = HIDWORD(v92) - WindowFrameMetricForDpi;
  }
  HIDWORD(v92) = v17;
  LODWORD(v93) = v16;
LABEL_26:
  v18 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v18 + 16) & 8) == 0 )
    return WindowFrameMetricForDpi;
  v25 = *(_BYTE *)(v18 + 24);
  v26 = (unsigned int)GetDpiForSystem(v18, v15);
  if ( v25 < 0 )
  {
    v11 |= 0x20u;
    DpiDependentMetric = GetDpiDependentMetric(24LL, v26);
    v66 = 41;
  }
  else
  {
    DpiDependentMetric = GetDpiDependentMetric(13LL, v26);
  }
  v5 = a2;
  v82 = v92;
  HIDWORD(v93) = v17 + DpiDependentMetric;
  v84 = v16 - v92;
  v70 = v17 + DpiDependentMetric;
  v83 = v17 + DpiDependentMetric;
  v85 = 1;
  v86 = *(_QWORD *)(v79 + gpsi);
  GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v82, 1u);
  GreSelectBrush(a2, v74);
LABEL_49:
  v29 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v29 + 30) & 8) != 0 || (*(_BYTE *)(v29 + 21) & 2) == 0 )
  {
    v62 = 1;
    v30 = GetDpiForSystem(v29, v28);
    v31 = GetDpiDependentMetric(12LL, v30);
    v34 = GetDpiForSystem(v33, v32);
    v36 = GetDpiDependentMetric(23LL, v34);
    v75 = v36;
    if ( (a3 & 0x1000) != 0 )
    {
      if ( v11 )
      {
        if ( v11 != 12 )
        {
          v46 = v17 + 2;
          v71 = v70 - 2;
          v47 = v16 - 2;
          NtGdiPatBlt(v5, v47, v46, 2, v71 - v46, 15728673);
          v48 = v66 + 3;
          if ( (v11 & 0x10) == 0 )
            v48 = v66;
          OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(v48, v72);
          v50 = v48;
          v5 = a2;
          v51 = v47 - *((__int16 *)OemBitmapInfoForDpi + 2);
          LODWORD(v93) = v51;
          BitBltSysBmp(a2, v51, v46, v50, 1);
          v52 = v51;
          v53 = (v11 & 0x20) == 0;
          v69 = v53;
          if ( (v11 & 0xC) != 12 && v53 )
          {
            v63 = v51 - 2;
            NtGdiPatBlt(a2, v51 - 2, v46, 2, v71 - v46, 15728673);
            v54 = 8;
            if ( (v11 & 2) != 0 )
              v55 = 8;
            else
              v55 = (v11 & 8) != 0 ? 17 : 14;
            v68 = v55;
            v64 = v63 - *((__int16 *)GetOemBitmapInfoForDpi(v55, v72) + 2);
            BitBltSysBmp(a2, v64, v46, v68, 1);
            if ( (v11 & 1) == 0 )
              v54 = (v11 & 4) != 0 ? 7 : 4;
            v65 = v64 - *((__int16 *)GetOemBitmapInfoForDpi(v54, v72) + 2);
            BitBltSysBmp(a2, v65, v46, v54, 1);
            v51 = v65 - 2;
            LODWORD(v93) = v65 - 2;
            NtGdiPatBlt(a2, v65 - 2, v46, 2, v71 - v46, 15728673);
            v53 = v69;
            v56 = 3;
            v62 = 3;
            v52 = v51;
          }
          else
          {
            v56 = 1;
          }
          if ( (v11 & 0x1C) != 0 && v53 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            v57 = v52 - 2;
            NtGdiPatBlt(a2, v52 - 2, v46, 2, v71 - v46, 15728673);
            v51 = v57 - *((__int16 *)GetOemBitmapInfoForDpi(11, v72) + 2);
            LODWORD(v93) = v51;
            BitBltSysBmp(a2, v51, v46, 0xBu, 1);
            v56 = v62 + 1;
          }
          v82 = v51;
          v85 = 2;
          v90 = 2;
          HIDWORD(v93) = v71 + 2;
          HIDWORD(v92) = v46 - 2;
          v83 = v46 - 2;
          if ( (v11 & 0x20) != 0 )
            v31 = v75;
          v86 = 0LL;
          v91 = 0LL;
          v87 = v51;
          v88 = v71;
          v84 = v31 * v56;
          v89 = v31 * v56;
          GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)&v82, 2u);
          if ( v80 )
            GreSelectBrush(a2, v80);
          goto LABEL_56;
        }
        v39 = v31 + 2;
      }
      else
      {
        v39 = 3 * v31;
      }
      v67 = v39;
      v77 = (HDC)PrepareHDCBITSBitmap(0LL, v35);
      if ( v77 )
      {
        v40 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)!(a3 & 1) + 39, v72);
        v41 = v16 - v67;
        v61 = v40[1];
        v60 = v40[2] + *v40 - v67 - v31;
        v81 = v40;
        LODWORD(v40) = v40[3];
        LODWORD(v93) = v41;
        NtGdiBitBltInternal(v5, v41, v17, v67, (_DWORD)v40, v77, v60, v61, 13369376, 0, 0);
        if ( v11 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          {
            LODWORD(v93) = v41 - v31 + 2;
            NtGdiBitBltInternal(
              v5,
              (unsigned int)v93,
              v17,
              v31,
              v81[3],
              v77,
              v81[2] + *v81 - v31,
              v81[1],
              13369376,
              0,
              0);
            if ( ((unsigned int)IS_UI_LANGID(v58) || *(_WORD *)(gpsi + 7012LL) == 1037)
              && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
            {
              NtGdiBitBltInternal(
                v5,
                (unsigned int)(v93 - 2),
                v17 + 2,
                v31 - 4,
                v81[3] - 4,
                v77,
                v81[2] + *v81 - v31 + 2,
                v81[1] + 2,
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
      if ( !v11 || (v11 & 0xC) != 12 && (v11 & 0x20) == 0 )
      {
        v37 = 3;
      }
      else
      {
        v16 -= 2;
        if ( v11 == 12 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
          v37 = 2;
        else
          v37 = 1;
      }
      if ( (v11 & 0x20) != 0 )
        v31 = v36;
      LODWORD(v93) = v16 - v37 * v31;
    }
  }
LABEL_56:
  LOBYTE(WindowFrameMetricForDpi) = a3;
  if ( (a3 & 0xC) != 0 )
  {
    v38 = (unsigned int)xxxDrawCaptionTemp(a1, v5, &v92, 0LL, 0LL, 0LL, a3 | v73 | (v11 >> 4) & 2) == 0;
    LOBYTE(WindowFrameMetricForDpi) = SetOrClrWF(v38, a1, 1800LL, 1LL);
  }
  return WindowFrameMetricForDpi;
}
