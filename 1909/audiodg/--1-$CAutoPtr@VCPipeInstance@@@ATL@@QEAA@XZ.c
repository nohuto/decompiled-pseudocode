/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140029A98
 * Callers:
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$10 @ 0x14001A6F6 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$14 @ 0x14001A925 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$14.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x14001AD6F (_CSubmixImpl--CreateStream_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$4 @ 0x140034F0D (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x1400354E9 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x14003C653 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$0.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x14003E734 (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(CPipeInstance **a1, unsigned int a2)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1, a2);
}
