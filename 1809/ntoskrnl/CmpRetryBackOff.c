/*
 * XREFs of CmpRetryBackOff @ 0x1407F8AA4
 * Callers:
 *     CmUnloadKey @ 0x140691E18 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1407E88D0 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x1407EF41C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8AC (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x1407F8ADC (CmpRollbackTransactionArray.c)
 *     CmRestoreKey @ 0x1408013AC (CmRestoreKey.c)
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
