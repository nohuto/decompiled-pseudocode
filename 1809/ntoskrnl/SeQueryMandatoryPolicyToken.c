/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x14001428C
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x1405C00C8 (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
