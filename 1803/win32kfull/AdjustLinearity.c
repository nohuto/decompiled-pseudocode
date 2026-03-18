/*
 * XREFs of AdjustLinearity @ 0x1C019D5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, signed int *a2, signed int *a3, _DWORD *a4)
{
  int v7; // r15d
  unsigned int v8; // r9d
  int v9; // ecx
  int v10; // r8d
  int v11; // r11d
  signed int v12; // r10d
  signed int v13; // r11d
  int v14; // r9d
  int v15; // ebp
  int v16; // esi
  int v17; // r13d
  int v18; // r8d
  int v19; // edx
  int v20; // edi
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r9
  unsigned __int16 v24; // r10
  unsigned __int16 v25; // di
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int16 v28; // r8
  unsigned __int16 v29; // ax
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // dx
  unsigned __int16 v32; // bx
  unsigned __int16 v33; // di
  int v34; // r9d
  int v35; // r10d
  int v36; // r9d
  int v37; // r8d
  unsigned __int16 v38; // [rsp+0h] [rbp-78h]
  unsigned __int16 v39; // [rsp+6h] [rbp-72h]
  unsigned __int16 v40; // [rsp+8h] [rbp-70h]
  unsigned __int16 v41; // [rsp+Ch] [rbp-6Ch]
  signed int v42; // [rsp+18h] [rbp-60h]
  __int16 v43; // [rsp+1Ch] [rbp-5Ch]
  signed int v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  __int64 v46; // [rsp+30h] [rbp-48h]
  __int64 v47; // [rsp+38h] [rbp-40h]

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
          v44 = v8;
          if ( v8 <= 0x8000 )
          {
            if ( a4 )
            {
              v9 = a4[2];
              if ( *a4 == v9 + 1 )
                return;
              v10 = a4[3];
              v11 = a4[1];
              if ( v11 == v10 + 1 )
                return;
              v12 = v7 * (*a2 - *a4) / (unsigned int)(v9 - *a4 + 1);
              v13 = v8 * (*a3 - v11) / (v10 - v11 + 1);
            }
            else
            {
              v12 = *a2;
              v13 = *a3;
            }
            v14 = *(unsigned __int16 *)(a1 + 10);
            v15 = 0;
            v16 = *(unsigned __int16 *)(a1 + 12);
            v17 = *(unsigned __int16 *)(a1 + 8);
            v42 = v12;
            v18 = v17 + v14 * v16;
            v19 = v17 + v16 * (v14 + 1);
            do
            {
              if ( v12 >= *(unsigned __int16 *)(a1 + 8LL * v18 + 20)
                || v12 >= *(unsigned __int16 *)(a1 + 8LL * v19 + 20) )
              {
                v20 = *(unsigned __int16 *)(a1 + 8LL * (v18 + 1) + 20) <= v12
                   && *(unsigned __int16 *)(a1 + 8LL * (v19 + 1) + 20) <= v12
                   && v17 + 2 < v16;
              }
              else
              {
                v20 = -(v17 != 0);
              }
              if ( v13 >= *(unsigned __int16 *)(a1 + 8LL * v18 + 22)
                || v13 >= *(unsigned __int16 *)(a1 + 8LL * (v18 + 1) + 22) )
              {
                v21 = *(unsigned __int16 *)(a1 + 8LL * v19 + 22) <= v13
                   && *(unsigned __int16 *)(a1 + 8LL * (v19 + 1) + 22) <= v13
                   && v14 + 2 < *(unsigned __int16 *)(a1 + 14);
              }
              else
              {
                v21 = -(v14 != 0);
              }
              if ( !v20 && !v21 )
                break;
              v14 += v21;
              v17 += v20;
              ++v15;
              v18 = v17 + v16 * v14;
              v19 = v17 + v16 * (v14 + 1);
            }
            while ( v15 <= v16 + *(unsigned __int16 *)(a1 + 14) );
            v22 = v18;
            v43 = v14;
            v23 = v19;
            v47 = v19;
            v24 = *(_WORD *)(a1 + 8LL * v18 + 22);
            v45 = v18;
            v25 = *(_WORD *)(a1 + 8LL * v19 + 22);
            if ( v25 != v24 )
            {
              v26 = v19 + 1;
              v27 = v18 + 1;
              v46 = v27;
              v40 = *(_WORD *)(a1 + 8 * v26 + 22);
              v39 = *(_WORD *)(a1 + 8 * v27 + 22);
              if ( v40 != v39 )
              {
                v28 = *(_WORD *)(a1 + 8 * v27 + 20);
                v29 = *(_WORD *)(a1 + 8 * v22 + 20);
                if ( v28 != v29 )
                {
                  v30 = *(_WORD *)(a1 + 8 * v26 + 20);
                  v31 = *(_WORD *)(a1 + 8 * v23 + 20);
                  if ( v30 != v31 )
                  {
                    *(_WORD *)(a1 + 8) = v17;
                    v38 = v29 + (v13 - v24) * (v31 - v29) / (v25 - v24);
                    v41 = v28 + (v13 - v39) * (v30 - v28) / (v40 - v39);
                    *(_WORD *)(a1 + 10) = v43;
                    v32 = v24 + (v39 - v24) * (v42 - v29) / (v28 - v29);
                    v33 = v25 + (v40 - v25) * (v42 - v31) / (v30 - v31);
                    if ( v41 != v38 && v33 != v32 )
                    {
                      v34 = *(unsigned __int16 *)(a1 + 8 * v45 + 16);
                      v35 = v34 + (v42 - v38) * (*(unsigned __int16 *)(a1 + 8 * v46 + 16) - v34) / (v41 - v38);
                      v36 = *(unsigned __int16 *)(a1 + 8 * v45 + 18);
                      v37 = v36 + (v13 - v32) * (*(unsigned __int16 *)(a1 + 8 * v47 + 18) - v36) / (v33 - v32);
                      if ( v35 >= 0 )
                      {
                        if ( v7 <= v35 )
                          v35 = v7 - 1;
                      }
                      else
                      {
                        v35 = 0;
                      }
                      if ( v37 >= 0 )
                      {
                        if ( v44 <= v37 )
                          v37 = v44 - 1;
                      }
                      else
                      {
                        v37 = 0;
                      }
                      if ( v7 )
                      {
                        if ( v44 )
                        {
                          *a2 = *a4 + v35 * (a4[2] - *a4 + 1) / (unsigned int)v7;
                          *a3 = a4[1] + (unsigned int)(v37 * (a4[3] - a4[1] + 1)) / *(_DWORD *)(a1 + 4);
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
