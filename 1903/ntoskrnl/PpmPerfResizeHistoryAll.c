/*
 * XREFs of PpmPerfResizeHistoryAll @ 0x1408A7548
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14077378C (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     PpmPerfResizeHistory @ 0x1408A7468 (PpmPerfResizeHistory.c)
 */

__int64 PpmPerfResizeHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+32h] [rbp-16h]
  __int16 v5; // [rsp+36h] [rbp-12h]
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v2[1] = (unsigned __int16 *)qword_14042A7F8[0];
  v2[0] = (unsigned __int16 *)PpmCheckRegistered;
  v4 = 0;
  v5 = 0;
  v3 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v6, v2);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v6);
    PpmPerfResizeHistory(Prcb);
  }
  return result;
}
