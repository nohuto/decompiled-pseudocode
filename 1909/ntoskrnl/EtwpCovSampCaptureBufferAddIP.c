/*
 * XREFs of EtwpCovSampCaptureBufferAddIP @ 0x14033478C
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140335354 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140900F9C (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCovSampCaptureBufferAddIP(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  int v3; // eax

  if ( a2 )
  {
    *(_QWORD *)(a1 + 64) = a2;
    *(_WORD *)(a1 + 62) = 1;
    v2 = *(_DWORD *)(a1 + 56);
    if ( a2 < 0xFFFF800000000000uLL )
      v3 = v2 | 0xA;
    else
      v3 = v2 | 9;
    *(_DWORD *)(a1 + 56) = v3;
  }
}
