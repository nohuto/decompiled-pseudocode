/*
 * XREFs of PpmPerfResizeHistoryAll @ 0x14086B29C
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14074F044 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BE0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A62A4 (KeGetPrcb.c)
 *     PpmPerfResizeHistory @ 0x14086B1BC (PpmPerfResizeHistory.c)
 */

__int64 PpmPerfResizeHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  ULONG v4; // [rsp+50h] [rbp+8h] BYREF

  v2[1] = (unsigned __int16 *)qword_140404158[0];
  v2[0] = (unsigned __int16 *)PpmCheckRegistered;
  v3 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v4, v2);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v4);
    PpmPerfResizeHistory(Prcb);
  }
  return result;
}
