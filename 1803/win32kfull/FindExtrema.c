/*
 * XREFs of FindExtrema @ 0x1C02B5F88
 * Callers:
 *     fsc_MeasureGlyph @ 0x1C02B6BE8 (fsc_MeasureGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindExtrema(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // r8d
  int v5; // r10d
  int v6; // r11d
  int v7; // ebx
  int v8; // esi
  __int16 *v9; // rdi
  __int64 v10; // r12
  __int16 v11; // bp
  __int16 v12; // r9
  char *v13; // r13
  char *v14; // r15
  signed __int64 v15; // r15
  __int64 v16; // r9
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // r10d
  int v22; // r9d
  int v23; // ecx
  int v24; // r8d
  __int64 result; // rax
  __int64 v26; // [rsp+30h] [rbp+8h]

  LOWORD(v2) = *(_WORD *)a1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 1;
  if ( *(_WORD *)a1 )
  {
    v9 = *(__int16 **)(a1 + 16);
    v2 = (unsigned __int16)v2;
    v10 = *(_QWORD *)(a1 + 8) - (_QWORD)v9;
    v26 = (unsigned __int16)v2;
    do
    {
      v11 = *(__int16 *)((char *)v9 + v10);
      v12 = *v9;
      if ( v11 != *v9 )
      {
        v13 = (char *)(*(_QWORD *)(a1 + 24) + 4LL * v11);
        v14 = (char *)(*(_QWORD *)(a1 + 32) + 4LL * v11);
        if ( v8 )
        {
          v4 = *(_DWORD *)v13;
          v5 = *(_DWORD *)v13;
          v6 = *(_DWORD *)v14;
          v7 = *(_DWORD *)v14;
        }
        v8 = 0;
        if ( v11 > v12 )
        {
          v2 = v26;
        }
        else
        {
          v15 = v14 - v13;
          v16 = (unsigned __int16)(v12 - v11 + 1);
          do
          {
            v17 = *(_DWORD *)v13;
            v18 = *(_DWORD *)v13;
            if ( *(_DWORD *)v13 <= v4 )
              v18 = v4;
            v4 = v18;
            if ( v17 >= v5 )
              v17 = v5;
            v5 = v17;
            v19 = *(_DWORD *)&v13[v15];
            v13 += 4;
            v20 = v19;
            if ( v19 <= v6 )
              v20 = v6;
            v6 = v20;
            if ( v19 >= v7 )
              v19 = v7;
            v7 = v19;
            --v16;
          }
          while ( v16 );
          v2 = v26;
        }
      }
      ++v9;
      v26 = --v2;
    }
    while ( v2 );
  }
  *(_DWORD *)(a2 + 20) = v5;
  *(_DWORD *)(a2 + 24) = v4;
  v21 = (v5 + 31) >> 6;
  v22 = (v7 + 31) >> 6;
  v23 = (v4 + 32) >> 6;
  v24 = (v6 + 32) >> 6;
  *(_DWORD *)(a2 + 28) = v7;
  *(_DWORD *)(a2 + 32) = v6;
  if ( (__int16)v21 != v21
    || (__int16)v22 != v22
    || (__int16)v23 != v23
    || (__int16)v24 != v24
    || v23 == 0x7FFF
    || v24 == 0x7FFF )
  {
    return 4609LL;
  }
  *(_DWORD *)(a2 + 16) = 0;
  if ( !v8 )
  {
    if ( v21 == v23 )
    {
      LOWORD(v23) = v23 + 1;
      *(_DWORD *)(a2 + 16) = 1;
    }
    if ( v22 == v24 )
    {
      LOWORD(v24) = v24 + 1;
      *(_DWORD *)(a2 + 16) = 1;
    }
  }
  *(_WORD *)(a2 + 8) = v21;
  result = 0LL;
  *(_WORD *)(a2 + 12) = v23;
  *(_WORD *)(a2 + 10) = v22;
  *(_WORD *)(a2 + 6) = v24;
  return result;
}
