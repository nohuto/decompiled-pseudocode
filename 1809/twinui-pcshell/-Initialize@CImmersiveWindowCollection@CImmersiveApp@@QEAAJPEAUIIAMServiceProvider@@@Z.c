/*
 * XREFs of ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18004A79C
 * Callers:
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180048250 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 * Callees:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18004A4D8 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18004AA10 (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18004AC58 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A4F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::Initialize(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IIAMServiceProvider *a2)
{
  bool v4; // bl
  struct IImmersiveApplicationInternal *v5; // rax
  struct IImmersiveApplicationInternal **v6; // rsi
  __int64 v7; // rcx
  int v8; // ebx
  struct IImmersiveApplicationInternal *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rcx
  struct IIAMServiceProvider *v13; // [rsp+30h] [rbp-20h] BYREF
  const unsigned __int16 *v14[3]; // [rsp+38h] [rbp-18h] BYREF
  CFrameApplicationPresentation *v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF
  CFrameApplicationPresentation *v17; // [rsp+90h] [rbp+40h] BYREF
  struct IImmersiveApplicationInternal *v18; // [rsp+98h] [rbp+48h] BYREF

  v14[1] = (const unsigned __int16 *)-2LL;
  *((_BYTE *)this + 203) = 0;
  v4 = (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 20) + 88LL) + 328LL))(
         *((_QWORD *)this + 20) + 88LL,
         0LL)
    && !(*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 20) + 88LL) + 328LL))(
          *((_QWORD *)this + 20) + 88LL,
          4LL);
  v5 = (struct IImmersiveApplicationInternal *)*((_QWORD *)this + 20);
  if ( v5 )
    v5 = (struct IImmersiveApplicationInternal *)((char *)v5 + 112);
  v18 = v5;
  v6 = (struct IImmersiveApplicationInternal **)((char *)this + 152);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 152);
  v13 = a2;
  LOBYTE(v15) = v4;
  v7 = *((_QWORD *)this + 20);
  LODWORD(v16) = *(_DWORD *)(v7 + 568);
  v14[0] = *(const unsigned __int16 **)(v7 + 560);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CFrameApplicationPresentation,CFrameApplicationPresentation,unsigned short const * &,unsigned long &,bool &,IIAMServiceProvider * &,IImmersiveApplicationInternal * &>(
         &v17,
         v14,
         (unsigned int *)&v16,
         (char *)&v15,
         &v13,
         &v18);
  if ( v8 >= 0 )
    v8 = (**(__int64 (__fastcall ***)(CFrameApplicationPresentation *, GUID *, char *))v17)(
           v17,
           &GUID_ab535146_7d9a_4d26_a0a7_404fd8355fb0,
           (char *)this + 152);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  if ( v8 >= 0 )
  {
    v16 = 0LL;
    v9 = *v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)v9 + 136LL))(
           v9,
           &v16);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 **))(*(_QWORD *)v16 + 24LL))(v16, v14);
      if ( v8 >= 0 )
      {
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        (***((void (__fastcall ****)(_QWORD, GUID *, CFrameApplicationPresentation **))this + 20))(
          *((_QWORD *)this + 20),
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          &v15);
        v17 = v15;
        v18 = *v6;
        v10 = *((_QWORD *)this + 20);
        v11 = *((_QWORD *)this + 31);
        if ( v11 )
        {
          *((_QWORD *)this + 31) = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v11);
        }
        v8 = Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
               (int)this + 248,
               (unsigned int)v14,
               (int)v10 + 728,
               (unsigned int)&v18,
               (__int64)&v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    if ( v8 >= 0 )
    {
      *((_BYTE *)this + 200) = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)*v6 + 104LL))(*v6);
      CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(this);
    }
  }
  return (unsigned int)v8;
}
