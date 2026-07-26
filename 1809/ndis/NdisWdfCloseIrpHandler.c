/*
 * XREFs of NdisWdfCloseIrpHandler @ 0x1C00651F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCloseHandler @ 0x1C005F928 (ndisCloseHandler.c)
 */

__int64 __fastcall NdisWdfCloseIrpHandler(__int64 a1, _IRP *a2)
{
  return ndisCloseHandler(*(_QWORD *)(a1 + 3856), (_BYTE *)a1, a2);
}
