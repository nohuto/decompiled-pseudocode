/*
 * XREFs of ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C00849C4
 * Callers:
 *     CoreMsgInitialize @ 0x1C008432C (CoreMsgInitialize.c)
 * Callees:
 *     CoreUICallComputeMaximumMessageSize @ 0x1C007F2F8 (CoreUICallComputeMaximumMessageSize.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0185620 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::RegistrarClient::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // r9
  int v6; // eax
  int v7; // [rsp+20h] [rbp-28h]
  int v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  void *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = &CoreMessagingK::SendHost::s_Vtbl;
  v4 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v12,
         (const unsigned __int8 **)&Microsoft::CoreUI::Registrar::IRegistrarServer_MsgCallInfo::MethodInstructions,
         0x1Eu,
         a4,
         v7,
         v9,
         &v11);
  if ( v4 )
    CoreMessagingK::Runtime::BugCheck(1024LL, v4, 0LL);
  if ( v11 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1025LL, v11, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize = v11;
  v6 = CoreUICallComputeMaximumMessageSize(
         (struct IMessageCallSendHost *)&v12,
         (const unsigned __int8 **)&Microsoft::CoreUI::Registrar::IRegistrarClient_MsgCallInfo::MethodInstructions,
         0x23u,
         v5,
         v8,
         v10,
         &v11);
  if ( v6 )
    CoreMessagingK::Runtime::BugCheck(1026LL, v6, 0LL);
  if ( v11 > 0xFFFF )
    CoreMessagingK::Runtime::BugCheck(1027LL, v11, 0LL);
  CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize = v11;
}
