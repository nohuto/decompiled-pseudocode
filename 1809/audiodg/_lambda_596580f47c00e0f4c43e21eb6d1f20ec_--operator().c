/*
 * XREFs of _lambda_596580f47c00e0f4c43e21eb6d1f20ec_::operator() @ 0x14004868C
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____ptr64____XWinRT::IntVersionTag_::Do__lambda_596580f47c00e0f4c43e21eb6d1f20ec___lambda_b604df33f0504b685457b96bcf3a28c5___ @ 0x140046718 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_140046718.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019F84 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_596580f47c00e0f4c43e21eb6d1f20ec_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 40))(
         *(_QWORD *)(v2 + 40),
         &GUID_7eeb51c3_d70e_548a_85c2_3cf71b4a124c,
         &v5);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)a1[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  return (unsigned int)v3;
}
