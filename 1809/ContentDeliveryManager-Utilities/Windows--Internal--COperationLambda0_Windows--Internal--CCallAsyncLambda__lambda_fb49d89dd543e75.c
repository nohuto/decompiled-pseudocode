/*
 * XREFs of Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_fb49d89dd543e7535ea7867a5f3a91a6____Windows::Internal::CNoResult_::Run @ 0x1800371A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18002A9C4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 */

__int64 __fastcall Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_fb49d89dd543e7535ea7867a5f3a91a6____Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[104]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v8; // [rsp+90h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( a2 == 1 && a3 >= 0 )
  {
    v3 = 2LL;
    do
    {
      v8 = 0LL;
      --v3;
    }
    while ( v3 );
    v4 = ContentManagement::ContentManagementService::SendAppServiceMessage(
           *(ContentManagement::ContentManagementService **)(a1 + 8),
           5 - (unsigned int)(*(_BYTE *)(a1 + 16) != 0),
           (__int64)v7);
    v5 = v4;
    if ( v4 >= 0 )
      return 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    return (unsigned int)a3;
  }
  return v5;
}
