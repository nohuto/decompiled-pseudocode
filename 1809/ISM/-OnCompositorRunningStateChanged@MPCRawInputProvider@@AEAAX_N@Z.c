/*
 * XREFs of ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180057A80
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180057230 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??_GMPCHeadMovementDetector@@QEAAPEAXI@Z @ 0x180057E70 (--_GMPCHeadMovementDetector@@QEAAPEAXI@Z.c)
 *     ??_GSpeechRuntimeListener@@QEAAPEAXI@Z @ 0x180057F5C (--_GSpeechRuntimeListener@@QEAAPEAXI@Z.c)
 *     ??$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAKAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEAPEAVMPCRawInputProvider@@AEAK1@Z @ 0x1800582EC (--$Make@VSpectrumListener@@PEAVMPCRawInputProvider@@AEAKAEAK@Details@WRL@Microsoft@@YA-AV-$ComPt.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x180058CB0 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180059AF0 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ??0MPCHeadMovementDetector@@QEAA@XZ @ 0x180059F98 (--0MPCHeadMovementDetector@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCRawInputProvider::OnCompositorRunningStateChanged(MPCRawInputProvider *this, char a2)
{
  char v3; // al
  int *v4; // rsi
  int v5; // eax
  int v6; // eax
  SpectrumListener *v7; // rcx
  MPCRawInputProvider **v8; // rax
  MPCRawInputProvider *v9; // rdx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rcx
  int v14; // esi
  int v15; // eax
  char v16; // dl
  wil::details::in1diag3 *v17; // rcx
  SpeechRuntimeListener *v18; // rcx
  MPCHeadMovementDetector *v19; // rax
  char v20; // dl
  MPCHeadMovementDetector *v21; // rcx
  SpectrumListener *v22; // rcx
  volatile signed __int32 *v23; // rcx
  SpeechRuntimeListener *v24; // rcx
  MPCHeadMovementDetector *v25; // rcx
  int v26; // eax
  int v27; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v29; // [rsp+50h] [rbp+18h] BYREF
  MPCRawInputProvider *v30; // [rsp+58h] [rbp+20h] BYREF

  v3 = *((_BYTE *)this + 2033);
  if ( a2 )
  {
    if ( v3 )
      return;
    v4 = (int *)((char *)this + 24);
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *, MPCRawInputProvider *))(**((_QWORD **)this + 2) + 40LL))(
           *((_QWORD *)this + 2),
           (char *)this + 24,
           this);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, char *, MPCRawInputProvider *))(**((_QWORD **)this + 2) + 40LL))(
           *((_QWORD *)this + 2),
           (char *)this + 1008,
           this);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v6);
    }
    else
    {
      v7 = (SpectrumListener *)*((_QWORD *)this + 249);
      if ( v7 )
        SpectrumListener::Unregister(v7);
      v30 = this;
      v8 = (MPCRawInputProvider **)Microsoft::WRL::Details::Make<SpectrumListener,MPCRawInputProvider *,unsigned long &,unsigned long &>(
                                     &v29,
                                     &v30,
                                     (char *)this + 24,
                                     (char *)this + 1008,
                                     -2LL);
      v9 = 0LL;
      if ( &v30 != v8 )
      {
        v9 = *v8;
        *v8 = 0LL;
      }
      v10 = (volatile signed __int32 *)*((_QWORD *)this + 249);
      *((_QWORD *)this + 249) = v9;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v10);
      v11 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v11);
      }
      v12 = (volatile signed __int32 *)operator new(0x58uLL);
      v29 = v12;
      v13 = *((_QWORD *)this + 2);
      v14 = *v4;
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      *((_QWORD *)v12 + 9) = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *((_DWORD *)v12 + 20) = v14;
      v15 = SpeechRuntimeListener::InitializeCoreMessaging((SpeechRuntimeListener *)v12);
      v17 = retaddr;
      if ( v15 >= 0 )
      {
        v18 = (SpeechRuntimeListener *)*((_QWORD *)this + 250);
        *((_QWORD *)this + 250) = v12;
        if ( v18 )
          SpeechRuntimeListener::`scalar deleting destructor'(v18, v16);
        v29 = (volatile signed __int32 *)operator new(0x90uLL);
        v19 = MPCHeadMovementDetector::MPCHeadMovementDetector((PVOID)v29);
        v21 = (MPCHeadMovementDetector *)*((_QWORD *)this + 251);
        *((_QWORD *)this + 251) = v19;
        if ( v21 )
          MPCHeadMovementDetector::`scalar deleting destructor'(v21, v20);
        *((_BYTE *)this + 2033) = 1;
        return;
      }
    }
    wil::details::in1diag3::FailFast_Hr(
      v17,
      (void *)0x1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\speechruntimelistener.cpp",
      (const char *)(unsigned int)v15);
LABEL_38:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v26);
    JUMPOUT(0x180057D3FLL);
  }
  if ( !v3 )
    return;
  v22 = (SpectrumListener *)*((_QWORD *)this + 249);
  if ( v22 )
    SpectrumListener::Unregister(v22);
  v23 = (volatile signed __int32 *)*((_QWORD *)this + 249);
  if ( v23 )
  {
    *((_QWORD *)this + 249) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v23);
  }
  v24 = (SpeechRuntimeListener *)*((_QWORD *)this + 250);
  *((_QWORD *)this + 250) = 0LL;
  if ( v24 )
    SpeechRuntimeListener::`scalar deleting destructor'(v24, a2);
  v25 = (MPCHeadMovementDetector *)*((_QWORD *)this + 251);
  *((_QWORD *)this + 251) = 0LL;
  if ( v25 )
    MPCHeadMovementDetector::`scalar deleting destructor'(v25, a2);
  v26 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 56LL))(
          *((_QWORD *)this + 2),
          (char *)this + 24);
  if ( v26 < 0 )
    goto LABEL_38;
  v27 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 56LL))(
          *((_QWORD *)this + 2),
          (char *)this + 1008);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v27);
    __debugbreak();
  }
  *((_BYTE *)this + 2033) = 0;
}
