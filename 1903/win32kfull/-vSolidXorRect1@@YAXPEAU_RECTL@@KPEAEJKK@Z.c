/*
 * XREFs of ?vSolidXorRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C0103600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  LONG *p_bottom; // r14
  __int64 v7; // rdi
  char v8; // r15
  int v9; // r10d
  int v10; // eax
  int v11; // r11d
  unsigned int v12; // r9d
  unsigned __int8 *v13; // r12
  int v14; // r13d
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // r11
  __int64 v18; // r13
  int v19; // ebx
  unsigned __int8 *v20; // rcx
  __int64 v21; // rsi
  int v22; // eax
  unsigned __int8 *v23; // rcx
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ebx
  unsigned __int8 *v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+40h] [rbp+10h]
  unsigned __int8 *v31; // [rsp+48h] [rbp+18h]

  if ( a2 )
  {
    v31 = a3;
    p_bottom = &a1->bottom;
    v7 = a4;
    v8 = 5 - a6;
    v9 = a2;
    do
    {
      v10 = *(p_bottom - 2);
      v11 = *(p_bottom - 1);
      v12 = *p_bottom - v10;
      v13 = &a3[(int)v7 * v10];
      v14 = v11 - *(p_bottom - 3);
      v15 = (unsigned int)(*(p_bottom - 3) >> v8);
      v16 = (*(p_bottom - 3) << a6) & 0x1F;
      v17 = (unsigned int)(v11 >> v8);
      v30 = v15;
      v18 = ((unsigned __int8)(*(p_bottom - 3) << a6) + (unsigned __int8)(v14 << a6)) & 0x1F;
      v19 = ~aulMsk[v18];
      if ( (_DWORD)v15 != (_DWORD)v17 && !(_DWORD)v16 )
        goto LABEL_27;
      v23 = &v13[4 * v15];
      v24 = v19 & aulMsk[v16];
      if ( (_DWORD)v15 != (_DWORD)v17 )
        v24 = aulMsk[v16];
      v25 = a5 & v24;
      if ( v12 )
      {
        v26 = v12;
        do
        {
          *(_DWORD *)v23 ^= v25;
          v23 += v7;
          --v26;
        }
        while ( v26 );
      }
      v15 = (unsigned int)(v15 + 1);
      if ( v30 != (_DWORD)v17 )
      {
LABEL_27:
        if ( (_DWORD)v17 != (_DWORD)v15 )
        {
          v20 = &v13[4 * v15];
          if ( v12 )
          {
            v21 = v12;
            do
            {
              v22 = v17 - v15;
              do
              {
                *(_DWORD *)v20 ^= a5;
                v20 += 4;
                --v22;
              }
              while ( v22 );
              v20 += v7 - 4LL * (unsigned int)(v17 - v15);
              --v21;
            }
            while ( v21 );
          }
        }
        if ( (_DWORD)v18 )
        {
          v27 = a5 & v19;
          v28 = &v13[4 * v17];
          if ( v12 )
          {
            v29 = v12;
            do
            {
              *(_DWORD *)v28 ^= v27;
              v28 += v7;
              --v29;
            }
            while ( v29 );
          }
        }
      }
      a3 = v31;
      p_bottom += 4;
      --v9;
    }
    while ( v9 );
  }
}
