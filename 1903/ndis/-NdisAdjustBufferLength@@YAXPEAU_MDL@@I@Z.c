/*
 * XREFs of ?NdisAdjustBufferLength@@YAXPEAU_MDL@@I@Z @ 0x1C00805E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisAdjustBufferLength(struct _MDL *a1, ULONG a2)
{
  a1->ByteCount = a2;
}
