/*
 * XREFs of ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18005767C
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180055F30 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18005692C (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800570A0 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180122F48 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18034017C (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_GetPreferredPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        struct IApplicationViewPosition **a4)
{
  int OffsetRectFromSize; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  __int64 v11; // rbx
  CDesktopPositioner *v12; // rcx
  int fixed; // eax
  __int64 v14; // rdx
  void *v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+38h] [rbp-41h] BYREF
  int v17; // [rsp+40h] [rbp-39h] BYREF
  struct tagSIZE v18; // [rsp+48h] [rbp-31h] BYREF
  struct tagRECT v19; // [rsp+50h] [rbp-29h] BYREF
  LPVOID pv[4]; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v21; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v22; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  pv[3] = (LPVOID)-2LL;
  *a4 = 0LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  OffsetRectFromSize = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, pv);
  v8 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v10 = 1559LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)OffsetRectFromSize);
    goto LABEL_5;
  }
  OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, LPVOID, int *))(**((_QWORD **)this + 32) + 24LL))(
                         *((_QWORD *)this + 32),
                         pv[0],
                         &v17);
  v8 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v10 = 1562LL;
    goto LABEL_14;
  }
  if ( v17 != 1 )
  {
    v8 = -2147023728;
    goto LABEL_5;
  }
  OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, LPVOID, struct tagSIZE *))(**((_QWORD **)this + 32) + 40LL))(
                         *((_QWORD *)this + 32),
                         pv[0],
                         &v18);
  v8 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v10 = 1569LL;
    goto LABEL_14;
  }
  OffsetRectFromSize = CDesktopPositioner::_GetOffsetRectFromSize(this, a3, a3, v18, &v19);
  v8 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v10 = 1575LL;
    goto LABEL_14;
  }
  v16 = 0LL;
  if ( IsRectEmpty(a3) )
  {
    v11 = *((_QWORD *)this + 31);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    if ( (*(int (__fastcall **)(__int64, LPVOID, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, pv[0], &v16) >= 0
      && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v16 + 56LL))(v16, &v22) >= 0
      && CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v12, &v22, &v21) >= 0 )
    {
      v19.left = v21.left;
      v19.top = v21.top;
      v19.right = v18.cx + v21.left;
      v19.bottom = v21.top + v18.cy;
    }
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v15);
  v8 = fixed;
  if ( fixed >= 0 )
  {
    fixed = CDesktopPositioner::_FixPosition((__int64)this, 2u, (__int64)v15, a4);
    v8 = fixed;
    if ( fixed >= 0 )
    {
      v8 = 0;
      goto LABEL_26;
    }
    v14 = 1600LL;
  }
  else
  {
    v14 = 1599LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)fixed);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
LABEL_5:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v8;
}
