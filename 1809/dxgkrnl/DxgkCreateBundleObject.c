/*
 * XREFs of DxgkCreateBundleObject @ 0x1C021C9F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCreateBundleObjectInternal @ 0x1C021CA4C (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DxgkCreateBundleObject(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 2229LL;
    WdLogEvent5_WdAssertion(v6);
  }
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkCreateBundleObjectInternal(v3, v2, v4, v5, a1, 0LL);
}
