/*
 * XREFs of PpmIdleInstallDefaultStates @ 0x14018B310
 * Callers:
 *     <none>
 * Callees:
 *     PpmInstallNewIdleStates @ 0x14018B330 (PpmInstallNewIdleStates.c)
 */

__int64 __fastcall PpmIdleInstallDefaultStates(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = a1 + 23808;
  return PpmInstallNewIdleStates();
}
