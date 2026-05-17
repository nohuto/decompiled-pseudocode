/*
 * XREFs of LdrpOverrideExportSuppression @ 0x1800D6B50
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009B04 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
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
