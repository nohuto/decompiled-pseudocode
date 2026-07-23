/*
 * XREFs of EtwpCheckForPoolTagFilterExtension @ 0x1407280C4
 * Callers:
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 * Callees:
 *     EtwpGetFlagExtension @ 0x14065C148 (EtwpGetFlagExtension.c)
 *     EtwpUpdateTagFilter @ 0x14072812C (EtwpUpdateTagFilter.c)
 */

__int64 __fastcall EtwpCheckForPoolTagFilterExtension(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *FlagExtension; // rax
  unsigned __int8 v5; // r11
  __int64 v6; // rcx
  __int64 v8; // rdx

  FlagExtension = EtwpGetFlagExtension(a2, 4);
  if ( !FlagExtension )
  {
    if ( a3 )
    {
      v6 = 5LL * v5;
      EtwpPoolTagFilter[2 * v6] = 1;
      *(_DWORD *)&EtwpPoolTagFilter[2 * v6 + 2] = 42;
    }
    return 0LL;
  }
  v8 = *FlagExtension;
  LOWORD(v8) = (unsigned __int16)(4 * v8 - 4) >> 2;
  if ( (unsigned __int16)v8 <= 4u )
  {
    EtwpUpdateTagFilter(FlagExtension + 2, v8, &EtwpPoolTagFilter[10 * v5]);
    return 0LL;
  }
  return 3221225485LL;
}
