/*
 * XREFs of EtwpCovSampCaptureFlushStats @ 0x140900E3C
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x140904C64 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140004950 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __fastcall EtwpCovSampCaptureFlushStats(__int64 a1, _DWORD *a2)
{
  ULONG result; // eax
  __int64 v5; // r10
  __int64 v6; // r11
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  _DWORD *v14; // rcx

  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v5 = 0LL;
    v6 = result;
    do
    {
      v7 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v8, v7);
      v9 = v7 ^ (1 << v8);
      v10 = 0LL;
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + ExSaPageArrays) + 8LL * (v8 - 2)) + 8 * v9 + 8);
      v12 = 8LL;
      v13 = v11 + 8 * ((*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL);
      v14 = a2;
      do
      {
        result = _InterlockedExchange((volatile __int32 *)(v10 + v13 + 304), 0);
        *v14 += result;
        v10 += 4LL;
        ++v14;
        --v12;
      }
      while ( v12 );
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
