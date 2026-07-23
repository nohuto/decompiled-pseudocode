/*
 * XREFs of AlpcpProbeAndCaptureMessageHeader @ 0x14061BE2C
 * Callers:
 *     NtAlpcOpenSenderProcess @ 0x140614400 (NtAlpcOpenSenderProcess.c)
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140616538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061B900 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderThread @ 0x1406B8720 (NtAlpcOpenSenderThread.c)
 *     AlpcpCopyRequestData @ 0x14084BB10 (AlpcpCopyRequestData.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpProbeAndCaptureMessageHeader(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __m128i v4; // xmm2
  __int16 v5; // ax
  __int64 v6; // [rsp+10h] [rbp-18h]

  result = 0x7FFFFFFF0000LL;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    v4 = *(__m128i *)result;
    v6 = *(_QWORD *)(result + 16);
    v5 = _mm_cvtsi128_si32(*(__m128i *)result);
    *(_WORD *)a2 = v5;
    *(_QWORD *)(a2 + 8) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
    *(_WORD *)(a2 + 2) = v5 + 40;
    result = (unsigned int)v6;
    *(_QWORD *)(a2 + 16) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
    *(_QWORD *)(a2 + 32) = HIDWORD(v6);
    *(_DWORD *)(a2 + 32) = HIDWORD(v6);
    *(_DWORD *)(a2 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
    *(_DWORD *)(a2 + 24) = v6;
  }
  else
  {
    if ( a1 < 0x7FFFFFFF0000LL )
      result = a1;
    *(_OWORD *)a2 = *(_OWORD *)result;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(result + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(result + 32);
  }
  return result;
}
