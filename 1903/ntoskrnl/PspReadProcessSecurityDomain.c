/*
 * XREFs of PspReadProcessSecurityDomain @ 0x140307680
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspReadProcessSecurityDomain(__int64 a1)
{
  return *(_QWORD *)(a1 + 2144);
}
