/*
 * XREFs of AdjustLinearity @ 0x1C01D2390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, INT *a2, INT *a3, int *a4)
{
  int v7; // r9d
  int v8; // r8d
  INT v9; // ebx
  INT v10; // r11d
  int v11; // r13d
  int v12; // ebp
  int v13; // r10d
  int v14; // r12d
  int v15; // r8d
  int v16; // r9d
  int v17; // edi
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // r10
  unsigned __int16 v23; // r8
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // di
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // bx
  unsigned __int16 v28; // di
  int v29; // r9d
  INT v30; // r10d
  int v31; // r9d
  INT v32; // r8d
  INT v33; // ebx
  INT v34; // eax
  unsigned __int16 v35; // [rsp+20h] [rbp-68h]
  unsigned __int16 v36; // [rsp+22h] [rbp-66h]
  unsigned __int16 v37; // [rsp+24h] [rbp-64h]
  INT v38; // [rsp+30h] [rbp-58h]
  unsigned __int16 v39; // [rsp+34h] [rbp-54h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+40h] [rbp-48h]

  if ( a2 && a3 && a1 && *(_DWORD *)a1 <= 0x8000u && *(_DWORD *)(a1 + 4) <= 0x8000u )
  {
    if ( a4 )
    {
      v7 = *a4;
      v8 = a4[2];
      if ( v7 == v8 || a4[1] == a4[3] )
        return;
      v9 = EngMulDiv(*a2 - v7, *(_DWORD *)a1, v8 - v7);
      v38 = v9;
      v10 = EngMulDiv(*a3 - a4[1], *(_DWORD *)(a1 + 4), a4[3] - a4[1]);
    }
    else
    {
      v9 = *a2;
      v10 = *a3;
      v38 = *a2;
    }
    v11 = *(unsigned __int16 *)(a1 + 10);
    v12 = 0;
    v13 = *(unsigned __int16 *)(a1 + 12);
    v14 = *(unsigned __int16 *)(a1 + 8);
    v15 = v14 + v11 * v13;
    v16 = v14 + v13 * (v11 + 1);
    do
    {
      if ( v9 >= *(unsigned __int16 *)(a1 + 8LL * v15 + 20) || v9 >= *(unsigned __int16 *)(a1 + 8LL * v16 + 20) )
        v17 = *(unsigned __int16 *)(a1 + 8LL * v15 + 28) <= v9
           && *(unsigned __int16 *)(a1 + 8LL * v16 + 28) <= v9
           && v14 + 2 < v13;
      else
        v17 = -(v14 != 0);
      if ( v10 >= *(unsigned __int16 *)(a1 + 8LL * v15 + 22) || v10 >= *(unsigned __int16 *)(a1 + 8LL * v15 + 30) )
        v18 = *(unsigned __int16 *)(a1 + 8LL * v16 + 22) <= v10
           && *(unsigned __int16 *)(a1 + 8LL * v16 + 30) <= v10
           && v11 + 2 < *(unsigned __int16 *)(a1 + 14);
      else
        v18 = -(v11 != 0);
      if ( !v17 && !v18 )
        break;
      v11 += v18;
      v14 += v17;
      ++v12;
      v15 = v14 + v11 * v13;
      v16 = v14 + v13 * (v11 + 1);
    }
    while ( v12 <= v13 + *(unsigned __int16 *)(a1 + 14) );
    v19 = v16;
    v20 = v15;
    v41 = v16;
    v40 = v15;
    v21 = *(_WORD *)(a1 + 8LL * v16 + 22);
    v22 = *(_WORD *)(a1 + 8LL * v15 + 22);
    if ( v21 != v22 )
    {
      v36 = *(_WORD *)(a1 + 8LL * v16 + 30);
      v35 = *(_WORD *)(a1 + 8LL * v15 + 30);
      if ( v36 != v35 )
      {
        v23 = *(_WORD *)(a1 + 8LL * v15 + 28);
        v24 = *(_WORD *)(a1 + 8 * v20 + 20);
        if ( v23 != v24 )
        {
          v25 = *(_WORD *)(a1 + 8 * v19 + 28);
          v26 = *(_WORD *)(a1 + 8 * v19 + 20);
          if ( v25 != v26 )
          {
            *(_WORD *)(a1 + 8) = v14;
            *(_WORD *)(a1 + 10) = v11;
            v39 = v24 + (v26 - v24) * (v10 - v22) / (v21 - v22);
            v37 = v23 + (v10 - v35) * (v25 - v23) / (v36 - v35);
            v27 = v22 + (v35 - v22) * (v38 - v24) / (v23 - v24);
            v28 = v21 + (v36 - v21) * (v38 - v26) / (v25 - v26);
            if ( v37 != v39 && v28 != v27 )
            {
              v29 = *(unsigned __int16 *)(a1 + 8 * v40 + 16);
              v30 = v29 + (v38 - v39) * (*(unsigned __int16 *)(a1 + 8 * v40 + 24) - v29) / (v37 - v39);
              v31 = *(unsigned __int16 *)(a1 + 8 * v40 + 18);
              v32 = *(_DWORD *)a1;
              v33 = v31 + (v10 - v27) * (*(unsigned __int16 *)(a1 + 8 * v41 + 18) - v31) / (v28 - v27);
              if ( v30 >= 0 )
              {
                if ( v32 <= v30 )
                  v30 = v32 - 1;
              }
              else
              {
                v30 = 0;
              }
              if ( v33 >= 0 )
              {
                v34 = *(_DWORD *)(a1 + 4);
                if ( v34 <= v33 )
                  v33 = v34 - 1;
              }
              else
              {
                v33 = 0;
              }
              if ( v32 )
              {
                if ( *(_DWORD *)(a1 + 4) )
                {
                  *a2 = *a4 + EngMulDiv(v30, a4[2] - *a4, v32);
                  *a3 = a4[1] + EngMulDiv(v33, a4[3] - a4[1], *(_DWORD *)(a1 + 4));
                }
              }
            }
          }
        }
      }
    }
  }
}
