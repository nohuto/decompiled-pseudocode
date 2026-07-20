/*
 * XREFs of SmpQueryWpbtExecutionPolicy @ 0x14000D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpQueryWpbtExecutionPolicy(__int64 a1, int a2, _DWORD *a3, int a4)
{
  bool v4; // al

  v4 = a4 == 4 && a2 == 4 && *a3 != 0;
  SmpDisableWpbtExecution = v4;
  return 0LL;
}
