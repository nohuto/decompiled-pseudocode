/*
 * XREFs of ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180033400
 * Callers:
 *     ?ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@PEAU2@@Z @ 0x180031870 (-ConvertForMonitorAndChromeConfiguration@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonit.c)
 *     ?ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplicationView@@PEAU2@@Z @ 0x180332220 (-ConvertForMonitorAndView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z @ 0x1803322E0 (-ConvertForView@WindowSizeConverter@@UEAAJUtagSIZE@@PEAUIApplicationView@@PEAU2@@Z.c)
 * Callees:
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180031A6C (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 *     wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___ @ 0x180031B84 (wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowSizeConverter::ConvertWithViewInfo(
        WindowSizeConverter *this,
        struct tagSIZE a2,
        struct SizeConversionViewInfo *a3,
        struct tagSIZE *a4)
{
  LONG cx; // esi
  __int64 v8; // rbx
  int v9; // eax
  int LastError; // r14d
  int v11; // eax
  int v12; // eax
  __int64 *v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  HWND v19; // r14
  int v20; // r15d
  const char *v21; // r9
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // [rsp+28h] [rbp-79h] BYREF
  __int64 v32; // [rsp+30h] [rbp-71h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-69h] BYREF
  _DWORD v34[3]; // [rsp+3Ch] [rbp-65h] BYREF
  __int128 v35; // [rsp+48h] [rbp-59h] BYREF
  __int64 **v36; // [rsp+58h] [rbp-49h]
  __int64 *v37; // [rsp+68h] [rbp-39h] BYREF
  HWND hWnd; // [rsp+70h] [rbp-31h] BYREF
  struct tagSIZE v39; // [rsp+78h] [rbp-29h]
  __int64 v40; // [rsp+80h] [rbp-21h]
  __int64 v41; // [rsp+88h] [rbp-19h]
  struct tagRECT Rect; // [rsp+90h] [rbp-11h] BYREF
  struct tagRECT v43; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v44; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v40 = -2LL;
  cx = a2.cx;
  v39 = a2;
  v8 = *((_QWORD *)a3 + 2);
  v41 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)&Rect.left = v8;
  *(_QWORD *)&v35 = &Rect;
  *((_QWORD *)&v35 + 1) = this;
  v9 = wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2___((__int64)&v35);
  LastError = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v9,
      v31);
  else
    LastError = 0;
  if ( LastError < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)LastError,
      v31);
    goto LABEL_28;
  }
  v31 = 0LL;
  v37 = &v31;
  *(_QWORD *)&Rect.left = v8;
  *(_QWORD *)&v35 = this;
  *((_QWORD *)&v35 + 1) = &Rect;
  v36 = &v37;
  v11 = wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___((__int64)&v35);
  LastError = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x248,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v11,
      v31);
  else
    LastError = 0;
  if ( LastError < 0 )
  {
    v26 = (unsigned int)LastError;
    v27 = 594LL;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v31 + 112LL))(
            v31,
            255LL,
            *((_DWORD *)a3 + 6) & 1);
    LastError = v12;
    if ( v12 >= 0 )
    {
      v13 = (__int64 *)*((_QWORD *)a3 + 4);
      v37 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64 *))(*v13 + 8))(v13);
      v14 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, unsigned int *))(*v13 + 48))(v13, v34, &v33);
      LastError = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x259,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
          (const char *)(unsigned int)v14,
          v31);
LABEL_25:
        (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
        goto LABEL_26;
      }
      v32 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 144LL))(v31, &v32);
      LastError = v15;
      if ( v15 < 0 )
      {
        v28 = (unsigned int)v15;
        v29 = 604LL;
        goto LABEL_46;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 64LL))(v32, v34[0], v33);
      LastError = v16;
      if ( v16 < 0 )
      {
        v28 = (unsigned int)v16;
        v29 = 605LL;
        goto LABEL_46;
      }
      v17 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v31 + 24LL))(v31, &hWnd);
      LastError = v17;
      if ( v17 < 0 )
      {
        v28 = (unsigned int)v17;
        v29 = 608LL;
        goto LABEL_46;
      }
      v44 = 0uLL;
      if ( (*((_BYTE *)a3 + 24) & 2) == 0 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v31 + 120LL))(v31, &v44);
        LastError = v18;
        if ( v18 < 0 )
        {
          v28 = (unsigned int)v18;
          v29 = 613LL;
          goto LABEL_46;
        }
      }
      v35 = v44;
      v19 = hWnd;
      v20 = *((_DWORD *)a3 + 10);
      *a4 = 0LL;
      Rect = 0LL;
      if ( GetWindowRect(v19, &Rect) )
      {
        v43 = 0LL;
        if ( GetClientRect(v19, &v43) )
        {
          v22 = v43.top + Rect.bottom + DWORD1(v35) - HIDWORD(v35) - Rect.top - v43.bottom;
          a4->cx = v43.left + Rect.right + v35 - DWORD2(v35) - Rect.left - v43.right + v20 * cx / 100;
          a4->cy = v22 + v20 * v39.cy / 100;
          LastError = 0;
LABEL_21:
          if ( LastError >= 0 )
          {
            LastError = 0;
            goto LABEL_23;
          }
          v28 = (unsigned int)LastError;
          v29 = 615LL;
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v29,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
            (const char *)v28,
            v31);
LABEL_23:
          v23 = v32;
          if ( v32 )
          {
            v32 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
          goto LABEL_25;
        }
        v30 = 630LL;
      }
      else
      {
        v30 = 624LL;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v30,
                    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
                    v21);
      goto LABEL_21;
    }
    v26 = (unsigned int)v12;
    v27 = 595LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)v26,
    v31);
LABEL_26:
  v24 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_28:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)LastError;
}
