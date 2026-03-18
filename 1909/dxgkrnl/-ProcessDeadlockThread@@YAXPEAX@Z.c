/*
 * XREFs of ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x1C01EE8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200A00 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

void __fastcall ProcessDeadlockThread(void *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( (int)DxgCreateLiveDumpWithWdLogs(0x193u, 0x810uLL, 0LL, 0LL, 0LL) < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2, v1);
    *(_QWORD *)(v3 + 24) = 10777LL;
    WdLogEvent5_WdAssertion(v3);
  }
}
