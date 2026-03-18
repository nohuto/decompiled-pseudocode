/*
 * XREFs of PopNetDisconnectedStandbyModeCallback @ 0x14078A5B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetDisconnectedStandbyModeCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  if ( a3 == 4 && (unsigned int)*a2 <= 1 )
  {
    v4 = 0;
    PopAcquirePolicyLock();
    dword_140443B1C = *a2;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
