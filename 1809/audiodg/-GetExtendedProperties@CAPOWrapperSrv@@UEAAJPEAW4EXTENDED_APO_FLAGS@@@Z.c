/*
 * XREFs of ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x140019AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140019B34 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetExtendedProperties(CAPOWrapperSrv *this, enum EXTENDED_APO_FLAGS *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v6; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
    &v7,
    *((_QWORD *)this + 8));
  v3 = v7;
  if ( v7 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v7 + 24LL))(v7, a2);
    v3 = v7;
    v4 = v6;
  }
  else
  {
    v4 = -2147467262;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
