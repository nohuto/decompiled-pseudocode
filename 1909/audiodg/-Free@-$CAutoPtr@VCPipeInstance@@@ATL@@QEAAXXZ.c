/*
 * XREFs of ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000DE34
 * Callers:
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B10 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400066A4 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C3C0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x14000DE00 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140029A98 (--1-$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002EC8C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140034B20 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140034F74 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C100 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14003DA68 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14003E5CC (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002A31C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CPipeInstance>::Free(CPipeInstance **a1, unsigned int a2)
{
  CPipeInstance *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CPipeInstance::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
