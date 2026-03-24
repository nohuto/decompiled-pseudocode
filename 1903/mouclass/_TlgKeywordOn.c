/*
 * XREFs of _TlgKeywordOn @ 0x1C0006B58
 * Callers:
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C00041D0 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C0004248 (MouClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (qword_1C0009020 & 0x400000000000LL) != 0 && (qword_1C0009028 & 0x400000000000LL) == qword_1C0009028;
}
