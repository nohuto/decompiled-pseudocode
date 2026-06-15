/*
 * XREFs of ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140031668
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$0 @ 0x1400200B0 (_CSubmixImpl--CreateStream_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$10 @ 0x1400209B0 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$14 @ 0x140020D30 (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$14.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$4 @ 0x14003A2DB (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$6 @ 0x14003A844 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$0 @ 0x140040205 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$0.c)
 *     _CFormatConverterPipe::Initialize_::_1_::dtor$0 @ 0x140041AAC (_CFormatConverterPipe--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtr<CPipeInstance>::~CAutoPtr<CPipeInstance>(__int64 a1)
{
  return ATL::CAutoPtr<CPipeInstance>::Free(a1);
}
