/*
 * XREFs of EtwpRotateCompressionTarget @ 0x14033405C
 * Callers:
 *     EtwpCompressBuffer @ 0x140332FA0 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1403340CC (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x140003774 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140003928 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

unsigned int *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned int *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1168) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1168), 5u);
  }
  result = (unsigned int *)*(unsigned int *)(a1 + 1184);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1168) = v1;
  return result;
}
