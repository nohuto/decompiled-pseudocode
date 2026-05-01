/*
 * XREFs of __Platform_AcquireSRWLockExclusive @ 0x18008AB3E
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1804333CC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x180433708 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall _Platform_AcquireSRWLockExclusive(PSRWLOCK SRWLock)
{
  AcquireSRWLockExclusive(SRWLock);
}
