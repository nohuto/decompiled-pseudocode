/*
 * XREFs of EtwpCovSampCaptureBufferOptimizeIP @ 0x1403165E0
 * Callers:
 *     EtwpCovSampCaptureKernelStack @ 0x140316C58 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x1408C5720 (EtwpCovSampCaptureUserStack.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferOptimizeIP(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // dx
  __int64 v4; // r8
  unsigned int v5; // ecx

  result = *(unsigned int *)(a1 + 56);
  if ( (result & 8) != 0 )
  {
    v3 = *(_WORD *)(a1 + 62);
    v4 = *(_QWORD *)(a1 + 64);
    v5 = 1;
    if ( v3 > 1u )
    {
      while ( v4 != *(_QWORD *)(a1 + 8LL * v5 + 64) )
      {
        ++v5;
        result = v3;
        if ( v5 >= v3 )
          return result;
      }
      memmove((void *)(a1 + 64), (const void *)(a1 + 72), 8LL * v3 - 8);
      result = 0xFFFFLL;
      --*(_WORD *)(a1 + 62);
      *(_DWORD *)(a1 + 56) &= ~8u;
    }
  }
  return result;
}
