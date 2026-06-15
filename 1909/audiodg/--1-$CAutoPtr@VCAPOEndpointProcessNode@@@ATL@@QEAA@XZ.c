/*
 * XREFs of ??1?$CAutoPtr@VCAPOEndpointProcessNode@@@ATL@@QEAA@XZ @ 0x140034698
 * Callers:
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$0 @ 0x14001A074 (_CPipeInstance--FixupStreamPipe_--_1_--dtor$0.c)
 *     _CPipeInstance::FixupStreamPipe_::_1_::dtor$3 @ 0x14001A0AA (_CPipeInstance--FixupStreamPipe_--_1_--dtor$3.c)
 *     _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::dtor$8 @ 0x14001A360 (_CPipeInstance--ResolveFormatConflictsLeftRight_--_1_--dtor$8.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$8 @ 0x14001A530 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$8.c)
 *     _CPipeInstance::ResolveFormatConflictsRightLeft_::_1_::dtor$10 @ 0x14001A570 (_CPipeInstance--ResolveFormatConflictsRightLeft_--_1_--dtor$10.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$2 @ 0x14001A62B (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$3 @ 0x14001A63D (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$7 @ 0x14001A6AA (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$7.c)
 *     _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$8 @ 0x14001A6BC (_CPipeInstance--CreateSubmixPipeInstance_--_1_--dtor$8.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$2 @ 0x14001A84A (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$3 @ 0x14001A85C (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$4 @ 0x14001A86E (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$4.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$9 @ 0x14001A8DB (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$9.c)
 *     _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$12 @ 0x14001A8ED (_CPipeInstance--CreateStreamPipeInstance_--_1_--dtor$12.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$1 @ 0x140034EF5 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateBridgeStreamPipeInstance_::_1_::dtor$2 @ 0x140034F01 (_CPipeInstance--CreateBridgeStreamPipeInstance_--_1_--dtor$2.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$1 @ 0x140035499 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$3 @ 0x1400354B1 (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$3.c)
 *     _CPipeInstance::CreateFormatConverterPipeInstance_::_1_::dtor$4 @ 0x1400354BD (_CPipeInstance--CreateFormatConverterPipeInstance_--_1_--dtor$4.c)
 *     _CAPOEndpointProcessNode::CreateAPOEndpointProcessNode_::_1_::dtor$0 @ 0x14003649F (_CAPOEndpointProcessNode--CreateAPOEndpointProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
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
