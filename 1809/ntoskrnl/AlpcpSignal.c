/*
 * XREFs of AlpcpSignal @ 0x1400D3870
 * Callers:
 *     AlpcpCompleteDeferSignalRequest @ 0x140615128 (AlpcpCompleteDeferSignalRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x140633040 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400D3920 (AlpcpQueueIoCompletionPort.c)
 */

int __fastcall AlpcpSignal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      LOBYTE(a3) = 1;
      LOBYTE(a2) = *(_BYTE *)(a1 + 59);
      LODWORD(v6) = AlpcpQueueIoCompletionPort(v5, a2, a3);
    }
    else
    {
      LODWORD(v6) = KeReleaseSemaphoreEx(*(_QWORD *)(v5 + 248), 1LL, 1, a4, (_BYTE)a2 != 0);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = v6 + 1608;
      if ( (_BYTE)a2 )
        LODWORD(v6) = KeReleaseSemaphoreEx(v7, 1LL, 1, a4, (_BYTE)a3 != 0 ? 1 : 5);
      else
        LODWORD(v6) = KeReleaseSemaphoreEx(v7, 1LL, 1, a4, 2);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( v8 )
      {
        LODWORD(v6) = KeSetEvent((PRKEVENT)(v8 & 0xFFFFFFFFFFFFFFFEuLL), 0, a2);
        v9 = *(_QWORD *)(a1 + 40);
        if ( (v9 & 1) != 0 )
          LODWORD(v6) = ObfDereferenceObject((PVOID)(v9 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  return v6;
}
