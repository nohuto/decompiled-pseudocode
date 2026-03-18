/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C0150E88
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C0213340 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C0213480 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223BD4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C002142C (_HasCaptionIcon.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     GreSetBkMode @ 0x1C007BDE4 (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GreGetTextAlign @ 0x1C00A70F4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00A72C0 (GreSetTextAlign.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     xxxGetWindowSmIcon @ 0x1C00B72A4 (xxxGetWindowSmIcon.c)
 *     TextCopy @ 0x1C00F9DD0 (TextCopy.c)
 *     GreGetTextMetricsW @ 0x1C01111FC (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0151E74 (CALL_LPK.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C0151EB0 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 *     xxxGetWindowText @ 0x1C0151F7C (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022AF18 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     DrawTextExWorker @ 0x1C024239C (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        __int64 *BugCheckParameter2,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        unsigned __int16 **a6,
        unsigned int a7)
{
  struct tagCURSOR *WindowSmIcon; // r13
  int v11; // r12d
  int v12; // r14d
  HBRUSH v13; // rcx
  __int64 v14; // rdx
  int WindowText; // eax
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  int v18; // edx
  LONG v19; // r12d
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned __int16 *v22; // r10
  unsigned int v23; // r13d
  WCHAR *SourceString; // r8
  LONG v25; // r10d
  int *v26; // r11
  HBRUSH v28; // rax
  unsigned int Layout; // eax
  unsigned int v30; // r14d
  int v31; // r12d
  __int64 v32; // rcx
  int TextMetricsW; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ecx
  HBRUSH v37; // r8
  int TextAlign; // eax
  int v39; // r8d
  WCHAR *v40; // r9
  int v41; // r10d
  int *v42; // r11
  unsigned int v43; // eax
  int v44; // [rsp+50h] [rbp-B0h]
  HBRUSH v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 **v48; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+7Ch] [rbp-84h]
  int v52; // [rsp+80h] [rbp-80h]
  struct _POINTL v53; // [rsp+88h] [rbp-78h] BYREF
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-70h]
  _WORD v55[4]; // [rsp+98h] [rbp-68h] BYREF
  char *v56; // [rsp+A0h] [rbp-60h]
  _DWORD v57[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h]
  int v59; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-40h]
  _OWORD v61[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v62; // [rsp+120h] [rbp+20h]
  char v63[512]; // [rsp+160h] [rbp+60h] BYREF

  WindowSmIcon = a5;
  v53 = 0LL;
  v48 = a6;
  v46 = 0;
  v47 = 0;
  if ( a3->right <= a3->left )
    return 0LL;
  if ( BugCheckParameter2
    && !a5
    && (unsigned int)HasCaptionIcon((__int64)BugCheckParameter2)
    && (a7 & 2) == 0
    && (*(_BYTE *)(BugCheckParameter2[5] + 30) & 8) != 0 )
  {
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(BugCheckParameter2, a7 & 0x2000);
  }
  v44 = *(_DWORD *)(gpsi + 4572LL);
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) == 0 )
    {
      v11 = *(_DWORD *)(gpsi + 4604LL);
      v12 = *(_DWORD *)(gpsi + 4576LL);
      v13 = *(HBRUSH *)(gpsi + 4712LL);
      goto LABEL_11;
    }
    if ( *(_WORD *)(gpsi + 6996LL) < 8u
      || (v12 = *(_DWORD *)(gpsi + 4648LL), v12 != *(_DWORD *)(gpsi + 4568LL))
      || v12 == *(_DWORD *)(gpsi + 4588LL) )
    {
      v11 = *(_DWORD *)(gpsi + 4628LL);
      v12 = *(_DWORD *)(gpsi + 4648LL);
      v45 = *(HBRUSH *)(gpsi + 4944LL);
      goto LABEL_13;
    }
    v28 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_64:
    v11 = *(_DWORD *)(gpsi + 4640LL);
    v45 = v28;
    goto LABEL_14;
  }
  if ( (a7 & 0x10) != 0 )
  {
    v12 = *(_DWORD *)(gpsi + 4628LL);
    v28 = *(HBRUSH *)(gpsi + 4816LL);
    goto LABEL_64;
  }
  v11 = *(_DWORD *)(gpsi + 4644LL);
  v12 = *(_DWORD *)(gpsi + 4580LL);
  v13 = *(HBRUSH *)(gpsi + 4720LL);
LABEL_11:
  v45 = v13;
  if ( (a7 & 0x20) != 0 )
  {
    v46 = 1;
LABEL_13:
    v44 = GreSetBkMode(a2, 1);
  }
LABEL_14:
  v51 = GreSetTextColor(a2, v11);
  v52 = GreSetBkColor(a2, v12);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v30 = Layout;
      v31 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v45, a7);
      if ( v31 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v30);
    }
    else
    {
      a3->left += a3->bottom - a3->top;
    }
  }
  if ( (a7 & 8) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
    if ( a6 )
    {
      v17 = *((unsigned __int16 *)a6 + 1) - 2LL;
      if ( v17 >= *(unsigned __int16 *)a6 )
        LOWORD(v17) = *(_WORD *)a6;
      *(_WORD *)a6 = v17;
      v16 = (unsigned __int16)v17 >> 1;
      a6[1][v16] = 0;
LABEL_25:
      if ( a4 )
      {
        v50 = GreSelectFont(a2);
        memset(v61, 0, 0x44uLL);
        TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v61);
        v62 = v61[0];
        if ( TextMetricsW )
          v36 = v62;
        else
          v36 = *(_DWORD *)(GetDPIServerInfo(v35, v34) + 40);
        v19 = (a3->top + a3->bottom - v36) / 2;
      }
      else
      {
        if ( (a7 & 2) != 0 )
          v18 = *(_DWORD *)(GetDPIMetrics(v17, 2LL) + 44);
        else
          v18 = *(_DWORD *)(GetDPIServerInfo(v17, 2LL) + 20);
        v19 = (a3->top + a3->bottom - v18) / 2;
        v50 = GreSelectFont(a2);
      }
      if ( v46 )
      {
        if ( (a7 & 1) != 0 )
        {
          v20 = *(_DWORD *)(gpsi + 4576LL);
          v21 = *(_DWORD *)(gpsi + 4676LL);
        }
        else
        {
          v20 = *(_DWORD *)(gpsi + 4580LL);
          v21 = *(_DWORD *)(gpsi + 4680LL);
        }
        if ( v20 != v21 )
        {
          FillGradient(a2, a3, v20, v21);
LABEL_34:
          if ( v45 == *(HBRUSH *)(gpsi + 4944LL) )
          {
            GreSetTextColor(a2, *(_DWORD *)(gpsi + 4640LL));
            GreSetBkColor(a2, *(_DWORD *)(gpsi + 4636LL));
          }
          if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
          {
            xxxClientGetTextExtentPointW(a2);
            v23 = 1;
          }
          else
          {
            v23 = 1;
            GreGetTextExtentW(a2, v22, v16, (struct tagSIZE *)&v53, 1);
          }
          if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x20) != 0 )
          {
            TextAlign = GreGetTextAlign(a2);
            v47 = GreSetTextAlign(a2, TextAlign | 0x100u);
          }
          if ( (a7 & 0x4000) != 0 || (_DWORD)v16 && v53.x > a3->right - a3->left - 2 )
          {
            v59 = 20;
            v60 = 2LL;
            if ( (a7 & 0x4000) != 0 )
            {
              v43 = 34853;
            }
            else if ( !BugCheckParameter2 || (v43 = 34854, (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x10) == 0) )
            {
              v43 = 34852;
            }
            DrawTextExWorker(a2, v48[1], v16, a3, v43, (struct tagDRAWTEXTPARAMS *)&v59);
            v23 = 0;
          }
          else if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x10) != 0 )
          {
            if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
              xxxClientExtTextOutW(a2, (__int64)a3, v40, v16);
            else
              GreExtTextOutWInternal(a2, v41 - v39 - 2, v19, 4, a3, v40, v16, v42, (ERECTL *)v42, (unsigned int)v42);
          }
          else if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
          {
            xxxClientExtTextOutW(a2, (__int64)a3, SourceString, v16);
          }
          else
          {
            GreExtTextOutWInternal(a2, v25, v19, 4, a3, SourceString, v16, v26, (ERECTL *)v26, (unsigned int)v26);
          }
          if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x20) != 0 )
            GreSetTextAlign(a2, v47);
          if ( v50 )
            GreSelectFont(a2);
          goto LABEL_53;
        }
        if ( (a7 & 1) != 0 )
          v37 = *(HBRUSH *)(gpsi + 4712LL);
        else
          v37 = *(HBRUSH *)(gpsi + 4720LL);
      }
      else
      {
        v37 = v45;
      }
      FillRect(a2, a3, v37);
      goto LABEL_34;
    }
    if ( BugCheckParameter2 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(BugCheckParameter2, v63);
LABEL_23:
        v17 = (unsigned __int16)WindowText;
        LODWORD(v16) = WindowText;
        LOWORD(v17) = 2 * WindowText;
LABEL_24:
        v55[0] = v17;
        LOWORD(v17) = v17 + 2;
        v55[1] = v17;
        v56 = v63;
        v48 = (unsigned __int16 **)v55;
        goto LABEL_25;
      }
      if ( *(_DWORD *)(BugCheckParameter2[5] + 184) )
      {
        v32 = BugCheckParameter2[5];
        v58 = BugCheckParameter2[21];
        v57[0] = *(_DWORD *)(v32 + 184);
        v57[1] = *(_DWORD *)(v32 + 188);
        WindowText = TextCopy((__int64)v57, v63, 0xFFu);
        goto LABEL_23;
      }
    }
    *(_WORD *)v63 = 0;
    v17 = 0LL;
    LODWORD(v16) = 0;
    goto LABEL_24;
  }
  v23 = 1;
LABEL_53:
  GreSetTextColor(a2, v51);
  GreSetBkColor(a2, v52);
  if ( v45 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode(a2, v44);
  return v23;
}
