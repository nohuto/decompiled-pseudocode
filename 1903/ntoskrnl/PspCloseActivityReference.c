/*
 * XREFs of PspCloseActivityReference @ 0x1406F8350
 * Callers:
 *     <none>
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x1406451F0 (PsReleaseProcessWakeCounter.c)
 */

unsigned __int64 __fastcall PspCloseActivityReference(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax

  if ( a4 == 1 )
  {
    if ( *a2 )
      return PsReleaseProcessWakeCounter(*a2, (__int64)a2);
  }
  return result;
}
