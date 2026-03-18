/*
 * XREFs of ?IssueIdentityOnDeviceArrival@CDeviceIdentity@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00A4E50
 * Callers:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CDeviceIdentity::IssueIdentityOnDeviceArrival(
        CDeviceIdentity *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3)
{
  struct CDeviceIdentity *v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char *v9; // rcx
  PVOID v10; // rcx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  Object = this;
  v4 = gpDeviceIdentity;
  if ( *((_DWORD *)a2 + 18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 19) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  RIMLockExclusive((__int64)v4);
  v5 = *((_DWORD *)v4 + 4);
  *((_DWORD *)v4 + 4) = v5 + 1;
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 18) = v5;
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = (char *)*((_QWORD *)a2 + 177);
  if ( v9 && (int)RawInputManagerDeviceObjectResolveHandle(v9, 3u, 1, &Object) >= 0 )
  {
    v10 = Object;
    *((_DWORD *)a2 + 19) = *((_DWORD *)Object + 18);
    ObfDereferenceObject(v10);
  }
  *((_QWORD *)a2 + 10) = lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_;
}
