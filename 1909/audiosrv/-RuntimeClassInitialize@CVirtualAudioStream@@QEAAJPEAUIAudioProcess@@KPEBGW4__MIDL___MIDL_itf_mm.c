/*
 * XREFs of ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010410C
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@UIVirtualAudioStream@@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010394C (--$MakeAndInitialize@VCVirtualAudioStream@@UIVirtualAudioStream@@AEAPEAUIAudioProcess@@W4_AUDIO_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003479C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800347E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800CC9E4 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x180103B1C (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualAudioStream::RuntimeClassInitialize(
        CVirtualAudioStream *this,
        struct IAudioProcess *a2,
        int a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5)
{
  char **v8; // r14
  void *v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a2);
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 10) = a5;
  v8 = (char **)((char *)this + 24);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 3,
    0LL);
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  *v8 = 0LL;
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v12 = -2147024362;
    goto LABEL_17;
  }
  if ( is_mul_ok(v11, 2uLL) )
  {
    v12 = CTCoAllocPolicy::Alloc(v9, 0, 2 * v11, (void **)this + 3);
    if ( v12 < 0 )
    {
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
    StringCchCopyNExW(*v8, v10 + 1, a4, v10);
  }
  else
  {
    v12 = -2147024362;
  }
  if ( v12 < 0 )
    goto LABEL_17;
  v17 = 0LL;
  v13 = wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>((__int64)v9, (__int64)&v17);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, _QWORD, _DWORD, _DWORD, int))(*(_QWORD *)v17 + 24LL))(
            v17,
            *((_QWORD *)this + 4),
            *v8,
            *((unsigned int *)this + 4),
            *((_DWORD *)this + 10),
            0,
            1);
    v12 = v13;
    if ( v13 >= 0 )
    {
      *((_BYTE *)this + 44) = 1;
      v12 = 0;
      goto LABEL_15;
    }
    v14 = 37LL;
  }
  else
  {
    v14 = 34LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
    (const char *)(unsigned int)v13);
LABEL_15:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  return (unsigned int)v12;
}
