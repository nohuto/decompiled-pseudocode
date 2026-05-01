/*
 * XREFs of ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1800171C4
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180016A9C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180017438 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18007A1D0 (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801884A4 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
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
  bool v10; // r15
  int v11; // r13d
  int v12; // edi
  HRGN v13; // rbx
  HRGN v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  HRGN RectRgnIndirect; // rax
  HRGN v19; // rax
  struct tagRECT *v20; // r15
  int v21; // eax
  CortanaFlightingHelpers *v22; // rcx
  LANGID ThreadUILanguage; // ax
  LONG v24; // edi
  LANGID v25; // ax
  int v26; // eax
  CortanaDesktopExperienceView *left; // rcx
  int v28; // r8d
  int v29; // eax
  __int64 v30; // rdx
  HRGN RectRgn; // rax
  int v32; // eax
  __int64 v33; // r9
  HRGN v34; // rax
  int v35; // [rsp+20h] [rbp-58h]
  HGDIOBJ ho; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+38h] [rbp-40h]
  HMONITOR v38; // [rsp+40h] [rbp-38h]
  struct tagRECT *v39; // [rsp+48h] [rbp-30h]
  __int64 v40; // [rsp+50h] [rbp-28h]
  struct tagRECT v41; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v40 = -2LL;
  v39 = a4;
  v38 = a8;
  v10 = a3->left > 0 || a3->top > 0 || a3->right > 0 || a3->bottom > 0;
  v11 = a2->right - a2->left;
  v12 = a2->bottom - a2->top;
  v37 = v12;
  v13 = 0LL;
  ho = 0LL;
  if ( v10 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      RectRgnIndirect);
    v13 = (HRGN)ho;
    if ( !ho )
    {
      v30 = 1981LL;
LABEL_51:
      v16 = -2147467259;
      v33 = 2147500037LL;
      goto LABEL_52;
    }
  }
  if ( !*((_BYTE *)this + 235) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(this) && *((_DWORD *)this + 36) == 4 )
  {
    RectRgn = CreateRectRgn(0, 0, v11, v12);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      RectRgn);
    v13 = (HRGN)ho;
    if ( !ho )
    {
      v30 = 1990LL;
      goto LABEL_51;
    }
    v41 = *a2;
    v32 = CortanaDesktopExperienceView::ApplyCortiniWindowRegion(this, (HRGN)ho, &v41, v38);
    v16 = v32;
    if ( v32 < 0 )
    {
      v33 = (unsigned int)v32;
      v30 = 1994LL;
      goto LABEL_52;
    }
    v12 = v37;
  }
  if ( a6 )
  {
    if ( a7 )
    {
      v14 = CreateRectRgn(a5->left - a2->left, a5->top - a2->top, a5->right - a2->left, a5->bottom - a2->top);
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
        &ho,
        v14);
      v13 = (HRGN)ho;
      if ( !ho )
      {
        v30 = 2007LL;
        goto LABEL_51;
      }
    }
    else
    {
      if ( !v10 && *((_DWORD *)this + 36) != 4 )
      {
        v19 = CreateRectRgn(0, 0, v11, v12);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
          &ho,
          v19);
        v13 = (HRGN)ho;
        if ( !ho )
        {
          v30 = 2014LL;
          goto LABEL_51;
        }
      }
      v20 = v39;
      v21 = CortanaDesktopExperienceView::RemoveRectFromRegion(
              (CortanaDesktopExperienceView *)(unsigned int)(v39->bottom - a2->top),
              v13,
              v39->left - a2->left,
              v39->top - a2->top,
              v39->right - a2->left,
              v39->bottom - a2->top);
      v16 = v21;
      if ( v21 < 0 )
      {
        v33 = (unsigned int)v21;
        v30 = 2022LL;
        goto LABEL_52;
      }
      if ( (*((_DWORD *)this + 35) == 1
         || (*((_BYTE *)this + 235) || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v22)) && !*((_DWORD *)this + 35))
        && *((_DWORD *)this + 36) != 6 )
      {
        ThreadUILanguage = GetThreadUILanguage();
        v24 = (unsigned int)IsBiDiLocale(ThreadUILanguage) ? a5->left : a2->right;
        v25 = GetThreadUILanguage();
        v26 = IsBiDiLocale(v25);
        left = (CortanaDesktopExperienceView *)(unsigned int)a2->left;
        v28 = v26 ? 0 : a5->right - (_DWORD)left;
        v29 = CortanaDesktopExperienceView::RemoveRectFromRegion(
                left,
                v13,
                v28,
                v20->top - a2->top,
                v24 - (_DWORD)left,
                v20->bottom - a2->top);
        v16 = v29;
        if ( v29 < 0 )
        {
          v33 = (unsigned int)v29;
          v30 = 2033LL;
LABEL_52:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v30,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)v33,
            v35);
          goto LABEL_14;
        }
      }
    }
  }
  else if ( a7 )
  {
    v34 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      v34);
    v13 = (HRGN)ho;
    if ( !ho )
    {
      v30 = 2042LL;
      goto LABEL_51;
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
      (void *)0x7FD,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v15,
      v35);
  v16 = 0;
LABEL_14:
  if ( v13 )
    DeleteObject(v13);
  return v16;
}
