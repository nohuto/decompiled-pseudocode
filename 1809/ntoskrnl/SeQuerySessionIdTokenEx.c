/*
 * XREFs of SeQuerySessionIdTokenEx @ 0x140596110
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14058FB68 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140595EDC (PiPnpRtlIsDeviceValidForSession.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140595FCC (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1400067D0 (PsGetServerSiloServiceSessionId.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetSiloBySessionId @ 0x140596B48 (PsGetSiloBySessionId.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v8 )
    v7 = (int)PsGetSiloBySessionId(v8, &v10) >= 0 && v8 == (unsigned int)PsGetServerSiloServiceSessionId(v10);
  *IsServiceSession = v7;
  return 0;
}
