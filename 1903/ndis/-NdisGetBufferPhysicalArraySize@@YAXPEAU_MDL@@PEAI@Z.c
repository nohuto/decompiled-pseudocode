/*
 * XREFs of ?NdisGetBufferPhysicalArraySize@@YAXPEAU_MDL@@PEAI@Z @ 0x1C0090EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisGetBufferPhysicalArraySize(struct _MDL *a1, unsigned int *a2)
{
  __int64 ByteCount; // r8
  unsigned __int64 v3; // rax

  ByteCount = a1->ByteCount;
  if ( (_DWORD)ByteCount )
    v3 = ((unsigned __int64)((LODWORD(a1->StartVa) + a1->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
  else
    LODWORD(v3) = 1;
  *a2 = v3;
}
