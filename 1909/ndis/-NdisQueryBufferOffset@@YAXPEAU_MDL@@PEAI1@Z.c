/*
 * XREFs of ?NdisQueryBufferOffset@@YAXPEAU_MDL@@PEAI1@Z @ 0x1C0091190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisQueryBufferOffset(struct _MDL *a1, unsigned int *a2, unsigned int *a3)
{
  *a2 = a1->ByteOffset;
  *a3 = a1->ByteCount;
}
