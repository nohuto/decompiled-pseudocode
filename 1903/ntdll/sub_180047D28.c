/*
 * XREFs of sub_180047D28 @ 0x180047D28
 * Callers:
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180047D28(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  int v7; // eax
  unsigned int v8; // edi
  char v9; // cl
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r9
  unsigned int v13; // esi
  unsigned int v14; // edx
  unsigned __int64 v15; // r14
  int v16; // ecx
  unsigned __int64 v17; // r14
  unsigned int v18; // ebp
  unsigned int v19; // r8d
  int v20; // r10d
  int v21; // esi
  unsigned int v22; // eax
  int v23; // edi
  unsigned int v24; // r8d
  int v25; // r10d
  unsigned int v27; // r8d
  unsigned int v28; // r10d
  unsigned int v29; // edx
  int v30; // eax
  int v31; // eax

  v7 = -1;
  v8 = 1 << *(_BYTE *)(a1 + 9);
  v9 = *(_BYTE *)(a1 + 9);
  v10 = (unsigned __int64)(unsigned int)*a3 >> v9;
  v11 = v10 << v9;
  v12 = a2 + 32 * v10;
  v13 = *a3 & (v8 - 1);
  v14 = 0;
  v15 = 32 * ((unsigned __int64)(v13 + *a4 - 1) >> v9);
  v16 = -1;
  v17 = v12 + v15;
  v18 = ((v13 + *a4 - 1) & (v8 - 1)) + 1;
  if ( v13 )
  {
    v27 = *(unsigned __int8 *)(v12 + 25);
    v28 = v8;
    if ( v12 == v17 )
      v28 = ((v13 + *a4 - 1) & (v8 - 1)) + 1;
    if ( a5 > 1 || v27 >= v28 )
    {
      if ( a5 != 2 || v27 <= v13 )
        goto LABEL_11;
      v29 = v13;
      v28 = *(unsigned __int8 *)(v12 + 25);
    }
    else
    {
      v29 = v28;
      v13 = *(unsigned __int8 *)(v12 + 25);
    }
    v14 = v29 - v27;
    v16 = v11 + v13;
    v7 = v11 + v28;
    if ( v14 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v14 + v27;
    goto LABEL_11;
  }
  while ( v12 < v17 )
  {
    v19 = *(unsigned __int8 *)(v12 + 25);
    v20 = 0;
    v21 = v16;
    if ( v19 < v8 && a5 <= 1 )
    {
      v16 = v11 + v19;
      v20 = v8 - v19;
      v22 = v8;
      if ( v21 != -1 )
        v16 = v21;
LABEL_7:
      v7 = v22 + v11;
      if ( v20 )
      {
        if ( a5 >= 1 )
          *(_BYTE *)(v12 + 25) = v20 + v19;
      }
      goto LABEL_10;
    }
    if ( a5 == 2 && *(_BYTE *)(v12 + 25) )
    {
      v30 = v11;
      v20 = -v19;
      if ( v16 != -1 )
        v30 = v16;
      v16 = v30;
      v22 = *(unsigned __int8 *)(v12 + 25);
      goto LABEL_7;
    }
LABEL_10:
    v14 += v20;
LABEL_11:
    v12 += 32LL;
    LODWORD(v11) = v8 + v11;
  }
  v23 = v16;
  if ( v12 == v17 )
  {
    v24 = *(unsigned __int8 *)(v12 + 25);
    v25 = 0;
    if ( a5 <= 1 && v24 < v18 )
    {
      v16 = v11 + v24;
      v25 = v18 - v24;
      if ( v23 != -1 )
        v16 = v23;
      goto LABEL_17;
    }
    if ( a5 == 2 && *(_BYTE *)(v12 + 25) )
    {
      v31 = v11;
      v25 = -v24;
      v18 = *(unsigned __int8 *)(v12 + 25);
      if ( v16 != -1 )
        v31 = v16;
      v16 = v31;
LABEL_17:
      v7 = v18 + v11;
      if ( v25 && a5 >= 1 )
        *(_BYTE *)(v12 + 25) = v25 + v24;
    }
    v14 += v25;
  }
  if ( v14 )
  {
    *a3 = v16;
    *a4 = v7 - v16;
  }
  return v14;
}
