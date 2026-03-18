/*
 * XREFs of sbit_EmboldenSubPixel @ 0x1C02B9810
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall sbit_EmboldenSubPixel(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int16 a5,
        __int16 a6)
{
  unsigned __int16 v6; // bp
  char *v7; // r13
  char *v8; // rdx
  char *v9; // rdi
  char *v10; // r15
  unsigned __int64 v11; // r8
  __int64 v12; // rsi
  char *v13; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  char v16; // r9
  int v17; // r10d
  char *v18; // r11
  char *v19; // rbx
  int v20; // esi
  __int64 v21; // rbp
  unsigned __int64 v22; // r10
  char *v23; // rcx
  char v24; // dl
  int v25; // r8d
  char *v26; // r9
  __int64 v27; // r14
  char *j; // rbx
  int k; // r15d
  char *v30; // r9
  __int64 v31; // rsi
  unsigned __int8 v32; // r8
  int v33; // ebx
  int v34; // r11d
  char *v35; // rcx
  unsigned __int8 v36; // r10
  unsigned __int8 v37; // cl
  __int64 v38; // rsi
  char *i; // rdi
  char *v40; // r9
  unsigned __int8 *v41; // rdx
  __int64 v42; // rdi
  int v43; // r11d
  unsigned __int8 v44; // r8
  int v45; // ebx
  int v46; // ecx
  char *v47; // rax
  char v48; // cl
  char *v49; // rbx
  char *v50; // rdx
  unsigned __int64 v51; // r10
  _BYTE *v52; // rcx
  int v53; // [rsp+20h] [rbp-58h]
  char *v54; // [rsp+28h] [rbp-50h]
  unsigned __int16 v57; // [rsp+98h] [rbp+20h]

  if ( a3 )
  {
    v57 = a4;
    v6 = a2;
    v7 = a1;
    if ( a1 )
    {
      v53 = a4;
      v8 = &a1[a4 * (a3 - 1)];
      v54 = v8;
      if ( a6 < 0 )
      {
        v10 = &a1[a4 * (a3 - 1)];
        v9 = &a1[-(a4 * a6)];
      }
      else
      {
        v9 = a1;
        v10 = &a1[a4 * (a3 - a6 - 1)];
      }
      if ( a5 > 0 )
      {
        v11 = (unsigned __int64)v9;
        if ( v9 > v10 )
          goto LABEL_43;
        v12 = a4;
        while ( 1 )
        {
          v13 = (char *)(v11 + v6 - 1LL);
          v14 = v13;
          if ( a5 > 0 )
          {
            v15 = (unsigned int)a5;
            do
            {
              *v14-- = 0;
              --v15;
            }
            while ( v15 );
          }
          if ( (unsigned __int64)v13 <= v11 )
            goto LABEL_23;
          do
          {
            v16 = *v13;
            v17 = 1;
            if ( a5 < 1 )
              goto LABEL_22;
            v18 = v13 - 1;
            while ( 1 )
            {
              if ( (unsigned __int64)&v13[-v17] < v11 || !*v18 )
                goto LABEL_19;
              if ( v16 )
                break;
              v16 = *v18;
LABEL_19:
              ++v17;
              --v18;
              if ( v17 > a5 )
                goto LABEL_22;
            }
            v16 = 42;
LABEL_22:
            *v13-- = v16;
          }
          while ( (unsigned __int64)v13 > v11 );
LABEL_23:
          v11 += v12;
          if ( v11 > (unsigned __int64)v10 )
          {
LABEL_42:
            v8 = v54;
            a4 = v57;
            v6 = a2;
            goto LABEL_43;
          }
        }
      }
      if ( a5 < 0 )
      {
        v19 = v9;
        if ( v9 <= v10 )
        {
          v20 = -a5;
          v21 = a4;
LABEL_28:
          if ( a5 < 0 )
            memset(v19, 0, v20);
          v22 = (unsigned __int64)&v19[a2];
          v23 = v19;
          if ( (unsigned __int64)v19 >= v22 )
            goto LABEL_41;
LABEL_31:
          v24 = *v23;
          v25 = 1;
          if ( v20 < 1 )
            goto LABEL_40;
          v26 = v23 + 1;
          while ( 1 )
          {
            if ( (unsigned __int64)&v23[v25] < v22 && *v26 )
            {
              if ( v24 )
              {
                v24 = 42;
LABEL_40:
                *v23++ = v24;
                if ( (unsigned __int64)v23 >= v22 )
                {
LABEL_41:
                  v19 += v21;
                  if ( v19 > v10 )
                    goto LABEL_42;
                  goto LABEL_28;
                }
                goto LABEL_31;
              }
              v24 = *v26;
            }
            ++v25;
            ++v26;
            if ( v25 > v20 )
              goto LABEL_40;
          }
        }
      }
LABEL_43:
      if ( a6 <= 0 )
      {
        if ( a6 < 0 )
        {
          v38 = a4;
          for ( i = &v9[-a4]; i >= v7; i -= v38 )
          {
            if ( v6 )
              memset(i, 0, v6);
          }
          v40 = v7;
          if ( v7 < v10 )
          {
            do
            {
              v41 = (unsigned __int8 *)v40;
              if ( v6 )
              {
                v42 = v6;
                v43 = -a6;
                do
                {
                  v44 = *v41;
                  v45 = 1;
                  if ( v43 >= 1 )
                  {
                    v46 = v53;
                    do
                    {
                      v47 = (char *)&v41[v46];
                      if ( v47 >= &v10[v38] )
                        break;
                      if ( *v47 )
                      {
                        if ( v44 )
                        {
                          v48 = v44;
                          if ( (unsigned __int8)*v47 > v44 )
                            v48 = *v47;
                          v44 = v48;
                          break;
                        }
                        v44 = *v47;
                      }
                      ++v45;
                      v46 += v53;
                    }
                    while ( v45 <= v43 );
                  }
                  *v41++ = v44;
                  --v42;
                }
                while ( v42 );
              }
              v40 += v38;
            }
            while ( v40 < v10 );
            v7 = a1;
          }
        }
        k = a6;
      }
      else
      {
        v27 = a4;
        for ( j = &v10[a4]; j <= v8; j += v27 )
        {
          if ( v6 )
          {
            memset(j, 0, v6);
            v8 = v54;
          }
        }
        for ( k = a6; v8 > v9; v8 -= v27 )
        {
          v30 = v8;
          if ( v6 )
          {
            v31 = v6;
            do
            {
              v32 = *v30;
              v33 = 1;
              if ( a6 >= 1 )
              {
                v34 = v53;
                do
                {
                  v35 = &v30[-v34];
                  if ( v35 < v9 )
                    break;
                  v36 = *v35;
                  if ( *v35 )
                  {
                    if ( v32 )
                    {
                      v37 = v32;
                      if ( v36 > v32 )
                        v37 = v36;
                      v32 = v37;
                      break;
                    }
                    v32 = *v35;
                  }
                  ++v33;
                  v34 += v53;
                }
                while ( v33 <= a6 );
              }
              *v30++ = v32;
              --v31;
            }
            while ( v31 );
          }
        }
      }
      if ( (int)abs32(k) > 1 )
      {
        v49 = v54;
        v50 = &v7[v57];
        if ( v50 < v54 )
        {
          do
          {
            v51 = (unsigned __int64)&v50[a2 - 1];
            v52 = v50 + 1;
            if ( (unsigned __int64)(v50 + 1) < v51 )
            {
              do
              {
                if ( (unsigned __int8)(*v52 - 1) <= 0x28u && *(v52 - 1) && v52[1] && v52[~(unsigned __int64)v57 + 1] )
                {
                  if ( v52[v57] )
                    *v52 = 42;
                }
                ++v52;
              }
              while ( (unsigned __int64)v52 < v51 );
              v49 = v54;
            }
            v50 += v57;
          }
          while ( v50 < v49 );
        }
      }
    }
  }
}
