/*
 * XREFs of RaidAdapterDisConnectNonMSIInterrupt @ 0x1C007342C
 * Callers:
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0037768 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterDisConnectNonMSIInterrupt(__int64 a1)
{
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&Parameters.Version = 0LL;
  Parameters.Version = *(_DWORD *)(a1 + 700);
  Parameters.ConnectionContext.Generic = *(PVOID *)(a1 + 688);
  IoDisconnectInterruptEx(&Parameters);
  *(_QWORD *)(a1 + 688) = 0LL;
}
