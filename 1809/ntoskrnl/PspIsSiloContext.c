/*
 * XREFs of PspIsSiloContext @ 0x140730C08
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x140730A28 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x140886780 (PsInsertSiloContext.c)
 *     PsReplaceSiloContext @ 0x140886900 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
