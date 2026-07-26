/*
 * XREFs of NdisWdfCreateIrpHandler @ 0x1C0065220
 * Callers:
 *     <none>
 * Callees:
 *     ndisCreateHandler @ 0x1C000F8B0 (ndisCreateHandler.c)
 */

__int64 __fastcall NdisWdfCreateIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisCreateHandler(*(_QWORD *)(a1 + 3856), a1, a2);
}
