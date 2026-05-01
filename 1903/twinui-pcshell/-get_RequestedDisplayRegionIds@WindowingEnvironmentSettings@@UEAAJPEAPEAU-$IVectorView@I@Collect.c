/*
 * XREFs of ?get_RequestedDisplayRegionIds@WindowingEnvironmentSettings@@UEAAJPEAPEAU?$IVectorView@I@Collections@Foundation@Windows@@@Z @ 0x180282B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUITreeNode@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUITreeNode@ComposableShell@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A4450 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAUITr.c)
 *     ??$make_agile_vector@I@cshell@@YA?AV?$com_ptr_t@V?$AgileVector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1802792DC (--$make_agile_vector@I@cshell@@YA-AV-$com_ptr_t@V-$AgileVector@IU-$DefaultEqualityPredicate@I@In.c)
 *     ?GetView@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@I@345@@Z @ 0x18027DE10 (-GetView@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$Def.c)
 *     ?InsertAtInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJII_N@Z @ 0x18027E500 (-InsertAtInternal@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Window.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentSettings::get_RequestedDisplayRegionIds(__int64 a1, __int64 *a2)
{
  int *v4; // rsi
  int v5; // eax
  int *v6; // rbx
  int View; // eax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int64 *v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  try
  {
    cshell::make_agile_vector<unsigned int>(&v11);
    v6 = *(int **)(a1 + 128);
    v4 = *(int **)(a1 + 136);
    while ( v6 != v4 )
    {
      v5 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::InsertAtInternal(
             (__int64)v11,
             0,
             *v6,
             1);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          526LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
          (const char *)(unsigned int)v5);
      ++v6;
    }
    View = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::GetView(
             v11,
             a2);
    if ( View < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        529LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
        (const char *)(unsigned int)View);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::ComposableShell::ITreeNode *>,Windows::Foundation::Collections::IIterable<Windows::Internal::ComposableShell::ITreeNode *>,Microsoft::WRL::FtmBase>::Release(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x214,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
                           v8);
  }
  return result;
}
