/*
 * XREFs of ndisCreateIrpHandler @ 0x1C000FE00
 * Callers:
 *     <none>
 * Callees:
 *     ndisCreateHandler @ 0x1C000F8B0 (ndisCreateHandler.c)
 */

__int64 __fastcall ndisCreateIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisCreateHandler(a1, *(_QWORD *)(a1 + 64), a2);
}
