/*
 * XREFs of ZwCreateThreadEx @ 0x1401C1870
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x140610864 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x14084A1A0 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x1408873A4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
