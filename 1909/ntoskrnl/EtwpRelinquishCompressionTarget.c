/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x140333A6C
 * Callers:
 *     EtwpFreeCompression @ 0x1400FD480 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1403327E0 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1403330A0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140333460 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400039AC (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
