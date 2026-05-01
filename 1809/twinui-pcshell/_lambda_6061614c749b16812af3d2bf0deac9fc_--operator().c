/*
 * XREFs of _lambda_6061614c749b16812af3d2bf0deac9fc_::operator() @ 0x1800668C4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6061614c749b16812af3d2bf0deac9fc___::Run @ 0x1800668A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_6061614c749b16812af3d2bf0deac9fc___--.c)
 * Callees:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001ED38 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180066AA4 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x180066AEC (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x180241644 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

__int64 __fastcall lambda_6061614c749b16812af3d2bf0deac9fc_::operator()(__int64 *a1)
{
  const char *v2; // r9
  int *v3; // rcx
  HWND v4; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // r14
  unsigned __int64 i; // r15
  __int64 v8; // rcx
  unsigned int v9; // ebx
  const WCHAR *StringRawBuffer; // rax
  __int64 result; // rax
  HWND Ancestor; // rax
  WINBOOL fPending; // [rsp+20h] [rbp-58h] BYREF
  DWORD WindowThreadProcessId; // [rsp+24h] [rbp-54h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  LPVOID Context[2]; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15 = -2LL;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    *a1 + 128,
    *(_QWORD *)a1[1]);
  try
  {
    v3 = (int *)a1[2];
    if ( *(_DWORD *)(*a1 + 296) != *v3 )
    {
      v4 = (HWND)*v3;
      *(_QWORD *)&Rect.left = v4;
      Context[0] = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
        && fPending )
      {
        Context[0] = qword_18050FB50;
        qword_18050FB50[0] = &IamTraceLogging::`vftable';
        atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_18050FB50);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_18050FB50);
      }
      v5 = (_DWORD *)*((_QWORD *)Context[0] + 1);
      if ( v5 && *v5 )
      {
        WindowThreadProcessId = GetWindowThreadProcessId(v4, (LPDWORD)&fPending);
        LODWORD(Context[0]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a1 + 16) + 272LL))(*a1 + 16);
        ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
          Context,
          &Rect,
          &WindowThreadProcessId,
          &fPending);
      }
      v6 = *a1;
      if ( *(_DWORD *)a1[3] == 1 )
      {
        GetWindowBand(v4, v6 + 500);
        GetWindowRect(v4, &Rect);
        *(float *)(*a1 + 480) = (float)Rect.left;
        *(float *)(*a1 + 484) = (float)Rect.top;
        *(float *)(*a1 + 488) = (float)(Rect.right - Rect.left);
        *(float *)(*a1 + 492) = (float)(Rect.bottom - Rect.top);
        Ancestor = GetAncestor(v4, 1u);
        if ( Ancestor )
        {
          *(struct tagRECT *)Context = Rect;
          if ( MapWindowPoints(0LL, Ancestor, (LPPOINT)Context, 2u) )
          {
            *(float *)(*a1 + 480) = (float)SLODWORD(Context[0]);
            *(float *)(*a1 + 484) = (float)SHIDWORD(Context[0]);
            *(float *)(*a1 + 488) = (float)(LODWORD(Context[1]) - LODWORD(Context[0]));
            *(float *)(*a1 + 492) = (float)(HIDWORD(Context[1]) - HIDWORD(Context[0]));
          }
        }
        *(_BYTE *)(*a1 + 496) = 1;
        EnumPropsExW(v4, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, *a1 + 200);
      }
      else
      {
        for ( i = 0LL; i < *(_QWORD *)(v6 + 208); ++i )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(v6 + 200) + 8 * i);
          v9 = *(_DWORD *)(v8 + 16);
          StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v8 + 8), 0LL);
          SetPropW(v4, StringRawBuffer, (HANDLE)v9);
        }
      }
      if ( IsWindowVisible(v4) )
        WindowWrapperBase::SetWindowId((WindowWrapperBase *)*a1, *(_DWORD *)a1[2], *(_DWORD *)a1[3]);
      wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x59B,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v2);
  }
  return result;
}
