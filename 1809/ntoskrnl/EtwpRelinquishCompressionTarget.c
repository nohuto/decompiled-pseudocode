/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1403159AC
 * Callers:
 *     EtwpFreeCompression @ 0x140132A08 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140314C20 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140315180 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140315398 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400153E0 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1136) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1136) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1136), 5u);
    *(_QWORD *)(a1 + 1136) = 0LL;
  }
}
