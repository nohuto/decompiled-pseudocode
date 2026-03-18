/*
 * XREFs of cjVtfdDeviceMetrics @ 0x1C0229EE8
 * Callers:
 *     vtfdQueryFontData @ 0x1C022A290 (vtfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjVtfdDeviceMetrics(__int64 a1, __int64 a2)
{
  int v4; // eax
  float v5; // xmm2_4
  float v6; // xmm3_4
  int v7; // r10d
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  __int64 v12; // r11
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  __int64 result; // rax

  *(_DWORD *)a2 = 0;
  v4 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a1 + 120) & 2) == 0 )
    v4 = 8;
  *(_DWORD *)a2 = v4;
  v5 = *(float *)(a1 + 28);
  v6 = *(float *)(a1 + 24);
  *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 44);
  *(_QWORD *)(a2 + 12) = *(_QWORD *)(a1 + 100);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 28) = -*(_DWORD *)(a1 + 36);
  v7 = *(_DWORD *)(a1 + 120) & 4;
  v8 = ((int)(float)((float)*(__int16 *)(*(_QWORD *)(a1 + 8) + 78LL) * *(float *)(a1 + 40)) + 8) >> 4;
  *(_DWORD *)(a2 + 64) = v8;
  v9 = 1;
  v10 = (*(_BYTE *)(a1 + 120) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 48LL) & 0x1000) != 0 ? v8 : 0;
  v11 = -1;
  *(_DWORD *)(a2 + 20) = v10;
  v12 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 36) = (((int)(float)((float)-*(__int16 *)(v12 + 102) * v5) >> 3) + 1) >> 1;
  v13 = *(__int16 *)(v12 + 106);
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 60) = 1;
  *(_DWORD *)(a2 + 52) = 1;
  *(_DWORD *)(a2 + 44) = (((int)(float)((float)-v13 * v5) >> 3) + 1) >> 1;
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 60) = 2;
    v9 = 2;
    *(_DWORD *)(a2 + 52) = 2;
    v11 = -2;
  }
  if ( v7 )
  {
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 32) = 0;
    if ( v5 < 0.0 )
    {
      *(_DWORD *)(a2 + 60) = v11;
      *(_DWORD *)(a2 + 52) = -v9;
    }
  }
  else
  {
    v14 = (((int)(float)((float)v9 * v5) >> 3) + 1) >> 1;
    *(_DWORD *)(a2 + 52) = v14;
    *(_DWORD *)(a2 + 60) = v14;
    v15 = (((int)(float)((float)v9 * v6) >> 3) + 1) >> 1;
    *(_DWORD *)(a2 + 48) = v15;
    *(_DWORD *)(a2 + 56) = v15;
    *(_DWORD *)(a2 + 32) = (((int)(float)((float)-*(__int16 *)(v12 + 102) * v6) >> 3) + 1) >> 1;
    *(_DWORD *)(a2 + 40) = (((int)(float)((float)-*(__int16 *)(v12 + 106) * v6) >> 3) + 1) >> 1;
  }
  *(_DWORD *)(a2 + 68) = 0;
  result = 124LL;
  *(_DWORD *)(a2 + 72) = 0;
  return result;
}
