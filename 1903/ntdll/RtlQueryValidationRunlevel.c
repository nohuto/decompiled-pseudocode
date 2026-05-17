/*
 * XREFs of RtlQueryValidationRunlevel @ 0x1800FB850
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 __fastcall RtlQueryValidationRunlevel(__int64 a1)
{
  unsigned int v1; // edi
  int v2; // ebx
  int v4; // [rsp+44h] [rbp-24h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v1 = MEMORY[0x7FFE0258];
  v2 = 0;
  if ( a1 && MEMORY[0x7FFE0258] != -1 && (int)ZwOpenKey() >= 0 )
  {
    if ( (int)ZwQueryValueKey() >= 0 && v4 == 4 && v5 == 4 )
      v2 = v6;
    ZwClose();
  }
  return v2 | v1;
}
