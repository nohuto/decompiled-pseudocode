/*
 * XREFs of ZwCreateThreadEx @ 0x1401B98F0
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14068CF34 (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140810900 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x14084BEC4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
