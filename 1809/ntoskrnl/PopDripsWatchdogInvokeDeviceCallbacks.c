/*
 * XREFs of PopDripsWatchdogInvokeDeviceCallbacks @ 0x1408796AC
 * Callers:
 *     PopDripsWatchdogDfxCallback @ 0x14086E2E0 (PopDripsWatchdogDfxCallback.c)
 *     PopDripsCallbackTakeAction @ 0x140879568 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1408797A8 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     PopFxInvokeDripsWatchdogCallback @ 0x140869A1C (PopFxInvokeDripsWatchdogCallback.c)
 */

_UNKNOWN **__fastcall PopDripsWatchdogInvokeDeviceCallbacks(__int64 a1, unsigned int a2)
{
  _UNKNOWN **result; // rax
  __int64 i; // rdi
  __int64 v6; // rbp
  __int64 j; // rbx
  __int64 v8; // rdi
  __int64 k; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 888); i = (unsigned int)(i + 1) )
  {
    result = *(_UNKNOWN ***)(a1 + 880);
    v6 = (__int64)result[i];
    for ( j = v6; j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(_QWORD *)(j + 80) )
        result = (_UNKNOWN **)PopFxInvokeDripsWatchdogCallback(j, v6, a2);
    }
  }
  v8 = *(_QWORD *)(a1 + 48);
  for ( k = v8; k; k = *(_QWORD *)(k + 16) )
  {
    if ( *(_QWORD *)(k + 80) )
      result = (_UNKNOWN **)PopFxInvokeDripsWatchdogCallback(k, v8, a2);
  }
  return result;
}
