/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x18009C570
 * Callers:
 *     __raise_securityfailure @ 0x18008CE74 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008CEA0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnhandledExceptionFilter(__int64 a1)
{
  return RtlUnhandledExceptionFilter2(a1, &unk_18011D492);
}
