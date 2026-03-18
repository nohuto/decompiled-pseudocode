/*
 * XREFs of PpmPerfResetHistoryAll @ 0x140777F08
 * Callers:
 *     PpmCheckReInit @ 0x140776E5C (PpmCheckReInit.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     PpmPerfResetHistory @ 0x140194E98 (PpmPerfResetHistory.c)
 */

__int64 PpmPerfResetHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rax
  unsigned __int16 *v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+32h] [rbp-16h]
  __int16 v5; // [rsp+36h] [rbp-12h]
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v2[1] = (unsigned __int16 *)qword_14042A808[0];
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
    PpmPerfResetHistory(Prcb);
  }
  return result;
}
