/*
 * XREFs of PspCloseActivityReference @ 0x1406FA110
 * Callers:
 *     <none>
 * Callees:
 *     PsReleaseProcessWakeCounter @ 0x140658D40 (PsReleaseProcessWakeCounter.c)
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
