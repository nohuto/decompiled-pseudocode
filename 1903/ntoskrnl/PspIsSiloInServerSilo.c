/*
 * XREFs of PspIsSiloInServerSilo @ 0x140306CF0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400E5F40 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
