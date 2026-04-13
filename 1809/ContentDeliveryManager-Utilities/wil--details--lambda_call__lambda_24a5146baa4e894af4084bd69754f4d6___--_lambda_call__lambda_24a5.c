/*
 * XREFs of wil::details::lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___::_lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___ @ 0x1800651E0
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal_::_1_::dtor$6 @ 0x1800CBC01 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800CBC01.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x180066C80 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_cbb39659d92f3de8398.c)
 */

void __fastcall wil::details::lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___::_lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___(
        __int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rcx
  int v3; // eax
  int v4[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)v4 = *(_QWORD *)(a1 + 8);
    v1 = *(_QWORD *)(a1 + 16);
    v2 = *(_QWORD **)a1;
    *(_QWORD *)&v4[2] = v1;
    v3 = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___(
           *v2,
           v4);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v3);
      JUMPOUT(0x18006523DLL);
    }
  }
}
