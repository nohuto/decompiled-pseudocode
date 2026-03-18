/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x14033400C
 * Callers:
 *     EtwpFreeCompression @ 0x140108D64 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140332D80 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140333640 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140333A00 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140003928 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1168) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1168), 5u);
    *(_QWORD *)(a1 + 1168) = 0LL;
  }
}
