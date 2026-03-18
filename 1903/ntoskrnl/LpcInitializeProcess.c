/*
 * XREFs of LpcInitializeProcess @ 0x1406921AC
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LpcInitializeProcess(_QWORD *a1)
{
  _QWORD *result; // rax

  a1[210] = 0LL;
  a1[211] = 0LL;
  a1[208] = 0LL;
  result = a1 + 209;
  a1[210] = a1 + 209;
  a1[209] = a1 + 209;
  return result;
}
