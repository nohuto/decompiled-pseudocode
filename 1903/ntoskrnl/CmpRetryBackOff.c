/*
 * XREFs of CmpRetryBackOff @ 0x140831F98
 * Callers:
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmpRollbackTransactionArray @ 0x140831FD0 (CmpRollbackTransactionArray.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
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
