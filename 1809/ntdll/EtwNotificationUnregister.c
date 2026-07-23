/*
 * XREFs of EtwNotificationUnregister @ 0x18004E980
 * Callers:
 *     SbSelectProcedure @ 0x180027CD0 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x18004E920 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x18004E970 (EtwEventUnregister.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800715FC (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x1800826E0 (SbObtainTraceHandle.c)
 *     SbCleanupTrace @ 0x180084CDC (SbCleanupTrace.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CD9E0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CDA68 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D14D0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFreeRegistration @ 0x18004EA88 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x18004EAC4 (EtwpRemoveRegistrationFromTable.c)
 *     RtlSetLastWin32Error @ 0x18004ED60 (RtlSetLastWin32Error.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050D6C (EtwpDereferenceUmGuidEntry.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 */

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  REGHANDLE v2; // rdi
  REGHANDLE v4; // rbx
  void *v5; // rcx

  v2 = HIWORD(RegHandle);
  if ( !HIWORD(RegHandle) )
    goto LABEL_13;
  v4 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (RegHandle & 1) != 0
    || HIWORD(RegHandle) != *(_WORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x60)
    || v4 == PrivateLoggerNotificationEntry )
  {
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (_WORD)v2 != _InterlockedCompareExchange16((volatile signed __int16 *)(v4 + 96), 0, v2) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
LABEL_13:
    RtlSetLastWin32Error(6);
    return 6;
  }
  EtwpRemoveRegistrationFromTable((PRTL_BALANCED_NODE)v4);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (*(_WORD *)(v4 + 98) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v4 + 88));
  v5 = *(void **)(v4 + 248);
  if ( v5 )
  {
    EtwpDereferenceUmGuidEntry(v5);
    *(_QWORD *)(v4 + 248) = 0LL;
  }
  if ( Context )
    *Context = *(PVOID *)(v4 + 56);
  EtwpFreeRegistration(v4);
  return 0;
}
