/*
 * XREFs of AdjustLinearity @ 0x1C01BE840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, signed int *a2, signed int *a3, int *a4)
{
  int v7; // r15d
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // r10d
  int v12; // r9d
  signed int v13; // edi
  int v14; // r10d
  int v15; // ebp
  int v16; // r13d
  int v17; // r11d
  int v18; // r8d
  int v19; // r9d
  int v20; // ebx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // dx
  unsigned __int16 v25; // r10
  unsigned __int16 v26; // r8
  unsigned __int16 v27; // r9
  unsigned __int16 v28; // r11
  unsigned __int16 v29; // r8
  unsigned __int16 v30; // di
  int v31; // r9d
  int v32; // r10d
  int v33; // r9d
  int v34; // r8d
  signed int v35; // [rsp+0h] [rbp-78h]
  unsigned __int16 v36; // [rsp+4h] [rbp-74h]
  unsigned __int16 v37; // [rsp+6h] [rbp-72h]
  unsigned __int16 v38; // [rsp+8h] [rbp-70h]
  unsigned __int16 v39; // [rsp+Ch] [rbp-6Ch]
  signed int v40; // [rsp+14h] [rbp-64h]
  __int16 v41; // [rsp+18h] [rbp-60h]
  signed int v42; // [rsp+1Ch] [rbp-5Ch]
  unsigned __int16 v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  __int64 v45; // [rsp+30h] [rbp-48h]

  if ( a2 )
  {
    if ( a3 )
    {
      if ( a1 )
      {
        v7 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 <= 0x8000u )
        {
          v8 = *(_DWORD *)(a1 + 4);
          v42 = v8;
          if ( v8 <= 0x8000 )
          {
            if ( a4 )
            {
              v9 = *a4;
              v10 = a4[2];
              if ( *a4 == v10 )
                return;
              v11 = a4[1];
              v12 = a4[3];
              if ( v11 == v12 )
                return;
              v35 = v7 * (*a2 - v9) / (unsigned int)(v10 - v9);
              v13 = v8 * (*a3 - v11) / (v12 - v11);
            }
            else
            {
              v13 = *a3;
              v35 = *a2;
            }
            v14 = *(unsigned __int16 *)(a1 + 8);
            v15 = 0;
            v16 = *(unsigned __int16 *)(a1 + 10);
            v17 = *(unsigned __int16 *)(a1 + 12);
            v40 = v13;
            v18 = v14 + v16 * v17;
            v19 = v14 + v17 * (v16 + 1);
            do
            {
              if ( v35 >= *(unsigned __int16 *)(a1 + 8LL * v18 + 20)
                || v35 >= *(unsigned __int16 *)(a1 + 8LL * v19 + 20) )
              {
                v20 = *(unsigned __int16 *)(a1 + 8LL * v18 + 28) <= v35
                   && *(unsigned __int16 *)(a1 + 8LL * v19 + 28) <= v35
                   && v14 + 2 < v17;
              }
              else
              {
                v20 = -(v14 != 0);
              }
              if ( v13 >= *(unsigned __int16 *)(a1 + 8LL * v18 + 22)
                || v13 >= *(unsigned __int16 *)(a1 + 8LL * v18 + 30) )
              {
                v21 = *(unsigned __int16 *)(a1 + 8LL * v19 + 22) <= v13
                   && *(unsigned __int16 *)(a1 + 8LL * v19 + 30) <= v13
                   && v16 + 2 < *(unsigned __int16 *)(a1 + 14);
              }
              else
              {
                v21 = -(v16 != 0);
              }
              if ( !v20 && !v21 )
                break;
              v16 += v21;
              v14 += v20;
              ++v15;
              v18 = v14 + v16 * v17;
              v19 = v14 + v17 * (v16 + 1);
            }
            while ( v15 <= v17 + *(unsigned __int16 *)(a1 + 14) );
            v22 = v19;
            v23 = v18;
            v41 = v14;
            v45 = v19;
            v24 = *(_WORD *)(a1 + 8LL * v19 + 22);
            v25 = *(_WORD *)(a1 + 8LL * v18 + 22);
            v44 = v18;
            if ( v24 != v25 )
            {
              v38 = *(_WORD *)(a1 + 8LL * v19 + 30);
              v37 = *(_WORD *)(a1 + 8LL * v18 + 30);
              if ( v38 != v37 )
              {
                v26 = *(_WORD *)(a1 + 8LL * v18 + 28);
                v27 = *(_WORD *)(a1 + 8 * v23 + 20);
                if ( v26 != v27 )
                {
                  v28 = *(_WORD *)(a1 + 8 * v22 + 20);
                  v36 = *(_WORD *)(a1 + 8 * v22 + 28);
                  if ( v36 != v28 )
                  {
                    *(_WORD *)(a1 + 10) = v16;
                    v43 = v27 + (v28 - v27) * (v13 - v25) / (v24 - v25);
                    v39 = v26 + (v13 - v37) * (v36 - v26) / (v38 - v37);
                    *(_WORD *)(a1 + 8) = v41;
                    v29 = v25 + (v37 - v25) * (v35 - v27) / (v26 - v27);
                    v30 = v24 + (v38 - v24) * (v35 - v28) / (v36 - v28);
                    if ( v39 != v43 && v30 != v29 )
                    {
                      v31 = *(unsigned __int16 *)(a1 + 8 * v44 + 16);
                      v32 = v31 + (v35 - v43) * (*(unsigned __int16 *)(a1 + 8 * v44 + 24) - v31) / (v39 - v43);
                      v33 = *(unsigned __int16 *)(a1 + 8 * v44 + 18);
                      v34 = v33 + (v40 - v29) * (*(unsigned __int16 *)(a1 + 8 * v45 + 18) - v33) / (v30 - v29);
                      if ( v32 >= 0 )
                      {
                        if ( v7 <= v32 )
                          v32 = v7 - 1;
                      }
                      else
                      {
                        v32 = 0;
                      }
                      if ( v34 >= 0 )
                      {
                        if ( v42 <= v34 )
                          v34 = v42 - 1;
                      }
                      else
                      {
                        v34 = 0;
                      }
                      if ( v7 )
                      {
                        if ( v42 )
                        {
                          *a2 = *a4 + v32 * (a4[2] - *a4) / (unsigned int)v7;
                          *a3 = a4[1] + (unsigned int)(v34 * (a4[3] - a4[1])) / *(_DWORD *)(a1 + 4);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
