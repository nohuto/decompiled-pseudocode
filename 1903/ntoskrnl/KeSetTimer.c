/*
 * XREFs of KeSetTimer @ 0x1400B29E0
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, 0, 0, (__int64)Dpc);
}
