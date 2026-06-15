/*
 * XREFs of ?AddRef@CMonitor@@UEAAKXZ @ 0x180043300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::AddRef(CMonitor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
