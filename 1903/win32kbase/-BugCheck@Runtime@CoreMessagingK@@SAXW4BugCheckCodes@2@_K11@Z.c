/*
 * XREFs of ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01CA150
 * Callers:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0040FF0 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0043AA0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C00444C0 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x1C0044550 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00AA504 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     CoreMsgInitialize @ 0x1C00AA70C (CoreMsgInitialize.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C00AA788 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C00AAA6C (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C00AACBC (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C00AB0B4 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C00AB464 (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00B8390 (-UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 *     ?NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x1C01CA1A0 (-NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z.c)
 *     ?Thunk_OnProtocolExceptionWithDiagnostics_3@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1C01CA1C0 (-Thunk_OnProtocolExceptionWithDiagnostics_3@-$IRegistrarClient_Receive@URegistrarClientThunk@Cor.c)
 *     ?Thunk_OnProtocolException_0@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1C01CA1E0 (-Thunk_OnProtocolException_0@-$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@R.c)
 *     ?NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C01CA250 (-NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z.c)
 *     ?NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C01CA270 (-NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCall.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessagingK::Runtime::BugCheck(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  KeBugCheckEx(0x174u, a1, a2, a3, 0LL);
}
