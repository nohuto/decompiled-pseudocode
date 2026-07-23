/*
 * XREFs of EtwpCovSampStrideSamplerInitialize @ 0x1408C8D30
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall EtwpCovSampStrideSamplerInitialize(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  ULONG v6; // eax
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 result; // rax

  v4 = a3;
  memset(a1, 0, 0x28uLL);
  a1[9] = ExGenRandom(0);
  v6 = 10 * a2 / KeMaximumIncrement;
  a1[2] = v6;
  v7 = a1[2] == 0;
  a1[1] = MEMORY[0xFFFFF78000000320] + ~v6;
  if ( v7 )
  {
    if ( a2 )
    {
      v8 = v4 * (KeMaximumIncrement / 0xA / a2);
      LODWORD(v4) = 0x10000000;
      if ( v8 < 0x10000000 )
        LODWORD(v4) = v8;
    }
  }
  result = (unsigned int)(4 * v4);
  *a1 = v4;
  a1[3] = result;
  return result;
}
