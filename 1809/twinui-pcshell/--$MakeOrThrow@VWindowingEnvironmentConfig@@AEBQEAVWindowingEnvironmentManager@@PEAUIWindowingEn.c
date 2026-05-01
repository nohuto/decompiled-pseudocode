/*
 * XREFs of ??$MakeOrThrow@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@wil@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@WRL@Microsoft@@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x180254104
 * Callers:
 *     _lambda_eccf4a5edd71f12daaca6c5537fa4813_::operator() @ 0x180254EE8 (_lambda_eccf4a5edd71f12daaca6c5537fa4813_--operator().c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowingEnvironmentConfig@@@12@AEBQEAVWindowingEnvironmentManager@@$$QEAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@AEAW4WindowingEnvironmentType@@@Z @ 0x180253E4C (--$Make@VWindowingEnvironmentConfig@@AEBQEAVWindowingEnvironmentManager@@PEAUIWindowingEnvironme.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<WindowingEnvironmentConfig,WindowingEnvironmentManager * const &,Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel *,enum WindowingEnvironmentType &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<WindowingEnvironmentConfig,WindowingEnvironmentManager * const &,Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel *,enum WindowingEnvironmentType &>(
    a1,
    a2,
    a3,
    a4);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 56LL, (__int64)"internal\\sdk\\inc\\wil\\wrl.h", v5);
    __debugbreak();
  }
  return a1;
}
