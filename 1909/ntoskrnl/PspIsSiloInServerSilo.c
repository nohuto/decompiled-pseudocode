/*
 * XREFs of PspIsSiloInServerSilo @ 0x1403067A0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1400EAEE0 (PsGetEffectiveServerSilo.c)
 */

bool __fastcall PspIsSiloInServerSilo(__int64 a1)
{
  return PsGetEffectiveServerSilo(a1) != 0;
}
