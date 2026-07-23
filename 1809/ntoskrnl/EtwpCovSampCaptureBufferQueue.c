/*
 * XREFs of EtwpCovSampCaptureBufferQueue @ 0x140316650
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1403170B4 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408C4E08 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140316F40 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140317040 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x14031771C (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140317758 (EtwpCovSampSampleBufferReserve.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferQueue(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_WORD *)(a2 + 62);
  v4 = a1;
  if ( !v2 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    return EtwpCovSampCaptureReleaseToLookaside(a1, v5, a2);
  }
  v7 = 8 * v2;
  v8 = EtwpCovSampSampleBufferReserve(a1, (unsigned __int16)(8 * v2), &v9);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 4) ^= (*(_DWORD *)(v8 + 4) ^ (*(unsigned __int16 *)(a2 + 62) << 16)) & 0x7FFF0000;
    *(_DWORD *)(v8 + 4) = (*(_DWORD *)(a2 + 56) << 29) ^ (*(_DWORD *)(v8 + 4) ^ (*(_DWORD *)(a2 + 56) << 29)) & 0x7FFFFFFF;
    memmove((void *)(v8 + 8), (const void *)(a2 + 64), v7);
    EtwpCovSampSampleBufferDecRef(v4, v9);
    v5 = *(_QWORD *)(a2 + 48);
    a1 = v4;
    return EtwpCovSampCaptureReleaseToLookaside(a1, v5, a2);
  }
  return EtwpCovSampCaptureQueueBuffer(v4, a2);
}
