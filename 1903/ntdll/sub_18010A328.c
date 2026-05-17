/*
 * XREFs of sub_18010A328 @ 0x18010A328
 * Callers:
 *     sub_18010A234 @ 0x18010A234 (sub_18010A234.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 sub_18010A328()
{
  __int64 result; // rax
  int v1; // [rsp+78h] [rbp+3Fh]
  int v2; // [rsp+7Ch] [rbp+43h]

  result = ZwOpenKey();
  if ( (int)result >= 0 )
  {
    result = ZwQueryValueKey();
    if ( (int)result >= 0 && v1 == 4 )
    {
      if ( v2 )
        dword_180166070 |= 0x10u;
      else
        dword_180166070 |= 8u;
    }
  }
  return result;
}
