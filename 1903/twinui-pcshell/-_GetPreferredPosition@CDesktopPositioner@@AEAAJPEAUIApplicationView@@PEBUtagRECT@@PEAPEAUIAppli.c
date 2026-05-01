/*
 * XREFs of ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800554E0
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180054EE4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18005515C (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x180055B6C (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x180056070 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18014C674 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::_GetPreferredPosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        const struct tagRECT *a3,
        struct IApplicationViewPosition **a4)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int OffsetRectFromSize; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, LPVOID, LPVOID, __int64 *); // rbx
  CDesktopPositioner *v17; // rcx
  int fixed; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-79h]
  void *v21; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+38h] [rbp-61h] BYREF
  int v23; // [rsp+40h] [rbp-59h] BYREF
  struct tagSIZE v24; // [rsp+48h] [rbp-51h] BYREF
  struct tagRECT v25; // [rsp+50h] [rbp-49h] BYREF
  LPVOID v26; // [rsp+60h] [rbp-39h] BYREF
  __int64 v27; // [rsp+68h] [rbp-31h]
  __int64 v28; // [rsp+70h] [rbp-29h]
  LPVOID pv[4]; // [rsp+78h] [rbp-21h] BYREF
  struct tagRECT v30; // [rsp+98h] [rbp-1h] BYREF
  struct tagRECT v31; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  pv[3] = (LPVOID)-2LL;
  *a4 = 0LL;
  pv[0] = 0LL;
  v8 = *(_QWORD *)a2;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v8 + 136))(a2, pv);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x604,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v9,
      v20);
    goto LABEL_9;
  }
  v26 = 0LL;
  v11 = *(_QWORD *)a2;
  v27 = -1LL;
  v28 = -1LL;
  OffsetRectFromSize = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v11 + 488))(a2, &v26);
  v10 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v14 = 1543LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)OffsetRectFromSize,
      v20);
    goto LABEL_6;
  }
  OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, LPVOID, int *))(**((_QWORD **)this + 32) + 24LL))(
                         *((_QWORD *)this + 32),
                         pv[0],
                         &v23);
  v10 = OffsetRectFromSize;
  if ( OffsetRectFromSize < 0 )
  {
    v14 = 1546LL;
    goto LABEL_19;
  }
  if ( v23 == 1 )
  {
    OffsetRectFromSize = (*(__int64 (__fastcall **)(_QWORD, LPVOID, struct tagSIZE *))(**((_QWORD **)this + 32) + 40LL))(
                           *((_QWORD *)this + 32),
                           pv[0],
                           &v24);
    v10 = OffsetRectFromSize;
    if ( OffsetRectFromSize < 0 )
    {
      v14 = 1553LL;
      goto LABEL_19;
    }
    OffsetRectFromSize = CDesktopPositioner::_GetOffsetRectFromSize(this, a3, a3, v24, &v25);
    v10 = OffsetRectFromSize;
    if ( OffsetRectFromSize < 0 )
    {
      v14 = 1559LL;
      goto LABEL_19;
    }
    v22 = 0LL;
    if ( IsRectEmpty(a3) )
    {
      v15 = *((_QWORD *)this + 31);
      v16 = *(int (__fastcall **)(__int64, LPVOID, LPVOID, __int64 *))(*(_QWORD *)v15 + 24LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
      if ( v16(v15, pv[0], v26, &v22) >= 0
        && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v22 + 56LL))(v22, &v31) >= 0
        && CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v17, &v31, &v30) >= 0 )
      {
        v25.left = v30.left;
        v25.top = v30.top;
        v25.right = v24.cx + v30.left;
        v25.bottom = v30.top + v24.cy;
      }
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    fixed = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(&v21);
    v10 = fixed;
    if ( fixed >= 0 )
    {
      fixed = CDesktopPositioner::_FixPosition(
                (__int64)this,
                2u,
                (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v21,
                a4);
      v10 = fixed;
      if ( fixed >= 0 )
      {
        v10 = 0;
        goto LABEL_31;
      }
      v19 = 1584LL;
    }
    else
    {
      v19 = 1583LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)fixed,
      v20);
LABEL_31:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    goto LABEL_6;
  }
  v10 = -2147023728;
LABEL_6:
  if ( v26 )
  {
    CoTaskMemFree(v26);
    v26 = 0LL;
  }
  v27 = 0LL;
  v28 = 0LL;
LABEL_9:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v10;
}
