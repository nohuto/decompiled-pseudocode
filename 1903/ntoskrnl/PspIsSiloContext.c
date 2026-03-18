/*
 * XREFs of PspIsSiloContext @ 0x14077C61C
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x14077C438 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x1408C4B20 (PsInsertSiloContext.c)
 *     PsReplaceSiloContext @ 0x1408C4CA0 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
