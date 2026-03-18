/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C0132880
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C01ECFD0 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C01ED0F0 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C01FB318 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreGetTextAlign @ 0x1C000CF4C (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C000D0B8 (GreSetTextAlign.c)
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C001160C (GreSetBkMode.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     _HasCaptionIcon @ 0x1C00C4988 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C00C4A6C (xxxGetWindowSmIcon.c)
 *     GreGetTextMetricsW @ 0x1C00FAD74 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C01332A0 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 *     xxxGetWindowText @ 0x1C0133370 (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0202548 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     TextCopy @ 0x1C022BAB8 (TextCopy.c)
 *     DrawTextExWorker @ 0x1C022C45C (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        __int64 *BugCheckParameter2,
        HDC a2,
        RECT *a3,
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
  int v19; // r12d
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned __int16 *v22; // r10
  unsigned int v23; // r13d
  WCHAR *SourceString; // r8
  int v25; // r10d
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
  int v39; // eax
  WCHAR *v40; // r9
  int *v41; // r11
  int v42; // r8d
  int v43; // r10d
  int v44; // edx
  unsigned int v45; // eax
  int v46; // [rsp+50h] [rbp-B0h]
  HBRUSH v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+60h] [rbp-A0h]
  int v49; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 **v50; // [rsp+68h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+7Ch] [rbp-84h]
  int v54; // [rsp+80h] [rbp-80h]
  struct tagSIZE v55; // [rsp+88h] [rbp-78h] BYREF
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-70h]
  _WORD v57[4]; // [rsp+98h] [rbp-68h] BYREF
  _WORD *v58; // [rsp+A0h] [rbp-60h]
  _DWORD v59[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  _OWORD v63[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v64; // [rsp+120h] [rbp+20h]
  _WORD v65[256]; // [rsp+160h] [rbp+60h] BYREF

  WindowSmIcon = a5;
  v55 = 0LL;
  v50 = a6;
  v48 = 0;
  v49 = 0;
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
  v46 = *(_DWORD *)(gpsi + 4572LL);
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
      v47 = *(HBRUSH *)(gpsi + 4944LL);
      goto LABEL_13;
    }
    v28 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_64:
    v11 = *(_DWORD *)(gpsi + 4640LL);
    v47 = v28;
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
  v47 = v13;
  if ( (a7 & 0x20) != 0 )
  {
    v48 = 1;
LABEL_13:
    v46 = GreSetBkMode(a2, 1);
  }
LABEL_14:
  v53 = GreSetTextColor(a2, v11);
  v54 = GreSetBkColor(a2, v12);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v30 = Layout;
      v31 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v47, a7);
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
        v52 = GreSelectFont(a2);
        memset(v63, 0, 0x44uLL);
        TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v63);
        v64 = v63[0];
        if ( TextMetricsW )
          v36 = v64;
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
        v52 = GreSelectFont(a2);
      }
      if ( v48 )
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
          if ( v47 == *(HBRUSH *)(gpsi + 4944LL) )
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
            GreGetTextExtentW(a2, v22, v16, &v55, 1);
          }
          if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x20) != 0 )
          {
            TextAlign = GreGetTextAlign(a2);
            v49 = GreSetTextAlign(a2, TextAlign | 0x100u);
          }
          if ( (a7 & 0x4000) != 0 || (_DWORD)v16 && v55.cx > a3->right - a3->left - 2 )
          {
            v61 = 20;
            v62 = 2LL;
            if ( (a7 & 0x4000) != 0 )
            {
              v45 = 34853;
            }
            else if ( !BugCheckParameter2 || (v45 = 34854, (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x10) == 0) )
            {
              v45 = 34852;
            }
            DrawTextExWorker(a2, v50[1], v16, a3, v45, (struct tagDRAWTEXTPARAMS *)&v61);
            v23 = 0;
          }
          else if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x10) != 0 )
          {
            v39 = CALL_LPK(ThreadWin32Thread);
            v44 = v43 - v42 - 2;
            if ( v39 )
              xxxClientExtTextOutW((int)a2, v44, v19, 4, (__int64)a3, v40, v16);
            else
              GreExtTextOutWInternal(a2, v44, v19, 4u, a3, v40, v16, v41, v41, (unsigned int)v41);
          }
          else if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
          {
            xxxClientExtTextOutW((int)a2, v25, v19, 4, (__int64)a3, SourceString, v16);
          }
          else
          {
            GreExtTextOutWInternal(a2, v25, v19, 4u, a3, SourceString, v16, v26, v26, (unsigned int)v26);
          }
          if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x20) != 0 )
            GreSetTextAlign(a2, v49);
          if ( v52 )
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
        v37 = v47;
      }
      FillRect(a2, a3, v37);
      goto LABEL_34;
    }
    if ( BugCheckParameter2 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(BugCheckParameter2, v65);
LABEL_23:
        v17 = (unsigned __int16)WindowText;
        LODWORD(v16) = WindowText;
        LOWORD(v17) = 2 * WindowText;
LABEL_24:
        v57[0] = v17;
        LOWORD(v17) = v17 + 2;
        v57[1] = v17;
        v58 = v65;
        v50 = (unsigned __int16 **)v57;
        goto LABEL_25;
      }
      if ( *(_DWORD *)(BugCheckParameter2[5] + 184) )
      {
        v32 = BugCheckParameter2[5];
        v60 = BugCheckParameter2[21];
        v59[0] = *(_DWORD *)(v32 + 184);
        v59[1] = *(_DWORD *)(v32 + 188);
        WindowText = TextCopy(v59, v65, 255LL);
        goto LABEL_23;
      }
    }
    v65[0] = 0;
    v17 = 0LL;
    LODWORD(v16) = 0;
    goto LABEL_24;
  }
  v23 = 1;
LABEL_53:
  GreSetTextColor(a2, v53);
  GreSetBkColor(a2, v54);
  if ( v47 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode(a2, v46);
  return v23;
}
