/*
 * XREFs of ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18001225C
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180012550 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180012394 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ??0CSplashScreen@@QEAA@XZ @ 0x180012454 (--0CSplashScreen@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
        CSplashScreen **a1,
        _QWORD *a2,
        char *a3,
        __int64 *a4,
        __int64 *a5)
{
  CSplashScreen *v9; // rax
  CSplashScreen *v10; // rdi
  __int64 v11; // rbx
  char v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ebx
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
    v10 = CSplashScreen::CSplashScreen(v9);
    v11 = *a4;
    v12 = *a3;
    v13 = *a5;
    *((_QWORD *)v10 + 18) = *a2;
    v14 = *((_QWORD *)v10 + 15);
    if ( v14 != v11 )
    {
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v14 = *((_QWORD *)v10 + 15);
      }
      v22 = v14;
      *((_QWORD *)v10 + 15) = v11;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    }
    v21[0] = 0LL;
    *((_BYTE *)v10 + 168) = v12;
    v15 = *((_QWORD *)v10 + 20);
    *((_QWORD *)v10 + 20) = 0LL;
    v20 = v15;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v21);
    v16 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>(v13, (char *)v10 + 160);
    if ( v16 >= 0 )
    {
      v17 = *((_QWORD *)v10 + 8);
      while ( v17 >= 0 )
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 8, v17 + 1, v17);
        if ( v18 == v17 )
          goto LABEL_10;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v17 + 16));
LABEL_10:
      *a1 = v10;
      v16 = 0;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v16;
}
