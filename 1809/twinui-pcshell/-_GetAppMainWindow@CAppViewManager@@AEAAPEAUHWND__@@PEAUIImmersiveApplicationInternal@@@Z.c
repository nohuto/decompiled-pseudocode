/*
 * XREFs of ?_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180110578
 * Callers:
 *     ?GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18010A690 (-GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_GetAppMainWindow(CAppViewManager *this, struct IImmersiveApplicationInternal *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // [rsp+58h] [rbp+28h] BYREF
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (**(int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
         a2,
         &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1,
         &v8) >= 0 )
  {
    v9 = -1LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v9) >= 0 )
    {
      v7 = 0LL;
      v5 = *((_QWORD *)this + 15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
      if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, v9, &v7) >= 0 )
        v4 = *(_QWORD *)(v7 + 24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
