/*
 * XREFs of ?RecycleXamlExplorerWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindow@@@Z @ 0x18025B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1802595A0 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18025B1E4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4Rep.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlExplorerHostShellComponent::RecycleXamlExplorerWindow(
        RTL_SRWLOCK *this,
        struct IXamlExplorerHostWindow *a2)
{
  __int64 *Ptr; // rdx
  const char *v5; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IXamlExplorerHostWindow *v8; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v9; // [rsp+58h] [rbp+20h]

  try
  {
    wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsageToService(this);
    AcquireSRWLockExclusive(this + 13);
    v9 = this + 13;
    v8 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    Ptr = (__int64 *)this[10].Ptr;
    if ( this[11].Ptr == Ptr )
    {
      std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
        &this[9].Ptr,
        Ptr,
        (__int64 *)&v8);
    }
    else
    {
      *Ptr = (__int64)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(Ptr);
      this[10].Ptr = (char *)this[10].Ptr + 8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    if ( this != (RTL_SRWLOCK *)-104LL )
      ReleaseSRWLockExclusive(this + 13);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD5,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v5);
  }
  return result;
}
