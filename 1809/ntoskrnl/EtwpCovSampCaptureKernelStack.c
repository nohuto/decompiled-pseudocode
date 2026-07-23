/*
 * XREFs of EtwpCovSampCaptureKernelStack @ 0x140316C58
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1403170B4 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 *     EtwpCovSampCaptureBufferOptimizeIP @ 0x1403165E0 (EtwpCovSampCaptureBufferOptimizeIP.c)
 */

__int64 __fastcall EtwpCovSampCaptureKernelStack(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  unsigned __int16 v6; // cx
  char v7; // al
  unsigned __int16 v8; // dx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  int v11; // eax
  ULONG v12; // eax
  char *v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( !KeQueryCurrentStackInformation(&v15, &v14, &v16) )
    return (unsigned int)-1073741637;
  if ( v15 <= 9 && (v5 = 929, _bittest(&v5, v15)) )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v6 = *(_WORD *)(a1 + 62);
    v7 = a2;
    v8 = *(_WORD *)(a1 + 60);
    v9 = 0;
    v10 = a2 >> 28;
    v11 = v7 & 2;
    if ( !v11 )
      v9 = v10;
    if ( v8 < v6 )
    {
      return (unsigned int)-1073741595;
    }
    else
    {
      v12 = RtlWalkFrameChain((PVOID *)(a1 + 8 * (v6 + 8LL)), v9 + v8 - v6, (v9 << 8) | (v11 != 0 ? 2 : 0));
      if ( v12 > v9 )
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        *(_WORD *)(a1 + 62) += v12 - v9;
        EtwpCovSampCaptureBufferOptimizeIP(a1);
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
  }
  return v4;
}
