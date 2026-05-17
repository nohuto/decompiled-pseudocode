/*
 * XREFs of sub_1800E0B08 @ 0x1800E0B08
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 */

__int64 __fastcall sub_1800E0B08(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  signed __int64 v5; // [rsp+78h] [rbp+20h]

  if ( qword_1801642E0 )
  {
    *a3 = qword_1801642E0;
  }
  else
  {
    result = ZwOpenKey();
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedCompareExchange64(&qword_1801642E0, v5, 0LL) )
      ZwClose();
    *a3 = qword_1801642E0;
  }
  return 0LL;
}
