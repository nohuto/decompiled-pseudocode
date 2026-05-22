/*
 * XREFs of ?TerminateWorkerThreadApc@ConsumerControlManager@@CAX_K@Z @ 0x18000EA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ConsumerControlManager::TerminateWorkerThreadApc(ULONG_PTR Parameter)
{
  *(_BYTE *)(Parameter + 104) = 1;
}
