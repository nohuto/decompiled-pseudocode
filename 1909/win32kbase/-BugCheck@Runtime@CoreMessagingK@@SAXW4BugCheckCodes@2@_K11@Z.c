/*
 * XREFs of ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01C81B0
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0049028 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0049278 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x1C0049670 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C0049758 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0049920 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C004B6F0 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C009B990 (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C009BD7C (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C00A0BF4 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     CoreMsgInitialize @ 0x1C00A592C (CoreMsgInitialize.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C00A59A8 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00B6CAC (-UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 *     ?NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x1C01C8200 (-NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z.c)
 *     ?Thunk_OnProtocolExceptionWithDiagnostics_3@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1C01C8220 (-Thunk_OnProtocolExceptionWithDiagnostics_3@-$IRegistrarClient_Receive@URegistrarClientThunk@Cor.c)
 *     ?Thunk_OnProtocolException_0@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1C01C8240 (-Thunk_OnProtocolException_0@-$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@R.c)
 *     ?NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C01C82B0 (-NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z.c)
 *     ?NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C01C82D0 (-NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCall.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessagingK::Runtime::BugCheck(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  KeBugCheckEx(0x174u, a1, a2, a3, 0LL);
}
