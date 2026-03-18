/*
 * XREFs of CmpQuotaWarningWorker @ 0x140827350
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741226, 0, 0, 0, 1, (__int64)&v2);
}
