/*
 * XREFs of PspJobHasChildren @ 0x1408C7CE8
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x14077C438 (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1408C5370 (PspCreateSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1056) != a1 + 1056 )
    return 1;
  return v1;
}
