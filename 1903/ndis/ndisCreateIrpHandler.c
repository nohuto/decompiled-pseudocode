/*
 * XREFs of ndisCreateIrpHandler @ 0x1C000FB90
 * Callers:
 *     <none>
 * Callees:
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 */

__int64 __fastcall ndisCreateIrpHandler(__int64 a1, char a2)
{
  return ndisCreateHandler(a1, *(_QWORD *)(a1 + 64), a2);
}
