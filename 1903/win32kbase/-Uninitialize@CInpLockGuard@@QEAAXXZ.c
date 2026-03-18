/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00B48CC
 * Callers:
 *     UnInitializeInputComponents @ 0x1C00B45A4 (UnInitializeInputComponents.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00B47C0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B4894 (--1CTouchProcessor@@QEAA@XZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::Uninitialize(CInpLockGuard *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)this + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    ExDeleteResourceLite(*(PERESOURCE *)this);
    ExFreePoolWithTag(*(PVOID *)this, 0);
    *(_QWORD *)this = 0LL;
  }
}
