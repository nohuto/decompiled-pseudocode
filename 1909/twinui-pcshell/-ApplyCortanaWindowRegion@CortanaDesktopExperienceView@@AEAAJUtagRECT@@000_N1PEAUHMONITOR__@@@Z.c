/*
 * XREFs of ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180045928
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180041304 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180025240 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x180045B9C (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x1800492C0 (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180084E40 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1801B6DC0 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801EE394 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegion(
        CortanaDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7,
        HMONITOR a8)
{
  bool v10; // r12
  LONG right; // r14d
  int v12; // edi
  HRGN v13; // rbx
  HRGN v14; // r14
  int v15; // eax
  unsigned int v16; // edi
  HRGN v18; // rax
  int v19; // r12d
  int v20; // eax
  __int64 v21; // rdx
  CortanaFlightingHelpers *v22; // rcx
  LANGID ThreadUILanguage; // ax
  LANGID v24; // ax
  CortanaDesktopExperienceView *v25; // rcx
  int v26; // r8d
  int v27; // eax
  HRGN RectRgnIndirect; // rax
  HRGN RectRgn; // rax
  int v30; // eax
  DWORD LastError; // edi
  LANGID v32; // ax
  LANGID v33; // ax
  CortanaDesktopExperienceView *v34; // rcx
  int v35; // r8d
  __int64 v36; // r9
  __int64 v37; // rdx
  int v38; // eax
  HRGN v39; // rax
  int v40; // [rsp+20h] [rbp-58h]
  _BYTE v41[4]; // [rsp+30h] [rbp-48h] BYREF
  int y2; // [rsp+34h] [rbp-44h]
  HRGN v43; // [rsp+38h] [rbp-40h] BYREF
  int v44; // [rsp+40h] [rbp-38h]
  HMONITOR v45; // [rsp+48h] [rbp-30h]
  struct tagRECT *v46; // [rsp+50h] [rbp-28h]
  __int64 v47; // [rsp+58h] [rbp-20h]
  struct tagRECT v48; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v47 = -2LL;
  v46 = a4;
  v45 = a8;
  v10 = a3->left > 0 || a3->top > 0 || a3->right > 0 || a3->bottom > 0;
  right = a2->right;
  v12 = right - a2->left;
  v44 = v12;
  y2 = a2->bottom - a2->top;
  v13 = 0LL;
  v43 = 0LL;
  if ( v10 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v43,
      RectRgnIndirect);
    v13 = v43;
    if ( !v43 )
    {
      v37 = 2189LL;
LABEL_62:
      v16 = -2147467259;
      v36 = 2147500037LL;
      goto LABEL_63;
    }
  }
  if ( !*((_BYTE *)this + 259) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(this) && *((_DWORD *)this + 36) == 4 )
  {
    RectRgn = CreateRectRgn(0, 0, v12, y2);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v43,
      RectRgn);
    v13 = v43;
    if ( !v43 )
    {
      v37 = 2198LL;
      goto LABEL_62;
    }
    v48 = *a2;
    v30 = CortanaDesktopExperienceView::ApplyCortiniWindowRegion(this, v43, &v48, v45);
    v16 = v30;
    if ( v30 < 0 )
    {
      v36 = (unsigned int)v30;
      v37 = 2202LL;
      goto LABEL_63;
    }
    v12 = v44;
  }
  if ( a6 )
  {
    if ( a7 )
    {
      v14 = CreateRectRgn(a5->left - a2->left, a5->top - a2->top, a5->right - a2->left, a5->bottom - a2->top);
      if ( v13 )
      {
        LastError = GetLastError();
        DeleteObject(v13);
        SetLastError(LastError);
      }
      v13 = v14;
      v43 = v14;
      if ( !v14 )
      {
        v37 = 2215LL;
        goto LABEL_62;
      }
    }
    else
    {
      if ( !v10 && *((_DWORD *)this + 36) != 4 )
      {
        v18 = CreateRectRgn(0, 0, v12, y2);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          &v43,
          v18);
        v13 = v43;
        if ( !v43 )
        {
          v37 = 2222LL;
          goto LABEL_62;
        }
      }
      v19 = v46->bottom - a2->top;
      y2 = v46->top - a2->top;
      v20 = CortanaDesktopExperienceView::RemoveRectFromRegion(
              (CortanaDesktopExperienceView *)(unsigned int)y2,
              v13,
              v46->left - a2->left,
              y2,
              v46->right - a2->left,
              v19);
      v16 = v20;
      if ( v20 < 0 )
      {
        v36 = (unsigned int)v20;
        v37 = 2230LL;
        goto LABEL_63;
      }
      if ( (*((_DWORD *)this + 35) == 1
         || (*((_BYTE *)this + 259) || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v22)) && !*((_DWORD *)this + 35))
        && *((_DWORD *)this + 36) != 6 )
      {
        ThreadUILanguage = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
          right = a5->left;
        v24 = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(v24) )
          v26 = 0;
        else
          v26 = a5->right - a2->left;
        v27 = CortanaDesktopExperienceView::RemoveRectFromRegion(v25, v13, v26, y2, right - a2->left, v19);
        v16 = v27;
        if ( v27 < 0 )
        {
          v36 = (unsigned int)v27;
          v37 = 2241LL;
LABEL_63:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v37,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)v36,
            v40);
          goto LABEL_16;
        }
      }
      else if ( !*((_BYTE *)this + 259) )
      {
        if ( IsReducedSearchBoxWidthEnabled((__int64)v22, v21) )
        {
          if ( *((_DWORD *)this + 62) == 2 )
          {
            v41[0] = 0;
            CortanaCapabilities::HasCortanaCapabilities(2048LL, v41);
            if ( v41[0] )
            {
              v32 = GetThreadUILanguage();
              if ( (unsigned int)IsBiDiLocale(v32) )
                right = a5->left;
              v33 = GetThreadUILanguage();
              v35 = (unsigned int)IsBiDiLocale(v33) ? 0 : a5->right - a2->left;
              v38 = CortanaDesktopExperienceView::RemoveRectFromRegion(v34, v13, v35, y2, right - a2->left, v19);
              v16 = v38;
              if ( v38 < 0 )
              {
                v36 = (unsigned int)v38;
                v37 = 2254LL;
                goto LABEL_63;
              }
            }
          }
        }
      }
    }
  }
  else if ( a7 )
  {
    v39 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v43,
      v39);
    v13 = v43;
    if ( !v43 )
    {
      v37 = 2266LL;
      goto LABEL_62;
    }
  }
  LOBYTE(a3) = 1;
  v15 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 21) + 144LL))(
          *((_QWORD *)this + 21),
          v13,
          a3);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8DE,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v15,
      v40);
  v16 = 0;
LABEL_16:
  if ( v13 )
    DeleteObject(v13);
  return v16;
}
