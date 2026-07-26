/*
 * XREFs of NdisWdfCreateIrpHandler @ 0x1C009EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 */

__int64 __fastcall NdisWdfCreateIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisCreateHandler(*(_QWORD *)(a1 + 3824), a1, a2);
}
