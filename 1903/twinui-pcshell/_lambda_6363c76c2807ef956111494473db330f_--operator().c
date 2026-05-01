/*
 * XREFs of _lambda_6363c76c2807ef956111494473db330f_::operator() @ 0x1803099E0
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ComposableShell::Multitasking::ISwitchItem___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::ComposableShell::Multitasking::ISwitchItem____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Internal::ComposableShell::Multitasking::ISwitchItem______XWinRT::IntVersionTag_::Do__lambda_6363c76c2807ef956111494473db330f___lambda_e57c3848668b88c0b9997c3a62d31bc2___ @ 0x180308B38 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_180308B38.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6363c76c2807ef956111494473db330f_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 40))(
         *(_QWORD *)(v2 + 40),
         &GUID_257dba86_fcaf_5c4e_b3ba_b3a89d297d08,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)a1[1]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return (unsigned int)v3;
}
