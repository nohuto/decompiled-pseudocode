/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x1800FD140
 * Callers:
 *     __raise_securityfailure @ 0x18008FEE4 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008FF10 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(__int64 a1)
{
  return RtlUnhandledExceptionFilter2(a1, byte_18011CBC2);
}
