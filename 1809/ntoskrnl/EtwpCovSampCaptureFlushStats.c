/*
 * XREFs of EtwpCovSampCaptureFlushStats @ 0x1408C5558
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x1408C9124 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __fastcall EtwpCovSampCaptureFlushStats(__int64 a1, _DWORD *a2)
{
  ULONG result; // eax
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v5 = 0LL;
    v6 = result;
    do
    {
      v7 = (*(_DWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v8, v7);
      v9 = v7 ^ (1 << v8);
      v10 = *(_QWORD *)(*(_QWORD *)(v5 + ExSaPageArrays) + 8LL * (v8 - 2));
      v11 = 0LL;
      v12 = a2;
      v13 = *(_QWORD *)(v10 + 8 * v9 + 8) + 8LL * ((*(_DWORD *)(a1 + 8) >> 4) & 0x1FF);
      v14 = 8LL;
      do
      {
        result = _InterlockedExchange((volatile __int32 *)(v11 + v13 + 304), 0);
        *v12 += result;
        v11 += 4LL;
        ++v12;
        --v14;
      }
      while ( v14 );
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
