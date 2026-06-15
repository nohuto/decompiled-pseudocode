/*
 * XREFs of ??1?$com_ptr_t@UICrossProcessEventManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000FF88
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14000F96C (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     _CSubmixImpl::CreateStream_::_1_::dtor$4 @ 0x14001ADB7 (_CSubmixImpl--CreateStream_--_1_--dtor$4.c)
 *     _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$2 @ 0x14001B29F (_CEndpointInstance--CreateStreamEndpointInstance_--_1_--dtor$2.c)
 *     __lambda_70348e31779f8b8cef919996b578f4f9_::operator()_::_1_::dtor$0 @ 0x1400373A1 (__lambda_70348e31779f8b8cef919996b578f4f9_--operator()_--_1_--dtor$0.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$2 @ 0x140039B0C (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$2.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$4 @ 0x140039B24 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<ICrossProcessEventManager,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessEventManager,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
