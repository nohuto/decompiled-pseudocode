/*
 * XREFs of ?vSolidFillRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C0094200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  char v6; // bl
  int v7; // r14d
  unsigned __int8 *v8; // rdi
  int v9; // ebp
  char v10; // r12
  LONG *p_bottom; // r15
  int v12; // esi
  int v13; // r11d
  unsigned __int8 *v14; // rax
  int v15; // edi
  int v16; // edx
  int v17; // esi
  __int64 v18; // r9
  int v19; // r10d
  int v20; // r8d
  unsigned __int8 *v21; // rcx
  unsigned __int64 *v22; // r10
  unsigned int v23; // esi
  int v24; // ebx
  unsigned __int64 v25; // r9
  unsigned int v26; // r11d
  unsigned __int64 *v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // edx
  int v31; // r10d
  unsigned int v32; // edx
  unsigned int *i; // rcx
  unsigned int *j; // rdx
  unsigned int v35; // edi
  int v36; // r10d
  int v37; // edx
  unsigned int *v38; // rcx
  int v39; // [rsp+0h] [rbp-48h]
  unsigned int v40; // [rsp+4h] [rbp-44h]
  unsigned __int8 *v41; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    v6 = a6;
    v7 = a4;
    v8 = a3;
    v9 = a2;
    v10 = 5 - a6;
    p_bottom = &a1->bottom;
    do
    {
      v12 = *(p_bottom - 1);
      v13 = *p_bottom - *(p_bottom - 2);
      v39 = v13;
      v14 = &v8[v7 * *(p_bottom - 2)];
      v15 = *(p_bottom - 3);
      v41 = v14;
      v16 = v12 - v15;
      v17 = v12 >> v10;
      v18 = (unsigned int)(v15 >> v10);
      v40 = v17;
      v19 = aulMsk[(v15 << v6) & 0x1F];
      v20 = aulMsk[((unsigned __int8)(v15 << v6) + (unsigned __int8)(v16 << v6)) & 0x1F];
      if ( (_DWORD)v18 == v17 )
      {
        v30 = ~v20 & v19;
        v31 = ~v30;
        v32 = a5 & v30;
        for ( i = (unsigned int *)&v14[4 * v18]; v13; --v13 )
        {
          *i = v32 | *i & v31;
          i = (unsigned int *)((char *)i + v7);
        }
      }
      else
      {
        if ( v19 != -1 )
        {
          v35 = a5 & v19;
          v36 = ~v19;
          v37 = *p_bottom - *(p_bottom - 2);
          v38 = (unsigned int *)&v14[4 * v18];
          if ( v13 )
          {
            do
            {
              *v38 = v35 | *v38 & v36;
              v38 = (unsigned int *)((char *)v38 + v7);
              --v37;
            }
            while ( v37 );
          }
          v18 = (unsigned int)(v18 + 1);
        }
        v21 = v14;
        v22 = (unsigned __int64 *)&v14[4 * v18];
        v23 = v17 - v18;
        if ( v23 )
        {
          v24 = v13;
          if ( v13 )
          {
            v25 = a5 | ((unsigned __int64)a5 << 32);
            do
            {
              --v24;
              v26 = v23;
              v27 = v22;
              if ( ((unsigned __int8)v22 & 4) != 0 )
              {
                *(_DWORD *)v22 = a5;
                v27 = (unsigned __int64 *)((char *)v22 + 4);
                v26 = v23 - 1;
              }
              v28 = v26 >> 1;
              v29 = v26 >> 4;
              if ( v26 >> 4 )
              {
                v28 &= 7u;
                do
                {
                  *v27 = v25;
                  v27[1] = v25;
                  v27[2] = v25;
                  v27[3] = v25;
                  v27[4] = v25;
                  v27[5] = v25;
                  v27[6] = v25;
                  v27[7] = v25;
                  v27 += 8;
                  --v29;
                }
                while ( v29 );
              }
              if ( (_DWORD)v28 )
              {
                memset64(v27, v25, v28);
                v27 += (unsigned int)v28;
              }
              if ( (v26 & 1) != 0 )
                *(_DWORD *)v27 = a5;
              v22 = (unsigned __int64 *)((char *)v22 + v7);
            }
            while ( v24 );
            v13 = v39;
            v7 = a4;
            v21 = v41;
          }
          v6 = a6;
        }
        if ( v20 != -1 )
        {
          for ( j = (unsigned int *)&v21[4 * v40]; v13; --v13 )
          {
            *j = a5 & ~v20 | *j & v20;
            j = (unsigned int *)((char *)j + v7);
          }
        }
      }
      v8 = a3;
      p_bottom += 4;
      --v9;
    }
    while ( v9 );
  }
}
