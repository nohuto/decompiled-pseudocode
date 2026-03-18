/*
 * XREFs of PspBeginSiloTeardown @ 0x1408C5018
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x140306C74 (PspHardDereferenceSiloWorker.c)
 */

void __fastcall PspBeginSiloTeardown(__int64 a1)
{
  PspHardDereferenceSiloWorker(a1);
}
