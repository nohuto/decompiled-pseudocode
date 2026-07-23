/*
 * XREFs of sub_180044584 @ 0x180044584
 * Callers:
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_1800465D0 @ 0x1800465D0 (sub_1800465D0.c)
 * Callees:
 *     TpSetTimerEx @ 0x1800323F0 (TpSetTimerEx.c)
 *     sub_180107238 @ 0x180107238 (sub_180107238.c)
 */

__int64 sub_180044584()
{
  unsigned int v0; // ebx

  if ( (dword_180163534 & 0x40) != 0 && (v0 = 0, !byte_180165408) && dword_180166364 )
  {
    if ( !_InterlockedCompareExchange(&dword_180166360, 1, 0) )
    {
      TpSetTimerEx(Timer, &DueTime, 0, 0x1388u);
      if ( (byte_180166058 & 8) != 0 )
        sub_180107238();
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v0;
}
