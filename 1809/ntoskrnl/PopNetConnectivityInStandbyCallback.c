/*
 * XREFs of PopNetConnectivityInStandbyCallback @ 0x140764E40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetConnectivityInStandbyCallback(__int64 a1, int *a2, int a3)
{
  unsigned int v4; // ebx

  if ( a3 == 4 && (unsigned int)*a2 <= 2 )
  {
    v4 = 0;
    PopAcquirePolicyLock();
    dword_1404191D8 = *a2;
    PopReleasePolicyLock();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
