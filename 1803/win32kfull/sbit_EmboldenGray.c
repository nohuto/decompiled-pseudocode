/*
 * XREFs of sbit_EmboldenGray @ 0x1C02B9280
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 *     sbit_GetBitmap @ 0x1C02B9DC0 (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall sbit_EmboldenGray(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int16 a6,
        __int16 a7)
{
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r13
  char *v9; // rdi
  int v10; // ebp
  char *v11; // r12
  char *v12; // rbx
  char *v13; // r15
  unsigned __int64 v14; // r9
  __int64 v15; // rbp
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rax
  __int64 v18; // rcx
  unsigned __int8 v19; // r8
  int v20; // r10d
  unsigned __int8 *v21; // r11
  char *v22; // rsi
  int v23; // ebp
  __int64 v24; // r14
  unsigned __int64 v25; // r10
  char *i; // rcx
  unsigned __int8 v27; // dl
  int v28; // r8d
  _BYTE *v29; // r9
  __int64 v30; // r14
  char *k; // rdi
  char *v32; // rdx
  __int64 v33; // r11
  unsigned __int8 v34; // cl
  int v35; // r10d
  int v36; // r9d
  char *v37; // r8
  __int64 v38; // rsi
  char *j; // rbx
  char *v40; // rdx
  __int64 v41; // rbx
  int v42; // r8d
  unsigned __int8 v43; // cl
  int v44; // r10d
  int v45; // r9d
  char *v46; // rax
  int v48; // [rsp+80h] [rbp+18h]

  if ( !a3 )
    return;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( !a1 )
    return;
  v10 = a4;
  v48 = a4;
  v11 = &a1[a4 * (a3 - 1)];
  if ( a7 < 0 )
  {
    v13 = &a1[a4 * (a3 - 1)];
    v12 = &a1[-(a4 * a7)];
  }
  else
  {
    v12 = a1;
    v13 = &a1[a4 * (a3 - a7 - 1)];
  }
  if ( a6 > 0 )
  {
    v14 = (unsigned __int64)v12;
    if ( v12 > v13 )
      goto LABEL_40;
    v15 = v7;
    do
    {
      v16 = (unsigned __int8 *)(v14 + v8 - 1LL);
      v17 = v16;
      if ( a6 > 0 )
      {
        v18 = (unsigned int)a6;
        do
        {
          *v17-- = 0;
          --v18;
        }
        while ( v18 );
      }
      for ( ; (unsigned __int64)v16 > v14; --v16 )
      {
        v19 = *v16;
        v20 = 1;
        if ( a6 >= 1 )
        {
          v21 = v16 - 1;
          while ( 1 )
          {
            if ( (unsigned __int64)&v16[-v20] >= v14 )
            {
              v19 += *v21;
              if ( v19 >= a5 )
                break;
            }
            ++v20;
            --v21;
            if ( v20 > a6 )
              goto LABEL_20;
          }
          v19 = a5 - 1;
        }
LABEL_20:
        *v16 = v19;
      }
      v14 += v15;
    }
    while ( v14 <= (unsigned __int64)v13 );
    goto LABEL_39;
  }
  if ( a6 < 0 )
  {
    v22 = v12;
    if ( v12 <= v13 )
    {
      v23 = -a6;
      v24 = a4;
      do
      {
        if ( a6 < 0 )
          memset(v22, 0, v23);
        v25 = (unsigned __int64)&v22[v8];
        for ( i = v22; (unsigned __int64)i < v25; ++i )
        {
          v27 = *i;
          v28 = 1;
          if ( v23 >= 1 )
          {
            v29 = i + 1;
            while ( 1 )
            {
              if ( (unsigned __int64)&i[v28] < v25 )
              {
                v27 += *v29;
                if ( v27 >= a5 )
                  break;
              }
              ++v28;
              ++v29;
              if ( v28 > v23 )
                goto LABEL_36;
            }
            v27 = a5 - 1;
          }
LABEL_36:
          *i = v27;
        }
        v22 += v24;
      }
      while ( v22 <= v13 );
      v8 = a2;
LABEL_39:
      v10 = v48;
      v7 = a4;
    }
  }
LABEL_40:
  if ( a7 <= 0 )
  {
    if ( a7 < 0 )
    {
      v38 = v7;
      for ( j = &v12[-v7]; j >= v9; j -= v38 )
      {
        if ( v8 )
          memset(j, 0, v8);
      }
      for ( ; v9 < v13; v9 += v38 )
      {
        v40 = v9;
        if ( v8 )
        {
          v41 = v8;
          v42 = -a7;
          do
          {
            v43 = *v40;
            v44 = 1;
            if ( v42 >= 1 )
            {
              v45 = v48;
              do
              {
                v46 = &v40[v45];
                if ( v46 >= &v13[v38] )
                  break;
                v43 += *v46;
                if ( v43 >= a5 )
                {
                  v43 = a5 - 1;
                  break;
                }
                ++v44;
                v45 += v48;
              }
              while ( v44 <= v42 );
            }
            *v40++ = v43;
            --v41;
          }
          while ( v41 );
        }
      }
    }
  }
  else
  {
    v30 = v7;
    for ( k = &v13[v7]; k <= v11; k += v30 )
    {
      if ( v8 )
        memset(k, 0, v8);
    }
    for ( ; v11 > v12; v11 -= v30 )
    {
      v32 = v11;
      if ( v8 )
      {
        v33 = v8;
        do
        {
          v34 = *v32;
          v35 = 1;
          if ( a7 >= 1 )
          {
            v36 = v10;
            do
            {
              v37 = &v32[-v36];
              if ( v37 < v12 )
                break;
              v34 += *v37;
              if ( v34 >= a5 )
              {
                v34 = a5 - 1;
                break;
              }
              ++v35;
              v36 += v10;
            }
            while ( v35 <= a7 );
          }
          *v32++ = v34;
          --v33;
        }
        while ( v33 );
      }
    }
  }
}
