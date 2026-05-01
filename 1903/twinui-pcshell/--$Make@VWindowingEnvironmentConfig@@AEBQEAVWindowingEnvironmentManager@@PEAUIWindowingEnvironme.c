/*
 * XREFs of ??$Make@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@12@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x1802AADEC
 * Callers:
 *     ??$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@wil@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x1802AB0A4 (--$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEn.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWindowingEnvironmentConfig@@UIWindowingEnvironmentConfigInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072670 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIWin.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0WindowingEnvironmentConfig@@QEAA@PEAUIWindowingEnvironmentManagerInternal@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@W4WindowingEnvironmentType@@@Z @ 0x1802ADB10 (--0WindowingEnvironmentConfig@@QEAA@PEAUIWindowingEnvironmentManagerInternal@@PEAUIWindowingEnvi.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<WindowingEnvironmentConfig,WindowingEnvironmentManager * const &,Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel *,enum WindowingEnvironmentType &>(
        volatile signed __int32 **a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  void *v8; // rax
  __int64 v9; // rdi

  *a1 = 0LL;
  v8 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = WindowingEnvironmentConfig::WindowingEnvironmentConfig(
           v8,
           (*a2 + 144LL) & -(__int64)(*a2 != 0LL),
           *a3,
           *a4,
           1,
           -2LL,
           v8,
           v8,
           v8);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IWindowingEnvironmentConfig,IWindowingEnvironmentConfigInternal>::Release(*a1);
    *a1 = (volatile signed __int32 *)v9;
  }
  return a1;
}
