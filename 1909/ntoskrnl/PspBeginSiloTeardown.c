/*
 * XREFs of PspBeginSiloTeardown @ 0x1408C48E8
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x140306724 (PspHardDereferenceSiloWorker.c)
 */

void __fastcall PspBeginSiloTeardown(__int64 a1)
{
  PspHardDereferenceSiloWorker(a1);
}
