/*
 * XREFs of ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18004AA10
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18004A79C (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x1800462F4 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ??0CSplashScreen@@QEAA@XZ @ 0x18004AB5C (--0CSplashScreen@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A4F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
        CSplashScreen **a1,
        _QWORD *a2,
        char *a3,
        __int64 *a4,
        __int64 (__fastcall ****a5)(_QWORD, GUID *, __int64 *))
{
  CSplashScreen *v9; // rax
  int v10; // ebx
  CSplashScreen *v11; // rdi
  __int64 v12; // rbx
  char v13; // r14
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v21[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CSplashScreen *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21[1] = v9;
  if ( v9 )
  {
    v11 = CSplashScreen::CSplashScreen(v9);
    v12 = *a4;
    v13 = *a3;
    v14 = *a5;
    *((_QWORD *)v11 + 18) = *a2;
    v15 = *((_QWORD *)v11 + 15);
    if ( v15 != v12 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v15 = *((_QWORD *)v11 + 15);
      }
      v22 = v15;
      *((_QWORD *)v11 + 15) = v12;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    }
    v21[0] = 0LL;
    *((_BYTE *)v11 + 168) = v13;
    v16 = *((_QWORD *)v11 + 20);
    *((_QWORD *)v11 + 20) = 0LL;
    v20 = v16;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v21);
    v10 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>(v14, (__int64 *)v11 + 20);
    if ( v10 >= 0 )
    {
      v17 = *((_QWORD *)v11 + 8);
      while ( v17 >= 0 )
      {
        if ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 8, v17 + 1, v17);
          if ( v18 != v17 )
            continue;
        }
        goto LABEL_14;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v17 + 16));
LABEL_14:
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
