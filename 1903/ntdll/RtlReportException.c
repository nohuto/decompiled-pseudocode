/*
 * XREFs of RtlReportException @ 0x1800DB920
 * Callers:
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 *     sub_1800D45D0 @ 0x1800D45D0 (sub_1800D45D0.c)
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800F9050 @ 0x1800F9050 (sub_1800F9050.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA340 (RtlUnhandledExceptionFilter2.c)
 *     sub_18010F048 @ 0x18010F048 (sub_18010F048.c)
 *     sub_18010F9F4 @ 0x18010F9F4 (sub_18010F9F4.c)
 *     sub_18010FA78 @ 0x18010FA78 (sub_18010FA78.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 *     sub_1800DC838 @ 0x1800DC838 (sub_1800DC838.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int v8; // ebx
  int v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v10 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  ((void (*)(void))sub_1800DC838)();
  if ( byte_180165430 )
    return 0LL;
  if ( (int)ZwQueryInformationProcess() >= 0 && v9 == 1 )
  {
    v3 = 1;
    v10 = -300000000LL;
  }
  v8 = sub_1800DBEC0(a1, a2, a3, (unsigned __int64)&v10 & -(__int64)(v3 != 0), 0LL);
  sub_1800DC838(a1, a2, a3);
  return v8;
}
