/*
 * XREFs of _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18002B380
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run @ 0x18002B370 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--Run.c)
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6fa41624ad117cbea5b5b5fb1da71b97___ @ 0x18002CD80 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--A.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator()(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+68h] [rbp+28h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(_BYTE *)(*a1 + 129) = 0;
  v2 = *(__int64 **)(*a1 + 96);
  v3 = *(__int64 **)(*a1 + 104);
  while ( v2 != v3 )
  {
    v4 = *v2;
    v9 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 40LL))(
           v4,
           &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67,
           &v8) >= 0 )
    {
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 56LL))(v8, v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    ++v2;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  v8 = *a1;
  v7[0] = &v8;
  v7[1] = &v9;
  return Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_6fa41624ad117cbea5b5b5fb1da71b97___(
           v8 + 72,
           v7);
}
