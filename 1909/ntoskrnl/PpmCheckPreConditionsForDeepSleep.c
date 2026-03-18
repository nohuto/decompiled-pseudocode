/*
 * XREFs of PpmCheckPreConditionsForDeepSleep @ 0x1402EE0BC
 * Callers:
 *     PpmIdleSelectStates @ 0x14018A5C0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmCheckPreConditionsForDeepSleep(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 33) && PopDeepSleepIsEnabled && PopDeepSleepIsEngaged )
    return PopDeepSleepEvaluateWorkItemQueued == 0;
  return v1;
}
