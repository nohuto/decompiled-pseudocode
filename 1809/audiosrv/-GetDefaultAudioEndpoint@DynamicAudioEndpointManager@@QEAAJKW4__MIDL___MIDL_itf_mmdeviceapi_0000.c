/*
 * XREFs of ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x180031830
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x1800314B0 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z @ 0x18011EC14 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z.c)
 *     ?GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180120A40 (-GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180031B04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180031B1C (--1-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTraits@V.c)
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x180031B70 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B0B7C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BBCA8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Find@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEBAPEAU__POSITION@@PEBGPEAU3@@Z @ 0x18011E0DC (-Find@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x18011E238 (-GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z.c)
 *     ?NewNode@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@PEBGPEAV312@1@Z @ 0x18011E71C (-NewNode@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTr.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        _BYTE *a5,
        struct IMMDevice **a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v10; // rbx
  unsigned __int16 *v11; // rbx
  __int64 v12; // rdx
  __int64 v14; // rcx
  _BYTE *v15; // rsi
  bool i; // zf
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r11
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r11
  int DeviceFromDeviceId; // ebx
  int v24; // [rsp+28h] [rbp-59h]
  __int64 v25; // [rsp+48h] [rbp-39h] BYREF
  __int64 v26; // [rsp+50h] [rbp-31h] BYREF
  __int64 v27; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v29; // [rsp+70h] [rbp-11h] BYREF
  __int64 v30; // [rsp+80h] [rbp-1h]
  __int128 v31; // [rsp+88h] [rbp+7h]
  int v32; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+4Fh]
  unsigned __int16 *v34; // [rsp+D8h] [rbp+57h] BYREF

  v28[1] = -2LL;
  v6 = a4;
  v7 = a3;
  v10 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v26 = v10;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 10;
  v11 = 0LL;
  v34 = 0LL;
  if ( (unsigned int)v6 > 7 )
  {
    v12 = 137LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL,
      v24);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(&v34);
    ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::~CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>(&v29);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v26);
    return 2147942487LL;
  }
  if ( (unsigned int)v7 > 1 )
  {
    v12 = 138LL;
    goto LABEL_3;
  }
  v14 = *(_QWORD *)(a1 + 48 * (v6 + 8 * v7) + 56);
  v27 = v14;
  v15 = a5;
  for ( i = v14 == 0; ; i = v27 == 0 )
  {
    if ( i )
      goto LABEL_18;
    v17 = *(_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v14, &v27);
    v25 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 32LL))(v17, v28) < 0 )
      break;
    v18 = ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::NewNode(
            &v29,
            v28[0],
            *((_QWORD *)&v29 + 1));
    if ( *((_QWORD *)&v29 + 1) )
      **((_QWORD **)&v29 + 1) = v18;
    else
      *(_QWORD *)&v29 = v18;
    *((_QWORD *)&v29 + 1) = v18;
LABEL_16:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(&v25);
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &v25,
    0LL);
  if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, __int64 *))(*(_QWORD *)v17 + 24LL))(
         v17,
         a2,
         (unsigned int)v7,
         (unsigned int)v6,
         v15,
         &v25) < 0
    || !v25
    || ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Find(
         &v29,
         v25) )
  {
    goto LABEL_16;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &v34,
    v19);
  v25 = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(&v25);
  v11 = v34;
  if ( v34 )
  {
LABEL_26:
    DeviceFromDeviceId = DynamicAudioEndpointManager::GetDeviceFromDeviceId(v11, a6);
    goto LABEL_30;
  }
LABEL_18:
  v20 = *(_QWORD **)(a1 + 824);
  while ( v20 )
  {
    v21 = v20[2];
    v20 = (_QWORD *)*v20;
    v25 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, __int64 *))(*(_QWORD *)v21 + 24LL))(
           v21,
           a2,
           (unsigned int)v7,
           (unsigned int)v6,
           v15,
           &v25) >= 0
      && v25
      && !ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Find(
            &v29,
            v25) )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v34,
        v22);
      v25 = 0LL;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(&v25);
      v11 = v34;
      break;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(&v25);
  }
  if ( v11 )
    goto LABEL_26;
  DeviceFromDeviceId = CDefaultDeviceManager::GetDefaultEndpoint(v14, v7, v6, (unsigned int)&v29, (__int64)a6);
  if ( DeviceFromDeviceId >= 0 && v15 )
    *v15 = 0;
LABEL_30:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(&v34);
  ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::~CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>(&v29);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v26);
  return (unsigned int)DeviceFromDeviceId;
}
