/*
 * XREFs of ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0091D3C
 * Callers:
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0122170 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CDeviceIdentity::IssueIdentityOnDeviceArrival(
        CDeviceIdentity *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3)
{
  PKDPC BufferChainingDpc; // rsi
  int ProcessorHistory; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char *v9; // rcx
  PVOID v10; // rcx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( *((_DWORD *)a2 + 18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  RIMLockExclusive((__int64)BufferChainingDpc);
  ProcessorHistory = BufferChainingDpc->ProcessorHistory;
  LODWORD(BufferChainingDpc->ProcessorHistory) = ProcessorHistory + 1;
  BufferChainingDpc->DpcListEntry.Next = 0LL;
  ExReleasePushLockExclusiveEx(BufferChainingDpc, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 18) = ProcessorHistory;
  if ( !ProcessorHistory )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = (char *)*((_QWORD *)a2 + 159);
  if ( v9 && (int)RawInputManagerDeviceObjectResolveHandle(v9, 3u, 1, &Object) >= 0 )
  {
    v10 = Object;
    *((_DWORD *)a2 + 19) = *((_DWORD *)Object + 18);
    ObfDereferenceObject(v10);
  }
  *((_QWORD *)a2 + 10) = lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_;
}
