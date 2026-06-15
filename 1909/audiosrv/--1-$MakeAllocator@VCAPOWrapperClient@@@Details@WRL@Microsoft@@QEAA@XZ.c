/*
 * XREFs of ??1?$MakeAllocator@VCAPOWrapperClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CC828
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStateWriter_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$0 @ 0x18006DA2A (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStat.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const___&_enum_APO_TYPE_&__GUID_const_&__::_1_::dtor$0 @ 0x180070D30 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObjec_ea_180070D30.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$3 @ 0x1800715E0 (_CAudioStream--CAudioStream_--_1_--dtor$3.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$4 @ 0x180071600 (_CAudioStream--CAudioStream_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderProperties__GUID_const_&_int_&__::_1_::dtor$0 @ 0x180133E31 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioEncoderProperties_SpatialAudioEncoderPro.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataDictionary_enum_DictionaryLoadKind__GUID_const_&_unsigned_short_&_std::nullptr_t_unsigned_char___&_unsigned_int_&__::_1_::dtor$0 @ 0x180135F73 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioMetadataDictionary_SpatialAudioMetadataD.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CAPOWrapperClient>::~MakeAllocator<CAPOWrapperClient>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
