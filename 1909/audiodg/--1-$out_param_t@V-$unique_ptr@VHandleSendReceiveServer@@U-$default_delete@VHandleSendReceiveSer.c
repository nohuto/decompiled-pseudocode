/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@@details@wil@@QEAA@XZ @ 0x140039314
 * Callers:
 *     _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$3 @ 0x14001B2B1 (_CEndpointInstance--CreateStreamEndpointInstance_--_1_--dtor$3.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$3 @ 0x140039B18 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::out_param_t<wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>>::~out_param_t<wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>>(
        __int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(__int64 (__fastcall *****)(_QWORD, __int64))a1;
    result = *(_QWORD *)(a1 + 8);
    **(_QWORD **)a1 = result;
    if ( v1 )
      return (**v1)(v1, 1LL);
  }
  return result;
}
