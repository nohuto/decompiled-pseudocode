/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001FA1C
 * Callers:
 *     _DWMInputRouter::BindDevicesOfTypeToMonitor_::_1_::dtor$2 @ 0x18012EAFF (_DWMInputRouter--BindDevicesOfTypeToMonitor_--_1_--dtor$2.c)
 *     _MPCMouseProcessor::AttachMouse_::_1_::dtor$2 @ 0x180133D74 (_MPCMouseProcessor--AttachMouse_--_1_--dtor$2.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x180133D98 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x1801346E4 (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x18013471C (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>::~AsyncDeferral<Windows::Internal::CNoResult>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
