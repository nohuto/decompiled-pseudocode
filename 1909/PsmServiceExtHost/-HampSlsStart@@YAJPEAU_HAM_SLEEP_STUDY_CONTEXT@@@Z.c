/*
 * XREFs of ?HampSlsStart@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180043254
 * Callers:
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042F60 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSlsStart(struct _HAM_SLEEP_STUDY_CONTEXT *a1)
{
  __int64 result; // rax

  result = RtlSubscribeWnfStateChangeNotification(
             (char *)a1 + 88,
             WNF_PO_SCENARIO_CHANGE,
             0LL,
             HampSlsScenarioChangeCallback,
             a1,
             0LL,
             0,
             0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
