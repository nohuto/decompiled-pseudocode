/*
 * XREFs of EtwpCoverageSamplerContextSwap @ 0x140317A8C
 * Callers:
 *     EtwTraceContextSwap @ 0x14017CA40 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x1403170B4 (EtwpCovSampCaptureSample.c)
 */

void __fastcall EtwpCoverageSamplerContextSwap(_KTHREAD *a1)
{
  __int64 v1; // r9
  unsigned int v2; // eax
  unsigned int v3; // ecx
  __int64 v4; // r10
  int v5; // r11d
  int v6; // ebx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // ecx

  if ( a1 && a1 != *(_KTHREAD **)qword_14040AE48 && a1 != KeGetCurrentPrcb()->IdleThread )
  {
    v1 = (*(_QWORD *)(qword_14040AE48 + 8) >> 4) & 0x1FFLL;
    v2 = ((unsigned int)*(_QWORD *)(qword_14040AE48 + 8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v3, v2);
    v4 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2) + 8LL * (v2 ^ (1 << v3)) + 8);
    if ( !*(_DWORD *)(v4 + 8 * v1 + 184) )
    {
LABEL_14:
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8 * v1 + 324));
      EtwpCovSampCaptureSample(0LL, 0x50000004u);
      return;
    }
    v5 = MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v4 + 8 * v1 + 188)) > *(_DWORD *)(v4 + 8 * v1 + 192) )
    {
      v6 = *(_DWORD *)(v4 + 8 * v1 + 184);
      *(_DWORD *)(v4 + 8 * v1 + 204) += v6;
      v7 = *(_DWORD *)(v4 + 8 * v1 + 204);
      v8 = *(_DWORD *)(v4 + 8 * v1 + 212);
      if ( v7 > *(_DWORD *)(v4 + 8 * v1 + 196) )
        v7 = *(_DWORD *)(v4 + 8 * v1 + 196);
      *(_DWORD *)(v4 + 8 * v1 + 188) = v5;
      v9 = *(_DWORD *)(v4 + 8 * v1 + 200) + v8;
      *(_DWORD *)(v4 + 8 * v1 + 200) = 0;
      v10 = v9 >> 1;
      *(_DWORD *)(v4 + 8 * v1 + 204) = v7;
      *(_DWORD *)(v4 + 8 * v1 + 212) = v10;
      if ( v10 >= 2 * v6 )
      {
        v11 = v10 / (v6 + 1);
        v12 = v5 ^ *(_DWORD *)(v4 + 8 * v1 + 220);
        *(_DWORD *)(v4 + 8 * v1 + 216) = v11;
        *(_DWORD *)(v4 + 8 * v1 + 220) = 16777619 * v12;
        *(_DWORD *)(v4 + 8 * v1 + 208) = (16777619 * v12) & (2 * v11);
      }
      else
      {
        *(_DWORD *)(v4 + 8 * v1 + 216) = 1;
        *(_DWORD *)(v4 + 8 * v1 + 208) = 1;
      }
    }
    ++*(_DWORD *)(v4 + 8 * v1 + 200);
    v13 = *(_DWORD *)(v4 + 8 * v1 + 204);
    if ( v13 > 0 && (int)--*(_DWORD *)(v4 + 8 * v1 + 208) <= 0 )
    {
      *(_DWORD *)(v4 + 8 * v1 + 204) = v13 - 1;
      *(_DWORD *)(v4 + 8 * v1 + 208) = *(_DWORD *)(v4 + 8 * v1 + 216);
      goto LABEL_14;
    }
  }
}
