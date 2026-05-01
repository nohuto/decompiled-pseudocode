/*
 * XREFs of ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180012550
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18002F2EC (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180012194 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18001225C (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180012A20 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006C170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::Initialize(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IIAMServiceProvider *a2)
{
  bool v4; // bl
  __int64 v5; // rax
  _QWORD *v6; // r14
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rdi
  void (__fastcall *v12)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  struct IIAMServiceProvider *v16; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, char *); // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v17[1] = -2LL;
  *((_BYTE *)this + 203) = 0;
  v4 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 20) + 88LL) + 328LL))(
         *((_QWORD *)this + 20) + 88LL,
         0LL)
    && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 20) + 88LL) + 328LL))(
          *((_QWORD *)this + 20) + 88LL,
          4LL);
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
    v21 = v5 + 112;
  else
    v21 = 0LL;
  v6 = (_QWORD *)((char *)this + 152);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 152);
  v16 = a2;
  LOBYTE(v18) = v4;
  v7 = *((_QWORD *)this + 20);
  LODWORD(v19) = *(_DWORD *)(v7 + 600);
  v17[0] = *(_QWORD *)(v7 + 592);
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CFrameApplicationPresentation,CFrameApplicationPresentation,unsigned short const * &,unsigned long &,bool &,IIAMServiceProvider * &,IImmersiveApplicationInternal * &>(
         (unsigned int)&v20,
         (unsigned int)v17,
         (unsigned int)&v19,
         (unsigned int)&v18,
         (__int64)&v16,
         (__int64)&v21);
  if ( v8 >= 0 )
    v8 = (**v20)(v20, &GUID_ab535146_7d9a_4d26_a0a7_404fd8355fb0, (char *)this + 152);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  if ( v8 >= 0 )
  {
    v19 = 0LL;
    v9 = *v6;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v6 + 136LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v8 = v10(v9, &v19);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 24LL))(v19, v17);
      if ( v8 >= 0 )
      {
        v18 = 0LL;
        v11 = (void (__fastcall ***)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))*((_QWORD *)this + 20);
        v12 = **v11;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        v12(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v18);
        v20 = v18;
        v21 = *v6;
        v13 = *((_QWORD *)this + 20);
        v14 = *((_QWORD *)this + 31);
        if ( v14 )
        {
          *((_QWORD *)this + 31) = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v14);
        }
        v8 = Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
               (CSplashScreen **)this + 31,
               v17,
               (char *)(v13 + 760),
               &v21,
               (__int64 *)&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    if ( v8 >= 0 )
    {
      *((_BYTE *)this + 200) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 104LL))(*v6);
      CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(this);
    }
  }
  return (unsigned int)v8;
}
