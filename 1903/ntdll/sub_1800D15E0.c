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
  NTSTATUS v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-68h] BYREF
  int v4; // [rsp+44h] [rbp-64h]
  int v5; // [rsp+48h] [rbp-60h]
  int v6; // [rsp+4Ch] [rbp-5Ch]

  if ( byte_180165430
    || (byte_180163EC1 = 0, ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180119360) >= 0)
    && (v0 = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180119310,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x50u,
               &ResultLength),
        ZwClose(KeyHandle),
        v0 >= 0)
    && v4 == 4
    && v5 == 4
    && v6 )
  {
    byte_180163EC1 = 1;
  }
}
