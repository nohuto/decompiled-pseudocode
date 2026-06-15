/*
 * XREFs of ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18000C540
 * Callers:
 *     _lambda_12caadf06097df6adadb33ec639f4e18_::operator() @ 0x18000B368 (_lambda_12caadf06097df6adadb33ec639f4e18_--operator().c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     wil::details::functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__&_::Run @ 0x180048C40 (wil--details--functor_wrapper_void__lambda_55c1f1f09a825687b3b7be014f2bd2ed__-_--Run.c)
 * Callees:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18000C8DC (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetVirtualSurroundEffectMode(CEndpointCharacteristics *this)
{
  unsigned int v1; // esi
  struct IPropertyStore *v2; // r14
  char *v3; // rbx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rcx
  int v7; // edi
  char *v8; // rcx
  __int64 v9; // rcx
  int v11; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-55h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp-51h] BYREF
  char *v14; // [rsp+48h] [rbp-49h]
  __int64 v15; // [rsp+50h] [rbp-41h] BYREF
  int v16; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  const char *v19; // [rsp+98h] [rbp+7h]
  __int64 v20; // [rsp+A0h] [rbp+Fh]
  int *v21; // [rsp+A8h] [rbp+17h]
  __int64 v22; // [rsp+B0h] [rbp+1Fh]
  int *v23; // [rsp+B8h] [rbp+27h]
  __int64 v24; // [rsp+C0h] [rbp+2Fh]

  v17[1] = -2LL;
  v1 = 0;
  v12 = 0;
  v2 = (struct IPropertyStore *)*((_QWORD *)this + 5);
  v15 = 0LL;
  v14 = 0LL;
  v3 = (char *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::FtmBase::`vftable';
    *((_QWORD *)v3 + 4) = 0LL;
    ppunkMarshal = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppunkMarshal);
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v6 = *((_QWORD *)v3 + 4);
      if ( v6 )
      {
        *((_QWORD *)v3 + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v3 + 32);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppunkMarshal);
    *((_DWORD *)v3 + 11) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDevicePropertyReader'};
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 64), 0, 0);
    *((_QWORD *)v3 + 50) = 0LL;
    *((_QWORD *)v3 + 51) = 0LL;
    *((_QWORD *)v3 + 52) = 0LL;
    *((_DWORD *)v3 + 106) = 0;
    *((_QWORD *)v3 + 63) = 0LL;
    *((_DWORD *)v3 + 128) = 0;
    v17[0] = v3;
    v7 = SpatialAudioDevicePropertyReader::RuntimeClassInitialize((SpatialAudioDevicePropertyReader *)v3, 0LL, v2);
    if ( v7 < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v17);
    }
    else
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
      v14 = v3;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
      v7 = 0;
    }
    v11 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v14)(
             v14,
             &GUID_dfe7590f_ea77_4947_ace8_25b8f512a67d,
             &v15);
      goto LABEL_12;
    }
  }
  else
  {
    v7 = -2147024882;
    v11 = -2147024882;
  }
  if ( (unsigned int)dword_1801B53C0 > 2 )
  {
    v19 = "Create_SpatialAudioDevicePropertyReader";
    v20 = 40LL;
    v16 = 181;
    v21 = &v16;
    v22 = 4LL;
    v23 = &v11;
    v24 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B53C0, &unk_18017BC7B, v4, v5, 5u, &pData);
  }
LABEL_12:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v7 >= 0 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 184LL))(v15, &v12) >= 0 )
    v1 = v12;
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v1;
}
