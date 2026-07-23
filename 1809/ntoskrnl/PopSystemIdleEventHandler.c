/*
 * XREFs of PopSystemIdleEventHandler @ 0x1408774A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopSystemIdleEventHandler(char a1, _DWORD *a2)
{
  *a2 = 2 - (a1 != 0);
  return 0LL;
}
