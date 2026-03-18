/*
 * XREFs of EtwpRotateCompressionTarget @ 0x14031570C
 * Callers:
 *     EtwpCompressBuffer @ 0x140314998 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14031577C (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x140015278 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400153E0 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

volatile signed __int32 *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1136) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1136) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1136), 5u);
  }
  result = (volatile signed __int32 *)*(unsigned int *)(a1 + 1152);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1136) = v1;
  return result;
}
