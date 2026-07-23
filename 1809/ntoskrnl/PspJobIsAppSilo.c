/*
 * XREFs of PspJobIsAppSilo @ 0x1402E991C
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FCA0 (PsIsServerSilo.c)
 */

char __fastcall PspJobIsAppSilo(__int64 a1)
{
  char v1; // dl
  char IsServerSilo; // al

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 )
  {
    IsServerSilo = PsIsServerSilo(a1);
    if ( IsServerSilo == v1 )
      return 1;
  }
  return v1;
}
