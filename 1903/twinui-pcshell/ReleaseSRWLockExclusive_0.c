/*
 * XREFs of ReleaseSRWLockExclusive_0 @ 0x180087FCE
 * Callers:
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180413D4C (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x180414088 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ReleaseSRWLockExclusive_0(PSRWLOCK SRWLock)
{
  ReleaseSRWLockExclusive(SRWLock);
}
