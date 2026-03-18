/*
 * XREFs of ?_InterruptSynchronizeThunk@FxInterrupt@@CAEPEAX@Z @ 0x1C008DE10
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxInterrupt@@QEAAXXZ @ 0x1C008CEF0 (-AcquireLock@FxInterrupt@@QEAAXXZ.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C008DA54 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 */

char __fastcall FxInterrupt::_InterruptSynchronizeThunk(_QWORD *SyncContext)
{
  FxInterrupt *v2; // rcx
  unsigned __int64 v3; // rcx
  char v4; // di
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v6; // rcx

  v2 = (FxInterrupt *)*SyncContext;
  if ( v2->m_PassiveHandling )
  {
    FxInterrupt::AcquireLock(v2);
    v3 = *SyncContext ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(*SyncContext + 10LL) )
      v3 = 0LL;
    v4 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SyncContext[1])(v3, SyncContext[2]);
    FxInterrupt::ReleaseLock((FxInterrupt *)*SyncContext);
  }
  else
  {
    m_ObjectSize = v2->m_ObjectSize;
    v6 = (unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v6 = 0LL;
    return ((__int64 (__fastcall *)(unsigned __int64, _QWORD))SyncContext[1])(v6, SyncContext[2]);
  }
  return v4;
}
