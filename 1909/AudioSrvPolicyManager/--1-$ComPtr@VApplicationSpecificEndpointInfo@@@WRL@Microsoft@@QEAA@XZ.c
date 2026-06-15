/*
 * XREFs of ??1?$ComPtr@VApplicationSpecificEndpointInfo@@@WRL@Microsoft@@QEAA@XZ @ 0x180007814
 * Callers:
 *     _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180035C4B (_CWindowsPolicyManager--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CWindowsPolicyManager::HandleVirtualStreamStateChange_::_1_::dtor$4 @ 0x180035D11 (_CWindowsPolicyManager--HandleVirtualStreamStateChange_--_1_--dtor$4.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$4 @ 0x180036576 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<ApplicationSpecificEndpointInfo>::~ComPtr<ApplicationSpecificEndpointInfo>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
