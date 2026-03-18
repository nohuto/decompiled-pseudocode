/*
 * XREFs of PipAreDriversLoadedWorker @ 0x1400D4E40
 * Callers:
 *     PipAreDriversLoaded @ 0x1400D4E20 (PipAreDriversLoaded.c)
 *     PipSetDevNodeState @ 0x140145D2C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1401743E4 (PipRestoreDevNodeState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipAreDriversLoadedWorker(int a1, int a2)
{
  while ( a1 <= 785 )
  {
    if ( a1 >= 783 )
      return 1LL;
    if ( a1 <= 770 )
      return 0LL;
    if ( a1 <= 781 )
      return 1LL;
    a1 = a2;
    a2 = 768;
  }
  return a1 == 787;
}
