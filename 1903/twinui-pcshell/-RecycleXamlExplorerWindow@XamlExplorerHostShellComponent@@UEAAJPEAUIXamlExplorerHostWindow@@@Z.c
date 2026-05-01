/*
 * XREFs of ?RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z @ 0x1802B2540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801408F8 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 *     ??$RecycleXamlExplorerWindow@_K_K@XamlExplorerHostTelemetry@@SAX$$QEA_K0@Z @ 0x1802B0254 (--$RecycleXamlExplorerWindow@_K_K@XamlExplorerHostTelemetry@@SAX$$QEA_K0@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802B265C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4Rep.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlExplorerHostShellComponent::RecycleXamlExplorerWindow(
        XamlExplorerHostShellComponent *this,
        struct IXamlExplorerHostWindow *a2)
{
  char *v4; // rdx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  struct IXamlExplorerHostWindow *v9; // [rsp+58h] [rbp+20h] BYREF

  try
  {
    wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsageToService(this);
    AcquireSRWLockExclusive((PSRWLOCK)this + 13);
    v8 = (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3;
    v9 = a2;
    XamlExplorerHostTelemetry::RecycleXamlExplorerWindow<unsigned __int64,unsigned __int64>((__int64)&v9, (__int64)&v8);
    v8 = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    v4 = (char *)*((_QWORD *)this + 10);
    if ( *((char **)this + 11) == v4 )
    {
      std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
        (char **)this + 9,
        v4,
        &v8);
    }
    else
    {
      *(_QWORD *)v4 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v4);
      *((_QWORD *)this + 10) += 8LL;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    if ( this != (XamlExplorerHostShellComponent *)-104LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE9,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v5);
  }
  return result;
}
