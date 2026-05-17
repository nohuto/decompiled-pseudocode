/*
 * XREFs of sub_1800D15E0 @ 0x1800D15E0
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

void sub_1800D15E0()
{
  int ValueKey; // ebx
  int v1; // [rsp+44h] [rbp-64h]
  int v2; // [rsp+48h] [rbp-60h]
  int v3; // [rsp+4Ch] [rbp-5Ch]

  if ( byte_180165430
    || (byte_180163EC1 = 0, (int)ZwOpenKey() >= 0)
    && (ValueKey = ZwQueryValueKey(), ZwClose(), ValueKey >= 0)
    && v1 == 4
    && v2 == 4
    && v3 )
  {
    byte_180163EC1 = 1;
  }
}
