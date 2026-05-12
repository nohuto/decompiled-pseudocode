/*
 * XREFs of RaidAdapterDisConnectMSIInterrupt @ 0x1C00733E0
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0037768 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterDisConnectMSIInterrupt(__int64 a1)
{
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&Parameters.Version = 0LL;
  Parameters.Version = *(_DWORD *)(a1 + 700);
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 4496);
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 688) = 0LL;
}
