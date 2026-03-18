/*
 * XREFs of PsGetKeepAliveCountProcess @ 0x1408C66A4
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

int __fastcall PsGetKeepAliveCountProcess(__int64 a1, char a2)
{
  int v2; // eax

  if ( a2 )
    v2 = *(_DWORD *)(a1 + 2092);
  else
    v2 = *(_DWORD *)(a1 + 2124);
  return v2 & 0x7FFFFFFF;
}
