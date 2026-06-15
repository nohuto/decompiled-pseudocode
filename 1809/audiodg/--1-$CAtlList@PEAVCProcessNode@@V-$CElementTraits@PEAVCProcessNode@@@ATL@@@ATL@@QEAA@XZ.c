/*
 * XREFs of ??1?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140031650
 * Callers:
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$0 @ 0x140020840 (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateDevicePipeInstance_::_1_::dtor$0 @ 0x140020A30 (_CPipeInstance--CreateDevicePipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$0 @ 0x14003A2B7 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$0.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$0 @ 0x14003A7E8 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::~CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>(
        __int64 a1)
{
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(a1);
}
