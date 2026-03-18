/*
 * XREFs of ScaleHorizontal @ 0x1C02B83E4
 * Callers:
 *     sbit_GetBitmap @ 0x1C02B9DC0 (sbit_GetBitmap.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall ScaleHorizontal(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int16 a7)
{
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // bp
  unsigned __int8 *v9; // rsi
  unsigned __int16 v10; // r15
  unsigned __int8 *v11; // r12
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r8
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // r11
  __int16 v18; // r9
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  unsigned __int8 v21; // cl
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // r15d
  char *v25; // r8
  char *v26; // r10
  __int16 v27; // r9
  unsigned __int16 v28; // si
  char *v29; // r11
  unsigned __int16 v30; // ax
  char *v31; // rbx
  __int16 v32; // dx
  unsigned __int8 v33; // r8
  unsigned __int16 v34; // r10
  char *v35; // rcx
  char *v36; // r12
  __int16 v37; // si
  unsigned __int16 v38; // bp
  unsigned __int8 v39; // r13
  char *v40; // rax
  __int16 v41; // ax
  bool v42; // zf
  unsigned __int16 v43; // r14
  unsigned __int8 *v44; // r15
  __int64 v45; // rax
  unsigned __int8 *v46; // r8
  unsigned __int8 *v47; // r9
  unsigned __int16 v48; // dx
  unsigned __int16 v49; // cx
  __int64 v50; // r10
  unsigned __int16 v51; // r9
  int v52; // ecx
  char *v53; // r8
  char *v54; // rcx
  __int64 v55; // r15
  char *v56; // rsi
  __int64 v57; // r12
  char *v58; // r11
  char *v59; // r10
  char *v60; // r8
  unsigned __int16 v61; // dx
  unsigned __int16 v62; // cx
  __int64 v63; // rax
  unsigned __int8 v64; // [rsp+20h] [rbp-68h]
  unsigned __int16 v65; // [rsp+20h] [rbp-68h]
  int v66; // [rsp+24h] [rbp-64h]
  unsigned __int8 *v67; // [rsp+28h] [rbp-60h]
  __int64 v68; // [rsp+28h] [rbp-60h]
  __int64 v69; // [rsp+30h] [rbp-58h]
  char *v70; // [rsp+38h] [rbp-50h]
  __int64 v71; // [rsp+40h] [rbp-48h]
  __int64 v72; // [rsp+48h] [rbp-40h]
  unsigned __int8 v74; // [rsp+A8h] [rbp+20h]

  v7 = 0;
  v8 = a3;
  v9 = a1;
  v74 = 0;
  if ( a4 == 1 )
  {
    if ( a6 >= a5 )
    {
      if ( a6 > a5 )
      {
        v65 = a7;
        v23 = a7 - 1;
        v24 = ((unsigned int)a6 + 7) >> 3;
        v25 = (char *)&v9[v23 * a2];
        v26 = (char *)&v9[v23 * v8];
        v27 = 7 - ((a6 - 1) & 7);
        if ( a7 )
        {
          v71 = a2;
          v72 = v8;
          v28 = a5 >> 1;
          v29 = &v26[(unsigned __int16)v24 - 1];
          v30 = a7;
          v31 = &v25[(unsigned __int16)(((unsigned int)a5 + 7) >> 3) - 1];
          do
          {
            v32 = ((a5 - 1) & 7) - 7;
            v33 = 0;
            v34 = v28;
            v35 = v31;
            v36 = v29;
            v37 = v27;
            v38 = 0;
            if ( (_WORD)v24 )
            {
              v39 = v74;
              do
              {
                if ( v32 <= 0 )
                  v39 = *v35;
                v40 = v35 - 1;
                if ( v32 > 0 )
                  v40 = v35;
                v35 = v40;
                v70 = v40;
                v41 = v32 + 8;
                if ( v32 > 0 )
                  v41 = v32;
                v34 += a6;
                if ( v34 >= a5 )
                {
                  do
                  {
                    ++v37;
                    v33 = (v39 << (v41 - 1)) & 0x80 | (v33 >> 1);
                    if ( v37 == 8 )
                    {
                      *v36 = v33;
                      v37 = 0;
                      --v36;
                      ++v38;
                    }
                    v34 -= a5;
                  }
                  while ( v34 >= a5 );
                  v35 = v70;
                }
                v32 = v41 - 1;
              }
              while ( v38 < (unsigned __int16)v24 );
              v27 = 7 - ((a6 - 1) & 7);
              v30 = v65;
              v74 = v39;
            }
            v31 -= v71;
            v29 -= v72;
            v28 = a5 >> 1;
            v42 = v30-- == 1;
            v65 = v30;
          }
          while ( !v42 );
        }
      }
    }
    else
    {
      v10 = a7;
      v11 = a1;
      v12 = ((unsigned int)a6 + 7) >> 3;
      if ( a7 )
      {
        v13 = a2;
        v14 = a5 >> 1;
        v69 = a2;
        do
        {
          v15 = v14;
          v16 = v9;
          v67 = v9;
          v66 = 0;
          v17 = v11;
          v18 = 0;
          v64 = 0;
          if ( (_WORD)v12 )
          {
            do
            {
              while ( v15 >= a6 )
              {
                --v18;
                v15 -= a6;
              }
              if ( v18 > 0 )
              {
                v20 = v74;
              }
              else
              {
                v19 = (unsigned __int16)(((unsigned __int16)-v18 >> 3) + 1);
                v18 += 8 * v19;
                do
                {
                  v20 = *v16++;
                  v74 = v20;
                  --v19;
                }
                while ( v19 );
                v67 = v16;
              }
              v21 = (2 * v64) | (v20 >> (v18 - 1)) & 1;
              HIWORD(v22) = HIWORD(v66);
              LOWORD(v22) = v66 + 1;
              v64 = v21;
              v66 = v22;
              if ( (_WORD)v22 == 8 )
              {
                *v17++ = v21;
                v66 = 0;
                ++v7;
              }
              v16 = v67;
              v15 += a5;
            }
            while ( v7 < (unsigned __int16)v12 );
            v8 = a3;
            v13 = v69;
          }
          if ( v7 < v8 )
          {
            memset(v17, 0, (unsigned __int16)(v8 - v7));
            v13 = v69;
          }
          v9 += v13;
          v11 += v8;
          v7 = 0;
          v14 = a5 >> 1;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  else if ( a6 >= a5 )
  {
    if ( a6 > a5 )
    {
      v51 = a7;
      v52 = a7 - 1;
      v53 = (char *)&v9[v52 * a2];
      v54 = (char *)&v9[v52 * v8];
      if ( a7 )
      {
        v55 = v8;
        v56 = &v53[a5 - 1];
        v57 = a2;
        v58 = &v54[v8 - 1];
        do
        {
          v59 = v56;
          v60 = v58;
          v61 = a5 >> 1;
          v62 = v8;
          if ( v8 > a6 )
          {
            v63 = (unsigned __int16)(v8 - a6);
            do
            {
              *v60 = 0;
              --v62;
              --v60;
              --v63;
            }
            while ( v63 );
          }
          if ( v62 )
          {
            do
            {
              for ( v61 += a6; v61 >= a5; --v60 )
              {
                --v62;
                *v60 = *v59;
                v61 -= a5;
              }
              --v59;
            }
            while ( v62 );
            v55 = v8;
          }
          v56 -= v57;
          v58 -= v55;
          --v51;
        }
        while ( v51 );
      }
    }
  }
  else
  {
    v43 = a7;
    v44 = a1;
    if ( a7 )
    {
      v45 = a2;
      v68 = a2;
      do
      {
        v46 = v9;
        v47 = v44;
        v48 = a5 >> 1;
        v49 = 0;
        if ( a6 )
        {
          v49 = a6;
          v50 = a6;
          do
          {
            while ( v48 >= a6 )
            {
              ++v46;
              v48 -= a6;
            }
            v48 += a5;
            *v47++ = *v46;
            --v50;
          }
          while ( v50 );
          v45 = v68;
        }
        if ( v49 < v8 )
        {
          memset(v47, 0, (unsigned __int16)(v8 - v49));
          v45 = v68;
        }
        v9 += v45;
        v44 += v8;
        --v43;
      }
      while ( v43 );
    }
  }
}
