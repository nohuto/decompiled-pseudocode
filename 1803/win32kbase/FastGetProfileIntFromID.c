/*
 * XREFs of FastGetProfileIntFromID @ 0x1C00A8030
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0067F00 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     FastGetProfileIntW @ 0x1C00A80D0 (FastGetProfileIntW.c)
 */

__int64 __fastcall FastGetProfileIntFromID(int a1, int a2, ULONG MessageId, int a4, PULONG Value, int a6)
{
  _WORD v10[80]; // [rsp+30h] [rbp-C8h] BYREF

  RtlLoadStringOrError(MessageId, v10, 80, 0);
  return FastGetProfileIntW(a1, a2, (int)v10, a4, Value, a6);
}
