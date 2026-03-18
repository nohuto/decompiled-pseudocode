/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x1405BC070
 * Callers:
 *     PiPnpRtlIsDeviceValidForSession @ 0x1405BBE34 (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405BBF24 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiUEventApplyAdditionalFilters @ 0x140697A2C (PiUEventApplyAdditionalFilters.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140002320 (PsGetServerSiloServiceSessionId.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PsGetSiloBySessionId @ 0x1405BC14C (PsGetSiloBySessionId.c)
 */

NTSTATUS __stdcall SeQuerySessionIdTokenEx(PACCESS_TOKEN Token, PULONG SessionId, PBOOLEAN IsServiceSession)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v7; // si
  ULONG v8; // ebp
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 1;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  v8 = *((_DWORD *)Token + 30);
  *SessionId = v8;
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v8 )
    v7 = (int)PsGetSiloBySessionId(v8, &v10) >= 0 && v8 == (unsigned int)PsGetServerSiloServiceSessionId(v10);
  *IsServiceSession = v7;
  return 0;
}
