/*
 * XREFs of xxxDrawCaptionTemp @ 0x1C0157378
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x1C022B190 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1C022B300 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0020520 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x1C002062C (TextCopy.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     GreGetTextMetricsW @ 0x1C003E118 (GreGetTextMetricsW.c)
 *     xxxGetWindowSmIcon @ 0x1C00471A0 (xxxGetWindowSmIcon.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     _HasCaptionIcon @ 0x1C00A9D50 (_HasCaptionIcon.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0157754 (CALL_LPK.c)
 *     xxxClientExtTextOutW @ 0x1C0157790 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C0157E80 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     xxxGetWindowText @ 0x1C0157F9C (xxxGetWindowText.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243F48 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     DrawTextExWorker @ 0x1C025B19C (DrawTextExWorker.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        ULONG_PTR a1,
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
  __int64 v17; // r9
  int WindowText; // eax
  __int64 v19; // r14
  __int16 v20; // cx
  __int64 DPIServerInfo; // rax
  __int64 v22; // rcx
  int v23; // edx
  int v24; // r12d
  WCHAR *v25; // r10
  unsigned int v26; // r13d
  WCHAR *SourceString; // r8
  int v28; // r10d
  int *v29; // r11
  HBRUSH v31; // rax
  unsigned int Layout; // eax
  unsigned int v33; // r14d
  int v34; // r12d
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned __int64 v36; // rcx
  __int64 DPIMetrics; // rax
  int TextMetricsW; // eax
  int v39; // ecx
  int TextAlign; // eax
  int v41; // eax
  WCHAR *v42; // r9
  int *v43; // r11
  int v44; // r8d
  int v45; // r10d
  int v46; // edx
  unsigned int v47; // eax
  int v48; // [rsp+50h] [rbp-B0h]
  HBRUSH v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+64h] [rbp-9Ch]
  __int64 *v52; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h]
  int v55; // [rsp+7Ch] [rbp-84h]
  int v56; // [rsp+80h] [rbp-80h]
  struct _POINTL v57; // [rsp+88h] [rbp-78h] BYREF
  __int64 ThreadWin32Thread; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  char *v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  int v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B4h] [rbp-4Ch]
  _QWORD v64[2]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v65[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v66; // [rsp+120h] [rbp+20h]
  char v67[512]; // [rsp+160h] [rbp+60h] BYREF

  left = a3->left;
  WindowSmIcon = a5;
  v52 = (__int64 *)a6;
  v50 = 0;
  v57 = 0LL;
  v51 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( a1
    && !a5
    && (unsigned int)HasCaptionIcon(a1, (__int64)a6, (__int64)a3, 8LL)
    && (a7 & 2) == 0
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    WindowSmIcon = (struct tagCURSOR *)xxxGetWindowSmIcon(a1, a7 & 0x2000);
  }
  v48 = *(_DWORD *)(gpsi + 4572LL);
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
      v49 = *(HBRUSH *)(gpsi + 4944LL);
      goto LABEL_13;
    }
    v31 = *(HBRUSH *)(gpsi + 4856LL);
LABEL_62:
    v12 = *(_DWORD *)(gpsi + 4640LL);
    v49 = v31;
    goto LABEL_14;
  }
  if ( (a7 & 0x10) != 0 )
  {
    v13 = *(_DWORD *)(gpsi + 4628LL);
    v31 = *(HBRUSH *)(gpsi + 4816LL);
    goto LABEL_62;
  }
  v12 = *(_DWORD *)(gpsi + 4644LL);
  v13 = *(_DWORD *)(gpsi + 4580LL);
  v14 = *(HBRUSH *)(gpsi + 4720LL);
LABEL_11:
  v49 = v14;
  if ( (a7 & 0x20) != 0 )
  {
    v50 = 1;
LABEL_13:
    v48 = GreSetBkMode(a2, 1);
  }
LABEL_14:
  v55 = GreSetTextColor(a2, v12);
  v56 = GreSetBkColor(a2, v13);
  if ( WindowSmIcon )
  {
    v16 = 2LL;
    if ( (a7 & 2) == 0 )
    {
      if ( (a7 & 4) != 0 )
      {
        Layout = GreGetLayout(a2);
        v33 = Layout;
        v34 = Layout & 1;
        if ( (Layout & 1) != 0 )
          GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
        DrawCaptionIcon(a2, a3, WindowSmIcon, v49, a7);
        if ( v34 )
          GreSetLayout(a2, 0xFFFFFFFFLL, v33);
      }
      else
      {
        a3->left += a3->bottom - a3->top;
      }
    }
  }
  if ( (a7 & 8) != 0 )
  {
    v59 = 0LL;
    v60 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
    if ( a6 )
    {
      v36 = a6[1] - 2LL;
      if ( v36 >= *a6 )
        LOWORD(v36) = *a6;
      *a6 = v36;
      v19 = (unsigned __int16)v36 >> 1;
      *(_WORD *)(*((_QWORD *)a6 + 1) + 2 * v19) = 0;
      goto LABEL_25;
    }
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v67);
LABEL_23:
        LODWORD(v19) = WindowText;
        v20 = 2 * WindowText;
LABEL_24:
        LOWORD(v59) = v20;
        WORD1(v59) = v20 + 2;
        v60 = v67;
        v52 = &v59;
LABEL_25:
        if ( a4 )
        {
          v54 = GreSelectFont((__int64)a2, a4);
          memset(v65, 0, 0x44uLL);
          TextMetricsW = GreGetTextMetricsW(a2, (struct _TMW_INTERNAL *)v65);
          v66 = v65[0];
          if ( TextMetricsW )
            v39 = v66;
          else
            v39 = *(_DWORD *)(GetDPIServerInfo() + 40);
          v24 = (a3->top + a3->bottom - v39) / 2;
        }
        else
        {
          if ( (a7 & 2) != 0 )
          {
            DPIMetrics = GetDPIMetrics();
            v22 = *(_QWORD *)(DPIMetrics + 32);
            v23 = *(_DWORD *)(DPIMetrics + 44);
          }
          else
          {
            DPIServerInfo = GetDPIServerInfo();
            v22 = *(_QWORD *)(DPIServerInfo + 8);
            v23 = *(_DWORD *)(DPIServerInfo + 20);
          }
          v24 = (a3->top + a3->bottom - v23) / 2;
          v54 = GreSelectFont((__int64)a2, v22);
        }
        if ( v50 )
          FillCaptionGradient(a2, a3, a7 & 1);
        else
          FillRect(a2, a3, v49);
        if ( v49 == *(HBRUSH *)(gpsi + 4944LL) )
        {
          GreSetTextColor(a2, *(_DWORD *)(gpsi + 4640LL));
          GreSetBkColor(a2, *(_DWORD *)(gpsi + 4636LL));
        }
        if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientGetTextExtentPointW(a2, v25);
          v26 = 1;
        }
        else
        {
          v26 = 1;
          GreGetTextExtentW(a2, v25, v19, (struct tagSIZE *)&v57, 1);
        }
        if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x20) != 0 )
        {
          TextAlign = GreGetTextAlign(a2);
          v51 = GreSetTextAlign(a2, TextAlign | 0x100u);
        }
        if ( (a7 & 0x4000) != 0 || (_DWORD)v19 && v57.x > a3->right - a3->left - 2 )
        {
          v63 = 0LL;
          v61 = 20LL;
          v62 = 2;
          if ( (a7 & 0x4000) != 0 )
          {
            v47 = 34853;
          }
          else if ( !a1 || (v47 = 34854, (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x10) == 0) )
          {
            v47 = 34852;
          }
          DrawTextExWorker(a2, (unsigned __int16 *)v52[1], v19, a3, v47, (struct tagDRAWTEXTPARAMS *)&v61);
          v26 = 0;
        }
        else if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x10) != 0 )
        {
          v41 = CALL_LPK(ThreadWin32Thread);
          v46 = v45 - v44 - 2;
          if ( v41 )
            xxxClientExtTextOutW((int)a2, v46, v24, 4, (__int64)a3, v42, v19);
          else
            GreExtTextOutWInternal(a2, v46, v24, 4, a3, v42, v19, v43, v43, (unsigned int)v43);
        }
        else if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
        {
          xxxClientExtTextOutW((int)a2, v28, v24, 4, (__int64)a3, SourceString, v19);
        }
        else
        {
          GreExtTextOutWInternal(a2, v28, v24, 4, a3, SourceString, v19, v29, v29, (unsigned int)v29);
        }
        if ( a1 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 25LL) & 0x20) != 0 )
          GreSetTextAlign(a2, v51);
        if ( v54 )
          GreSelectFont((__int64)a2, v54);
        goto LABEL_50;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) )
      {
        v64[0] = 0LL;
        v64[1] = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)v64);
        WindowText = TextCopy((__int64)StrName, v67, 0xFFu);
        goto LABEL_23;
      }
    }
    *(_WORD *)v67 = 0;
    v20 = 0;
    LODWORD(v19) = 0;
    goto LABEL_24;
  }
  v26 = 1;
LABEL_50:
  GreSetTextColor(a2, v55);
  GreSetBkColor(a2, v56);
  if ( v49 == *(HBRUSH *)(gpsi + 4944LL) )
    GreSetBkMode(a2, v48);
  return v26;
}
