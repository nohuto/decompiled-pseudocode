/*
 * XREFs of _lambda_84697e2701743979e5f53cc48475d4ed_::operator() @ 0x180282A1C
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Tabs::ShellTab___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Tabs::ShellTab____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ComposableShell::Tabs::ShellTab___0_1_0____XWinRT::IntVersionTag_::Do__lambda_84697e2701743979e5f53cc48475d4ed___lambda_447c323ccc1a9d5557ace21403b1c74e___ @ 0x18028193C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18028193C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_84697e2701743979e5f53cc48475d4ed_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_2b1369e2_c79d_5be2_8c0b_7763ddd67bc8, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return (unsigned int)v4;
}
