/*
 * XREFs of PspJobHasChildren @ 0x1408C75C8
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x14077ED58 (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x1408C4AA4 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x1408C4C40 (PspCreateSilo.c)
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
