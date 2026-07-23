/*
 * XREFs of CmpQuotaWarningWorker @ 0x1407EDA40
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x1408D78A0 (ExRaiseHardError.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(3221226070LL, 0LL, 0LL, 0LL, 1, &v2);
}
