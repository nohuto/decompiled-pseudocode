/*
 * XREFs of ?DefaultDdiSubmitCommand@DXGADAPTER@@CAJQEAXPEBU_DXGKARG_SUBMITCOMMAND@@@Z @ 0x1C003AC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::DefaultDdiSubmitCommand(void *const a1, const struct _DXGKARG_SUBMITCOMMAND *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
  v2[5] = 0LL;
  v2[6] = 0LL;
  v2[7] = 0LL;
  v2[3] = 275LL;
  v2[4] = 7LL;
  WdLogEvent5_WdCriticalError(v2);
  return 3221225659LL;
}
