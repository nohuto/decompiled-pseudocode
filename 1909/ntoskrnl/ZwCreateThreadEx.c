/*
 * XREFs of ZwCreateThreadEx @ 0x1401C23F0
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x140612374 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x1408498A0 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x140886BD0 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
