/*
 * XREFs of ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1800F9DE4
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F3F40 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18004BF34 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_RecoverApplicationViews(
        CApplicationManager *this,
        struct IViewEventDispatcherCrashRecovery *a2)
{
  unsigned int i; // edi
  __int64 v5; // rbx
  unsigned int v6; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // [rsp+70h] [rbp+30h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  if ( (*(int (__fastcall **)(struct IViewEventDispatcherCrashRecovery *, _QWORD, __int64 *))(*(_QWORD *)a2 + 24LL))(
         a2,
         *((_QWORD *)this + 103),
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v6) >= 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v8 = 0LL;
      v5 = v7;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v5 + 32LL))(
             v5,
             i,
             &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
             &v8) >= 0 )
        CApplicationManager::_HandleViewCreation(this, v8, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
