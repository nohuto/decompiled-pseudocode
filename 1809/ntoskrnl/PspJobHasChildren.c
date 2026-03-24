/*
 * XREFs of PspJobHasChildren @ 0x140889DB8
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x140730A08 (PsInsertPermanentSiloContextEx.c)
 *     PspConvertSiloToServerSilo @ 0x140886E04 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140886FA0 (PspCreateSilo.c)
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
