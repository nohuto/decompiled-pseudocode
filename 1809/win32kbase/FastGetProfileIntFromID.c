/*
 * XREFs of FastGetProfileIntFromID @ 0x1C0046AF0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C006B700 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     FastGetProfileIntW @ 0x1C0046B90 (FastGetProfileIntW.c)
 *     RtlLoadStringOrError @ 0x1C0046CF0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntFromID(int a1, int a2, ULONG MessageId, int a4, PULONG Value, int a6)
{
  int v10[40]; // [rsp+30h] [rbp-C8h] BYREF

  RtlLoadStringOrError(MessageId, v10);
  return FastGetProfileIntW(a1, a2, (int)v10, a4, Value, a6);
}
