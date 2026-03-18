/*
 * XREFs of scl_ScaleDownFromSubPixelOverscale @ 0x1C02B5490
 * Callers:
 *     fsg_GetContourData @ 0x1C02BD7DC (fsg_GetContourData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ScaleDownFromSubPixelOverscale(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r9

  result = *(_QWORD *)(a1 + 64);
  v3 = 0;
  if ( a2 )
  {
    if ( *(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) != 0xFFF7 )
    {
      v4 = 0LL;
      do
      {
        ++v3;
        *(_DWORD *)(v4 + *(_QWORD *)(a1 + 16)) = (*(_DWORD *)(v4 + *(_QWORD *)a1) + 3) / 6;
        *(_DWORD *)(v4 + *(_QWORD *)(a1 + 24)) = (*(_DWORD *)(v4 + *(_QWORD *)(a1 + 8)) + 2) / 5;
        v4 += 4LL;
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 9);
      }
      while ( v3 < (int)result );
    }
  }
  else if ( *(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) != 0xFFF7 )
  {
    v5 = 0LL;
    do
    {
      ++v3;
      *(_DWORD *)(v5 + *(_QWORD *)(a1 + 16)) = (*(_DWORD *)(v5 + *(_QWORD *)a1) + 3) / 6;
      v5 += 4LL;
      result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 9);
    }
    while ( v3 < (int)result );
  }
  return result;
}
