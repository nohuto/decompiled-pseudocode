/*
 * XREFs of wil::details::lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___::_lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___ @ 0x14003C12C
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$7 @ 0x14001A9FD (_CSubmixImpl--CreateStream_--_1_--dtor$7.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$6 @ 0x14003C6FB (_CStreamGroup--CreateBridgeStream_--_1_--dtor$6.c)
 * Callees:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x14003E030 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 */

struct ISubmixInternal **__fastcall wil::details::lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___::_lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___(
        __int64 a1)
{
  struct ISubmixInternal **result; // rax
  struct ISubmixInternal *v2; // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(struct ISubmixInternal ***)a1;
    v2 = **(struct ISubmixInternal ***)a1;
    if ( v2 )
      return (struct ISubmixInternal **)CStreamInstance::DisconnectFromRightSubmix(**(CStreamInstance ***)(a1 + 8), v2);
  }
  return result;
}
