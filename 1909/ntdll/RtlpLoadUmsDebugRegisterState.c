/*
 * XREFs of RtlpLoadUmsDebugRegisterState @ 0x18010A250
 * Callers:
 *     RtlpLoadPrimaryDbgRegWrap @ 0x1800A1D80 (RtlpLoadPrimaryDbgRegWrap.c)
 *     RtlExecuteUmsThread @ 0x1800F3880 (RtlExecuteUmsThread.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x180066804 (RtlpCopyLegacyContext.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwContinue @ 0x18009D6F0 (ZwContinue.c)
 */

NTSTATUS __fastcall RtlpLoadUmsDebugRegisterState(__int64 a1)
{
  struct _CONTEXT ContextRecord; // [rsp+20h] [rbp-4E8h] BYREF

  if ( !a1 )
    return -1073741811;
  RtlpCopyLegacyContext(a1, (__int64)&ContextRecord, 1048592);
  return ZwContinue(&ContextRecord, 0);
}
