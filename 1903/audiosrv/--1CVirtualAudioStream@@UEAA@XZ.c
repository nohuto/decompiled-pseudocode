/*
 * XREFs of ??1CVirtualAudioStream@@UEAA@XZ @ 0x180104558
 * Callers:
 *     ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x180104110 (--_GCVirtualAudioStream@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x180103FBC (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 */

void __fastcall CVirtualAudioStream::~CVirtualAudioStream(CVirtualAudioStream *this)
{
  __int64 *v2; // rdi
  void *v3; // rcx
  __int64 v4; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)this = &CVirtualAudioStream::`vftable';
  if ( *((_BYTE *)this + 44) )
  {
    v4 = 0LL;
    wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>((__int64)this, (__int64)&v4);
    v2 = (__int64 *)((char *)this + 32);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int, _DWORD))(*(_QWORD *)v4 + 24LL))(
      v4,
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 3),
      *((unsigned int *)this + 4),
      *((_DWORD *)this + 10),
      1,
      0);
    *((_BYTE *)this + 44) = 0;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v4);
  }
  else
  {
    v2 = (__int64 *)((char *)this + 32);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v2);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    CoTaskMemFree(v3);
  *((_DWORD *)this + 3) = -1073741823;
}
