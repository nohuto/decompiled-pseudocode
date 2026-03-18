/*
 * XREFs of SetKeyboardInputRoutingPolicy @ 0x1C0182664
 * Callers:
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C01127B0 (NtMITSetKeyboardInputRoutingPolicy.c)
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C008DF68 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C017B538 (-SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetKeyboardInputRoutingPolicy(__int32 a1)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 KeyboardProcessor; // rax

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
  CKeyboardProcessor::SetKeyboardInputRoutingPolicy(KeyboardProcessor, a1);
  return 0LL;
}
