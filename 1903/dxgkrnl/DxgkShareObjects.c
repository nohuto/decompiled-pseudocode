/*
 * XREFs of DxgkShareObjects @ 0x1C0139860
 * Callers:
 *     <none>
 * Callees:
 *     DxgkShareObjectsInternal @ 0x1C01398E0 (DxgkShareObjectsInternal.c)
 */

__int64 __fastcall DxgkShareObjects(int a1, void *Src, __int64 a3, ACCESS_MASK DesiredAccess, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = 937LL;
    WdLogEvent5_WdAssertion(v12);
  }
  LOBYTE(v9) = 1;
  LOBYTE(v10) = 1;
  return DxgkShareObjectsInternal(v10, v9, 0, a1, Src, a3, DesiredAccess, a5, 0LL);
}
