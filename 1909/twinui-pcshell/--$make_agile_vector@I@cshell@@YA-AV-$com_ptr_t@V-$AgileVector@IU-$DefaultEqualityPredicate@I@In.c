/*
 * XREFs of ??$make_agile_vector@I@cshell@@YA?AV?$com_ptr_t@V?$AgileVector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1802987CC
 * Callers:
 *     ?get_RequestedDisplayRegionIds@WindowingEnvironmentSettings@@UEAAJPEAPEAU?$IVectorView@I@Collections@Foundation@Windows@@@Z @ 0x1802A1F40 (-get_RequestedDisplayRegionIds@WindowingEnvironmentSettings@@UEAAJPEAPEAU-$IVectorView@I@Collect.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@I@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@5678@@Z @ 0x18029679C (--$Make@V-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$Def.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall cshell::make_agile_vector<unsigned int>(_QWORD *a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int> const &,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::permission>(&v4);
  if ( !v4 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      106LL,
      (__int64)"internal\\onecoreuapshell\\inc\\winrt_utility.h",
      (const char *)0x8007000ELL);
    __debugbreak();
  }
  *a1 = v4;
  return a1;
}
