/*
 * XREFs of EtwpCheckForStackTracingExtension @ 0x14065C10C
 * Callers:
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpGetFlagExtension @ 0x14065C148 (EtwpGetFlagExtension.c)
 *     EtwpUpdateStackTracing @ 0x1408B8390 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1408C4A28 (EtwpEnableStackCaching.c)
 */

__int64 __fastcall EtwpCheckForStackTracingExtension(__int64 a1, __int64 a2)
{
  _WORD *FlagExtension; // rax
  int updated; // r10d
  __int64 v7; // rax

  FlagExtension = (_WORD *)EtwpGetFlagExtension(a1, 3LL);
  if ( FlagExtension )
  {
    updated = EtwpUpdateStackTracing(a2, FlagExtension + 2, (unsigned __int16)(4 * *FlagExtension - 4) >> 2);
    if ( updated >= 0 )
    {
      v7 = EtwpGetFlagExtension(a1, 5LL);
      if ( v7 )
      {
        if ( 4 * *(_WORD *)v7 == 12 )
          return (unsigned int)EtwpEnableStackCaching(a2, *(unsigned int *)(v7 + 4), *(unsigned int *)(v7 + 8));
        else
          return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)updated;
}
