/*
 * XREFs of EtwpCovSampSampleBufferDecRef @ 0x14031742C
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140316360 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140316850 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140317468 (EtwpCovSampSampleBufferReserve.c)
 * Callees:
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316C50 (EtwpCovSampCaptureQueueBuffer.c)
 */

char __fastcall EtwpCovSampSampleBufferDecRef(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 48), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    goto LABEL_5;
  }
  if ( !v4 )
LABEL_5:
    LOBYTE(v4) = EtwpCovSampCaptureQueueBuffer(a1, (struct _SLIST_ENTRY *)a2);
  return v4;
}
