/*
 * XREFs of ndisWMIIrpDispatch @ 0x1C0018780
 * Callers:
 *     <none>
 * Callees:
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 */

__int64 __fastcall ndisWMIIrpDispatch(__int64 a1, _IRP *a2)
{
  return ndisWMIDispatch(a1, *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 64), a2);
}
