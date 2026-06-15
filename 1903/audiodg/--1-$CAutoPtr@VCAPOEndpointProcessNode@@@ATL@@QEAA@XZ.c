/*
 * XREFs of ??1?$CAutoPtr@VCAPOEndpointProcessNode@@@ATL@@QEAA@XZ @ 0x1400346A8
 * Callers:
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x140019C84 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$3 @ 0x140019CBA (_CPipeInstance--FixupStreamPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$8 @ 0x140019F70 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$8.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$8 @ 0x14001A140 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$8.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$10 @ 0x14001A180 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$2 @ 0x14001A23B (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$3 @ 0x14001A24D (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$7 @ 0x14001A2BA (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$8 @ 0x14001A2CC (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x14001A45A (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$3 @ 0x14001A46C (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x14001A47E (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$9 @ 0x14001A4EB (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$12 @ 0x14001A4FD (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$12.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$1 @ 0x140034F05 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$2 @ 0x140034F11 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x1400354A9 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x1400354C1 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x1400354CD (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 *     _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$0 @ 0x1400364AF (_CAPOEndpointProcessNode--CreateAPOEndpointProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CAPOEndpointProcessNode>::~CAutoPtr<CAPOEndpointProcessNode>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
