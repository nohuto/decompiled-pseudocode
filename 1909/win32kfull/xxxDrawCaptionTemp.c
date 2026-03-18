/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C0158138
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C022AB70 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C022ACE0 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023BA94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     _HasCaptionIcon @ 0x1C004AB30 (_HasCaptionIcon.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     xxxGetWindowSmIcon @ 0x1C008BB70 (xxxGetWindowSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00DE040 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C00DE14C (TextCopy.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     GreGetTextMetricsW @ 0x1C0107E3C (GreGetTextMetricsW.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     GreExtTextOutWInternal @ 0x1C0125908 (GreExtTextOutWInternal.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C012B54C (GreSetBkMode.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C0158C40 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     xxxGetWindowText @ 0x1C0158D5C (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243808 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     DrawTextExWorker @ 0x1C025AA5C (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        __int64 *BugCheckParameter2,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        struct tagCURSOR *a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  LONG left; // eax
  struct tagCURSOR *WindowSmIcon; // r13
  int v12; // r12d
  int v13; // r14d
  HBRUSH v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r8
  int WindowText; // eax
  __int64 v19; // r14
  unsigned __int64 v20; // rcx
  int v21; // edx
  int v22; // r12d
  WCHAR *v23; // r10
  unsigned int v24; // r13d
  WCHAR *SourceString; // r8
  int v26; // r10d
  int *v27; // r11
  HBRUSH v29; // rax
  unsigned int Layout; // eax
  unsigned int v31; // r14d
  int v32; // r12d
  struct _LARGE_UNICODE_STRING *StrName; // rax
  int TextMetricsW; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // ecx
  int TextAlign; // eax
  int v40; // eax
  WCHAR *v41; // r9
  int *v42; // r11
  int v43; // r8d
  int v44; // r10d
  int v45; // edx
  unsigned int v46; // eax
  int v47; // [rsp+50h] [rbp-B0h]
  HBRUSH v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+64h] [rbp-9Ch]
  __int64 *v51; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+7Ch] [rbp-84h]
  int v55; // [rsp+80h] [rbp-80h]
  struct _POINTL v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  char *v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h] BYREF
  int v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B4h] [rbp-4Ch]
  _QWORD v63[2]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v64[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v65; // [rsp+120h] [rbp+20h]
  char v66[512]; // [rsp+160h] [rbp+60h] BYREF

  left = a3->left;
  WindowSmIcon = a5;
  v51 = (__int64 *)a6;
  v49 = 0;
  v56 = 0LL;
  v50 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( BugCheckParameter2
    && !a5
    && (unsigned int)HasCaptionIcon((__int64)BugCheckParameter2)
    && (a7 & 2) == 0
    && (*(_BYTE *)(BugCheckParameter2[5] + 30) & 8) != 0 )
  {
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(BugCheckParameter2, a7 & 0x2000);
  }
  v47 = *(_DWORD *)(gpsi + 4572LL);
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) == 0 )
    {
      v12 = *(_DWORD *)(gpsi + 4604LL);
      v13 = *(_DWORD *)(gpsi + 4576LL);
      v14 = *(HBRUSH *)(gpsi + 4712LL);
      goto LABEL_11;
    }
    if ( *(_WORD *)(gpsi + 6996LL) < 8u
      || (v13 = *(_DWORD *)(gpsi + 4648LL), v13 != *(_DWORD *)(gpsi + 4568LL))
      || v13 == *(_DWORD *)(gpsi + 4588LL) )
    {
      v12 = *(_DWORD *)(gpsi + 4628LL);
      v13 = *(_DWORD *)(gpsi + 4648LL);
      v48 = *(HBRUSH *)(gpsi + 4944LL);
      goto LABEL_13;
    }
    v29 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_62:
    v12 = *(_DWORD *)(gpsi + 4640LL);
    v48 = v29;
    goto LABEL_14;
  }
  if ( (a7 & 0x10) != 0 )
  {
    v13 = *(_DWORD *)(gpsi + 4628LL);
    v29 = *(HBRUSH *)(gpsi + 4816LL);
    goto LABEL_62;
  }
  v12 = *(_DWORD *)(gpsi + 4644LL);
  v13 = *(_DWORD *)(gpsi + 4580LL);
  v14 = *(HBRUSH *)(gpsi + 4720LL);
LABEL_11:
  v48 = v14;
  if ( (a7 & 0x20) != 0 )
  {
    v49 = 1;
LABEL_13:
    v47 = GreSetBkMode(a2, 1);
  }
LABEL_14:
  v54 = GreSetTextColor(a2, v12);
  v55 = GreSetBkColor(a2, v13);
  if ( WindowSmIcon )
  {
    v16 = 2LL;
    if ( (a7 & 2) == 0 )
    {
      if ( (a7 & 4) != 0 )
      {
        Layout = GreGetLayout(a2);
        v31 = Layout;
        v32 = Layout & 1;
        if ( (Layout & 1) != 0 )
          GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
        DrawCaptionIcon(a2, a3, WindowSmIcon, v48, a7);
        if ( v32 )
          GreSetLayout(a2, 0xFFFFFFFFLL, v31);
      }
      else
      {
        a3->left += a3->bottom - a3->top;
      }
    }
  }
  if ( (a7 & 8) != 0 )
  {
    v58 = 0LL;
    v59 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16);
    if ( a6 )
    {
      v20 = a6[1] - 2LL;
      if ( v20 >= *a6 )
        LOWORD(v20) = *a6;
      *a6 = v20;
      v19 = (unsigned __int16)v20 >> 1;
      *(_WORD *)(*((_QWORD *)a6 + 1) + 2 * v19) = 0;
      goto LABEL_25;
    }
    if ( BugCheckParameter2 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(BugCheckParameter2, v66);
LABEL_23:
        v20 = (unsigned __int16)WindowText;
        LODWORD(v19) = WindowText;
        LOWORD(v20) = 2 * WindowText;
LABEL_24:
        LOWORD(v58) = v20;
        LOWORD(v20) = v20 + 2;
        WORD1(v58) = v20;
        v59 = v66;
        v51 = &v58;
LABEL_25:
        if ( a4 )
        {
          v53 = GreSelectFont(a2);
          memset(v64, 0, 0x44uLL);
          TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v64);
          v65 = v64[0];
          if ( TextMetricsW )
            v38 = v65;
          else
            v38 = *(_DWORD *)(GetDPIServerInfo(v36, v35, v37) + 40);
          v22 = (a3->top + a3->bottom - v38) / 2;
        }
        else
        {
          if ( (a7 & 2) != 0 )
            v21 = *(_DWORD *)(GetDPIMetrics(v20, 2LL, v17) + 44);
          else
            v21 = *(_DWORD *)(GetDPIServerInfo(v20, 2LL, v17) + 20);
          v22 = (a3->top + a3->bottom - v21) / 2;
          v53 = GreSelectFont(a2);
        }
        if ( v49 )
          FillCaptionGradient(a2, a3, a7 & 1);
        else
          FillRect(a2, a3, v48);
        if ( v48 == *(HBRUSH *)(gpsi + 4944LL) )
        {
          GreSetTextColor(a2, *(_DWORD *)(gpsi + 4640LL));
          GreSetBkColor(a2, *(_DWORD *)(gpsi + 4636LL));
        }
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a2, v23);
          v24 = 1;
        }
        else
        {
          v24 = 1;
          GreGetTextExtentW(a2, v23, v19, (struct tagSIZE *)&v56, 1);
        }
        if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x20) != 0 )
        {
          TextAlign = GreGetTextAlign(a2);
          v50 = GreSetTextAlign(a2, TextAlign | 0x100u);
        }
        if ( (a7 & 0x4000) != 0 || (_DWORD)v19 && v56.x > a3->right - a3->left - 2 )
        {
          v62 = 0LL;
          v60 = 20LL;
          v61 = 2;
          if ( (a7 & 0x4000) != 0 )
          {
            v46 = 34853;
          }
          else if ( !BugCheckParameter2 || (v46 = 34854, (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x10) == 0) )
          {
            v46 = 34852;
          }
          DrawTextExWorker(a2, (unsigned __int16 *)v51[1], v19, a3, v46, (struct tagDRAWTEXTPARAMS *)&v60);
          v24 = 0;
        }
        else if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x10) != 0 )
        {
          v40 = CALL_LPK(ThreadWin32Thread);
          v45 = v44 - v43 - 2;
          if ( v40 )
            xxxClientExtTextOutW((int)a2, v45, v22, 4, (__int64)a3, v41, v19);
          else
            GreExtTextOutWInternal(a2, v45, v22, 4, a3, v41, v19, v42, v42, (unsigned int)v42);
        }
        else if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientExtTextOutW((int)a2, v26, v22, 4, (__int64)a3, SourceString, v19);
        }
        else
        {
          GreExtTextOutWInternal(a2, v26, v22, 4, a3, SourceString, v19, v27, v27, (unsigned int)v27);
        }
        if ( BugCheckParameter2 && (*(_BYTE *)(BugCheckParameter2[5] + 25) & 0x20) != 0 )
          GreSetTextAlign(a2, v50);
        if ( v53 )
          GreSelectFont(a2);
        goto LABEL_50;
      }
      if ( *(_DWORD *)(BugCheckParameter2[5] + 184) )
      {
        v63[0] = 0LL;
        v63[1] = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(BugCheckParameter2 + 23),
                    (struct _LARGE_UNICODE_STRING *)v63);
        WindowText = TextCopy((__int64)StrName, v66, 0xFFu);
        goto LABEL_23;
      }
    }
    *(_WORD *)v66 = 0;
    v20 = 0LL;
    LODWORD(v19) = 0;
    goto LABEL_24;
  }
  v24 = 1;
LABEL_50:
  GreSetTextColor(a2, v54);
  GreSetBkColor(a2, v55);
  if ( v48 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode(a2, v47);
  return v24;
}
