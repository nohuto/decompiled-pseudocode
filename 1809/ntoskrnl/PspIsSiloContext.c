/*
 * XREFs of PspIsSiloContext @ 0x140731DD8
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x140731BF8 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x1408879C0 (PsInsertSiloContext.c)
 *     PsReplaceSiloContext @ 0x140887B40 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
