/*
 * XREFs of PspJobHasChildren @ 0x14088B018
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x140731BF8 (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140888200 (PspCreateSilo.c)
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
