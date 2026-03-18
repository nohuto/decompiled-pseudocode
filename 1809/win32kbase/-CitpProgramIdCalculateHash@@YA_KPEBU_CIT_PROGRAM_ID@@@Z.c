/*
 * XREFs of ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0078F88
 * Callers:
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0078C74 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CitpProgramIdCalculateHash(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r10
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r9
  unsigned __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  unsigned __int8 *v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // r8d
  int v22; // r9d
  int v23; // r9d
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d

  v1 = *a1;
  v2 = -1LL;
  v4 = 314159LL;
  if ( *a1 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v1[2 * v5] );
    v6 = 2 * v5;
    if ( v6 >= 8 )
    {
      v7 = (unsigned __int64)v6 >> 3;
      v6 -= 8 * ((unsigned __int64)v6 >> 3);
      do
      {
        v8 = v1[6] + 37 * (v1[5] + 37 * (v1[4] + 37 * (v1[3] + 37 * (v1[2] + 37 * (v1[1] + 37 * (*v1 + 37 * v4))))));
        v9 = v1[7];
        v1 += 8;
        v4 = v9 + 37 * v8;
        --v7;
      }
      while ( v7 );
    }
    if ( v6 >= 1 && v6 <= 7 )
    {
      v10 = v6 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v22 = v13 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  if ( v23 != 1 )
                    goto LABEL_17;
                  v4 = *v1++ + 37 * v4;
                }
                v4 = *v1++ + 37 * v4;
              }
              v4 = *v1++ + 37 * v4;
            }
            v4 = *v1++ + 37 * v4;
          }
          v4 = *v1++ + 37 * v4;
        }
        v4 = *v1++ + 37 * v4;
      }
      v4 = *v1 + 37 * v4;
    }
  }
LABEL_17:
  v14 = a1[1];
  if ( v14 )
  {
    do
      ++v2;
    while ( *(_WORD *)&v14[2 * v2] );
    v15 = 2 * v2;
    if ( v15 >= 8 )
    {
      v16 = (unsigned __int64)v15 >> 3;
      v15 -= 8 * ((unsigned __int64)v15 >> 3);
      do
      {
        v17 = v14[6]
            + 37 * (v14[5] + 37 * (v14[4] + 37 * (v14[3] + 37 * (v14[2] + 37 * (v14[1] + 37 * (*v14 + 37 * v4))))));
        v18 = v14[7];
        v14 += 8;
        v4 = v18 + 37 * v17;
        --v16;
      }
      while ( v16 );
    }
    if ( v15 >= 1 && v15 <= 7 )
    {
      v19 = v15 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v24 = v20 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 != 1 )
                    return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
                  v4 = *v14++ + 37 * v4;
                }
                v4 = *v14++ + 37 * v4;
              }
              v4 = *v14++ + 37 * v4;
            }
            v4 = *v14++ + 37 * v4;
          }
          v4 = *v14++ + 37 * v4;
        }
        v4 = *v14++ + 37 * v4;
      }
      v4 = *v14 + 37 * v4;
    }
  }
  return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
}
