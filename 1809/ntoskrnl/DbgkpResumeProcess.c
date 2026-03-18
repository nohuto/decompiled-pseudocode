/*
 * XREFs of DbgkpResumeProcess @ 0x1408115AC
 * Callers:
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     PsThawProcess @ 0x14067E324 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
