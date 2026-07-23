/*
 * XREFs of EtwpCovSampSampleBufferDecRef @ 0x140335F5C
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x140334E74 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140335380 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140335F98 (EtwpCovSampSampleBufferReserve.c)
 * Callees:
 *     EtwpCovSampCaptureQueueBuffer @ 0x14033577C (EtwpCovSampCaptureQueueBuffer.c)
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
    LOBYTE(v4) = EtwpCovSampCaptureQueueBuffer(a1, (_SLIST_ENTRY *)a2);
  return v4;
}
