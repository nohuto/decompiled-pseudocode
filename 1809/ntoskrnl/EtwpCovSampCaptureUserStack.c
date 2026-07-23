/*
 * XREFs of EtwpCovSampCaptureUserStack @ 0x1408C5720
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x1408C56B8 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 *     EtwpCovSampCaptureBufferOptimizeIP @ 0x1403165E0 (EtwpCovSampCaptureBufferOptimizeIP.c)
 */

__int64 __fastcall EtwpCovSampCaptureUserStack(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // ax
  ULONG v5; // eax

  v1 = 0;
  if ( KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[9] )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v3 = *(_WORD *)(a1 + 62);
    v4 = *(_WORD *)(a1 + 60);
    if ( v4 < v3 )
    {
      return (unsigned int)-1073741595;
    }
    else
    {
      v5 = RtlWalkFrameChain((PVOID *)(a1 + 8 * (v3 + 8LL)), v4 - v3, 1u);
      if ( v5 )
      {
        *(_WORD *)(a1 + 62) += v5;
        *(_DWORD *)(a1 + 56) |= 2u;
        EtwpCovSampCaptureBufferOptimizeIP(a1);
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
  }
  return v1;
}
