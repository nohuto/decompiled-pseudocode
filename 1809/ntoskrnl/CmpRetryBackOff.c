/*
 * XREFs of CmpRetryBackOff @ 0x1407F8AC4
 * Callers:
 *     CmUnloadKey @ 0x140691E38 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x1407EF43C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8CC (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x1407F8AFC (CmpRollbackTransactionArray.c)
 *     CmRestoreKey @ 0x1408013CC (CmRestoreKey.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 */

NTSTATUS __fastcall CmpRetryBackOff(_DWORD *a1)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( ++*a1 > 0xAu )
  {
    Interval.QuadPart = -10000000LL;
    result = KeDelayExecutionThread(0, 0, &Interval);
    *a1 = 0;
  }
  return result;
}
