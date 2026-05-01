/*
 * XREFs of CempLockReleaseExclusive @ 0x180070FE4
 * Callers:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockReleaseExclusive(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a1);
}
