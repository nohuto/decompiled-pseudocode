/*
 * XREFs of RtlReportCriticalFailure @ 0x1800F906C
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18004A840 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpReportHeapFailure @ 0x180104288 (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800F901C (RtlIsAnyDebuggerPresent.c)
 *     RtlReportFatalFailure @ 0x1800F9130 (RtlReportFatalFailure.c)
 */

__int64 __fastcall RtlReportCriticalFailure(int a1, __int64 a2, int a3)
{
  int v6; // ecx
  _DWORD v8[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-B0h]
  void (__stdcall *v10)(PEXCEPTION_RECORD); // [rsp+40h] [rbp-A8h]
  int v11; // [rsp+48h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-98h]

  if ( RtlIsAnyDebuggerPresent() )
  {
    DbgPrintEx(0x65u, 0, "Critical error detected %lx\n", v6);
    if ( a3 )
      __debugbreak();
  }
  v8[0] = a1;
  v8[1] = 1;
  v9 = 0LL;
  v10 = RtlRaiseException;
  v11 = 1;
  v12 = a2;
  return RtlReportFatalFailure(v8);
}
