/*
 * XREFs of ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x140025C90
 * Callers:
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x140001730 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$5 @ 0x14001ADC9 (_CSubmixImpl--CreateStream_--_1_--dtor$5.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$4 @ 0x14003C683 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$4.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x14003C96B (_CStreamGroup--CreateStream_--_1_--dtor$2.c)
 * Callees:
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002EC8C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(CStreamInstance **a1, unsigned int a2)
{
  CStreamInstance *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CStreamInstance::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
