/*
 * XREFs of sub_1800F6E70 @ 0x1800F6E70
 * Callers:
 *     sub_1800F6F14 @ 0x1800F6F14 (sub_1800F6F14.c)
 * Callees:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 */

__int64 __fastcall sub_1800F6E70(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+68h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( !qword_1801669D0 && (int)sub_180009204(0x20019u, a2, (__int64)&v3) >= 0 )
  {
    if ( (int)ZwOpenKey() >= 0 && _InterlockedCompareExchange64(&qword_1801669D0, 0LL, 0LL) )
      ZwClose();
    ZwClose();
  }
  return qword_1801669D0;
}
