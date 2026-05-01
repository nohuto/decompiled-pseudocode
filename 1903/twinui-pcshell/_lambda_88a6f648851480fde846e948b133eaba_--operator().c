/*
 * XREFs of _lambda_88a6f648851480fde846e948b133eaba_::operator() @ 0x180047834
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_88a6f648851480fde846e948b133eaba___::Run @ 0x180047810 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_88a6f648851480fde846e948b133eaba___--.c)
 * Callees:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180035490 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1800491B8 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ?UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@6@@Z @ 0x180049520 (-UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Inte.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x18007D418 (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x180297714 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall lambda_88a6f648851480fde846e948b133eaba_::operator()(_QWORD *a1)
{
  int *v2; // rcx
  HWND v3; // rsi
  _DWORD *v4; // rcx
  __int64 v5; // r14
  unsigned __int64 i; // r15
  __int64 v7; // rcx
  unsigned int v8; // ebx
  const WCHAR *StringRawBuffer; // rax
  int updated; // eax
  HWND Ancestor; // rax
  WINBOOL fPending; // [rsp+20h] [rbp-58h] BYREF
  DWORD WindowThreadProcessId; // [rsp+24h] [rbp-54h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  LPVOID Context[2]; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15 = -2LL;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    *a1 + 128LL,
    *(_QWORD *)a1[1]);
  v2 = (int *)a1[2];
  if ( *(_DWORD *)(*a1 + 304LL) != *v2 )
  {
    v3 = (HWND)*v2;
    *(_QWORD *)&Rect.left = v3;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
      && fPending )
    {
      Context[0] = qword_180599F00;
      qword_180599F00[0] = &IamTraceLogging::`vftable';
      atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_180599F00);
      InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_180599F00);
    }
    v4 = (_DWORD *)*((_QWORD *)Context[0] + 1);
    if ( v4 && *v4 )
    {
      WindowThreadProcessId = GetWindowThreadProcessId(v3, (LPDWORD)&fPending);
      LODWORD(Context[0]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a1 + 16LL) + 288LL))(*a1 + 16LL);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        Context,
        &Rect,
        &WindowThreadProcessId,
        &fPending);
    }
    if ( *(_DWORD *)a1[3] == 1 )
    {
      GetWindowBand(v3, *a1 + 516LL);
      GetWindowRect(v3, &Rect);
      *(float *)(*a1 + 496LL) = (float)Rect.left;
      *(float *)(*a1 + 500LL) = (float)Rect.top;
      *(float *)(*a1 + 504LL) = (float)(Rect.right - Rect.left);
      *(float *)(*a1 + 508LL) = (float)(Rect.bottom - Rect.top);
      Ancestor = GetAncestor(v3, 1u);
      if ( Ancestor )
      {
        *(struct tagRECT *)Context = Rect;
        if ( MapWindowPoints(0LL, Ancestor, (LPPOINT)Context, 2u) )
        {
          *(float *)(*a1 + 496LL) = (float)SLODWORD(Context[0]);
          *(float *)(*a1 + 500LL) = (float)SHIDWORD(Context[0]);
          *(float *)(*a1 + 504LL) = (float)(LODWORD(Context[1]) - LODWORD(Context[0]));
          *(float *)(*a1 + 508LL) = (float)(HIDWORD(Context[1]) - HIDWORD(Context[0]));
        }
      }
      *(_BYTE *)(*a1 + 512LL) = 1;
      EnumPropsExW(v3, LightweightPropertySet::s_PropEnumCallback, *a1 + 208LL);
    }
    else
    {
      v5 = *a1;
      for ( i = 0LL; i < *(_QWORD *)(v5 + 216); ++i )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(v5 + 208) + 8 * i);
        v8 = *(_DWORD *)(v7 + 16);
        StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v7 + 8), 0LL);
        SetPropW(v3, StringRawBuffer, (HANDLE)v8);
      }
    }
    if ( IsWindowVisible(v3) )
      WindowWrapperBase::SetWindowId((WindowWrapperBase *)*a1, *(_DWORD *)a1[2], *(_DWORD *)a1[3]);
    wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
    if ( *(_QWORD *)(*a1 + 136LL) )
    {
      updated = WindowWrapperBase::UpdateDisplayRegions(*a1, *(_QWORD *)(*a1 + 128LL));
      if ( updated < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x638,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)updated,
          fPending);
        JUMPOUT(0x1800E1880LL);
      }
    }
  }
  return 0LL;
}
