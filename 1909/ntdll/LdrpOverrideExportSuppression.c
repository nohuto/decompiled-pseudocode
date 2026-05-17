/*
 * XREFs of LdrpOverrideExportSuppression @ 0x1800D49DC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18001AE58 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 (__fastcall **LdrpOverrideExportSuppression())()
{
  __int64 (__fastcall **result)(); // rax

  result = (__int64 (__fastcall **)())LdrControlFlowGuardEnforcedWithExportSuppression();
  if ( (_DWORD)result == 1 )
  {
    result = &LdrpSuppressedExportOverrideList;
    LdrpSuppressedExportOverrideListPtr = (__int64)&LdrpSuppressedExportOverrideList;
  }
  return result;
}
