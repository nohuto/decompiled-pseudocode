/*
 * XREFs of ?AddPipeToLoopbackConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140031720
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComQIPtr@UIAudioDeviceGraphInternal@@$1?_GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140012638 (--0-$CComQIPtr@UIAudioDeviceGraphInternal@@$1-_GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6@@3U__s_.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::AddPipeToLoopbackConnection(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF

  v7 = *(_OWORD *)((char *)this - 56);
  v8 = v7;
  EtwEventActivityIdControl(4LL, &v8);
  (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 64LL))(this);
  ATL::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6>::CComQIPtr<IAudioDeviceGraphInternal,&__s_GUID const _GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6>(
    &v6,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 3));
  if ( v6 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v6 + 32LL))(v6, a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v4 = -2147467262;
  }
  EtwEventActivityIdControl(4LL, &v8);
  return v4;
}
