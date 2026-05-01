/*
 * XREFs of _lambda_63007384cbc26d4c9c9706101aeec82a_::operator() @ 0x180160F84
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0____XWinRT::IntVersionTag_::Do__lambda_63007384cbc26d4c9c9706101aeec82a___lambda_7a28a840d7801b8eb9c1ca3bdd184909___ @ 0x18015F310 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18015F310.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_63007384cbc26d4c9c9706101aeec82a_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_c6850dd9_2ffa_5d90_82ff_1d21fb413706, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return (unsigned int)v4;
}
