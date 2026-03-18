/*
 * XREFs of MiFreeSessionSpaceMap @ 0x140166C08
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140727B5C (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

unsigned __int64 MiFreeSessionSpaceMap()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  if ( *(_QWORD *)(result + 208) )
    KeBugCheckEx(0xBAu, *(unsigned int *)(result + 8), *(unsigned int *)(result + 216), 0LL, 0LL);
  return result;
}
