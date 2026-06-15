/*
 * XREFs of ??0?$CComPtrBase@UIAudioMediaType@@@ATL@@IEAA@PEAUIAudioMediaType@@@Z @ 0x14003B2B8
 * Callers:
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003B4A8 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComPtrBase<IAudioMediaType>::CComPtrBase<IAudioMediaType>(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
