/*
 * XREFs of RaspScaleCoordinates @ 0x14017C38C
 * Callers:
 *     RaspRasterize @ 0x14017AA98 (RaspRasterize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaspScaleCoordinates(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int16 v4; // r9
  unsigned __int16 v5; // dx
  unsigned __int64 v6; // r11
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v5 = *(_WORD *)(v2 + 120);
  if ( !v5 )
    return 3221225473LL;
  v6 = (*(unsigned int *)(a1 + 16) * (unsigned __int64)*(unsigned int *)(v2 + 96)) << 6;
  v7 = 72LL * v5;
  *(_DWORD *)(a2 + 2) = (__int64)(v6 * *(__int16 *)(a2 + 2)) / v7;
  *(_DWORD *)(a2 + 6) = (__int64)(v6 * *(__int16 *)(a2 + 6)) / v7;
  *(_DWORD *)(a2 + 10) = (__int64)(v6 * *(__int16 *)(a2 + 10)) / v7;
  *(_DWORD *)(a2 + 14) = (__int64)(v6 * *(__int16 *)(a2 + 14)) / v7;
  *(_DWORD *)(a2 + 18) = (__int64)(v6 * *(__int16 *)(a2 + 18)) / v7;
  while ( v4 < *(_WORD *)(a2 + 24) )
  {
    v8 = v4;
    *(_DWORD *)(*(_QWORD *)(a2 + 50) + 4LL * v4) = (__int64)(v6 * *(__int16 *)(*(_QWORD *)(a2 + 50) + 4LL * v4)) / v7;
    v9 = *(_QWORD *)(a2 + 58);
    v10 = (__int64)(v6 * *(__int16 *)(v9 + 4LL * v4++)) / v7;
    *(_DWORD *)(v9 + 4 * v8) = v10;
  }
  return 0LL;
}
