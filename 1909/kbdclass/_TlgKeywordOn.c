/*
 * XREFs of _TlgKeywordOn @ 0x1C0007398
 * Callers:
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004970 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KbdClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C00049E8 (KbdClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall TlgKeywordOn(TraceLoggingHProvider hProvider, ULONGLONG keyword)
{
  return (qword_1C000A020 & 0x400000000000LL) != 0 && (qword_1C000A028 & 0x400000000000LL) == qword_1C000A028;
}
