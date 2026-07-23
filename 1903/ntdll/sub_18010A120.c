/*
 * XREFs of sub_18010A120 @ 0x18010A120
 * Callers:
 *     sub_1800A15D0 @ 0x1800A15D0 (sub_1800A15D0.c)
 *     RtlExecuteUmsThread @ 0x1800F37A0 (RtlExecuteUmsThread.c)
 * Callees:
 *     sub_1800665B4 @ 0x1800665B4 (sub_1800665B4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwContinue @ 0x18009CF40 (ZwContinue.c)
 */

NTSTATUS __fastcall sub_18010A120(__int64 a1)
{
  struct _CONTEXT ContextRecord; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return -1073741811;
  sub_1800665B4(a1, (__int64)&ContextRecord, 1048592);
  return ZwContinue(&ContextRecord, 0);
}
