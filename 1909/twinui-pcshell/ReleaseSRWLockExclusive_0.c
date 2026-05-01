/*
 * XREFs of ReleaseSRWLockExclusive_0 @ 0x18008AB1A
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1804333CC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x180433708 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ReleaseSRWLockExclusive_0(PSRWLOCK SRWLock)
{
  ReleaseSRWLockExclusive(SRWLock);
}
