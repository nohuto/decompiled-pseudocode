/*
 * XREFs of DxgkCreateBundleObject @ 0x1C0250EF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCreateBundleObjectInternal @ 0x1C0250F4C (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DxgkCreateBundleObject(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v6 + 24) = 2216LL;
    WdLogEvent5_WdAssertion(v6);
  }
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkCreateBundleObjectInternal(v3, v2, v4, v5, a1, 0LL);
}
