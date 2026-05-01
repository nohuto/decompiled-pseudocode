/*
 * XREFs of ?_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801568CC
 * Callers:
 *     ?GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18014FEB0 (-GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_GetAppMainWindow(
        CAppViewManager *this,
        int (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  __int64 v4; // rsi
  int (__fastcall *v5)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, __int64, __int64 *); // rbx
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF
  __int64 v10; // [rsp+70h] [rbp+40h] BYREF
  __int64 v11; // [rsp+78h] [rbp+48h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v5((struct IImmersiveApplicationInternal *)a2, &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1, &v10) >= 0 )
  {
    v11 = -1LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11) >= 0 )
    {
      v9 = 0LL;
      v6 = *((_QWORD *)this + 15);
      v7 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 64LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      if ( v7(v6, v11, &v9) >= 0 )
        v4 = *(_QWORD *)(v9 + 24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v4;
}
