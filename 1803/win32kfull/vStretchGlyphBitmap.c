/*
 * XREFs of vStretchGlyphBitmap @ 0x1C02280DC
 * Callers:
 *     vStretchCvtToBitmap @ 0x1C0227FE4 (vStretchCvtToBitmap.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     vEmboldenItalicizeLine @ 0x1C0227F20 (vEmboldenItalicizeLine.c)
 */

char __fastcall vStretchGlyphBitmap(char *a1, _BYTE *a2, _BYTE *a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  int v8; // r11d
  _BYTE *v11; // r8
  int v12; // r14d
  __int64 v13; // r15
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned int v17; // edi
  unsigned int v18; // eax
  __int64 v19; // rbp
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  int v22; // r9d
  _BYTE *v23; // rcx
  char *v24; // rbp
  int v25; // ecx
  unsigned __int64 v26; // r8
  int v27; // r10d
  char v28; // r11
  char *v29; // rdx
  char *v30; // r9
  char v31; // r11
  char v32; // al
  int v33; // ecx
  char *v34; // r10
  char v35; // r9
  char *v36; // rdx
  char v37; // r9
  char *v38; // r13
  unsigned __int64 v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+40h] [rbp-48h]
  __int64 v43; // [rsp+48h] [rbp-40h]
  _BYTE *v44; // [rsp+98h] [rbp+10h]
  char *v45; // [rsp+A0h] [rbp+18h]
  int v46; // [rsp+A8h] [rbp+20h]
  int v47; // [rsp+B0h] [rbp+28h]
  int v48; // [rsp+B8h] [rbp+30h]

  v44 = a2;
  v41 = a5;
  v8 = a7 * a4;
  v11 = &a2[a5];
  v12 = 0;
  v13 = a5;
  v42 = (unsigned __int64)v11;
  v14 = 0;
  v46 = a7 * a4;
  v15 = (unsigned int)(a7 * a4 + 7) >> 3;
  if ( a8 == 0x2000 )
  {
    v16 = (unsigned int)(v8 + 8) >> 3;
  }
  else
  {
    if ( a8 != 0x4000 && a8 != 24576 )
    {
      v16 = (unsigned int)(a7 * a4 + 7) >> 3;
      v47 = v16;
      goto LABEL_10;
    }
    v17 = ((a6 * a5 - 1) >> 1) + 1;
    if ( (a8 & 0x2000) == 0 )
      v17 = (a6 * a5 - 1) >> 1;
    v16 = (v17 + v8 + 7) >> 3;
    v12 = v17 & 7;
    v14 = v17 >> 3;
  }
  v47 = v16;
LABEL_10:
  v18 = a6 * v16;
  if ( a2 < v11 )
  {
    v19 = v18;
    v20 = (unsigned __int64)&a3[v15];
    v21 = (unsigned int)v15;
    v22 = 0;
    v43 = v18;
    v40 = (unsigned int)v15;
    v45 = &a3[v15];
    v48 = 0;
    while ( 1 )
    {
      v23 = a3;
      if ( (unsigned __int64)a3 < v20 )
      {
        do
        {
          switch ( a7 )
          {
            case 1:
              LOBYTE(v18) = *a2;
              *v23++ = *a2;
              break;
            case 2:
              *v23 = ajStretch2[(unsigned __int64)(unsigned __int8)*a2 >> 4];
              LOBYTE(v18) = ajStretch2[*a2 & 0xF];
              v23[1] = v18;
              v23 += 2;
              break;
            case 3:
              *v23 = ajStretch3B1[(unsigned __int64)(unsigned __int8)*a2 >> 5];
              v23[1] = ajStretch3B2[((unsigned __int64)(unsigned __int8)*a2 >> 2) & 0xF];
              LOBYTE(v18) = ajStretch3B3[*a2 & 7];
              v23[2] = v18;
              v23 += 3;
              break;
            default:
              LOBYTE(v18) = a7 - 4;
              if ( a7 == 4 )
              {
                *v23 = awStretch4[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
                v23[1] = byte_1C0320319[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
                v23[2] = awStretch4[2 * (*a2 & 0xF)];
                LOBYTE(v18) = byte_1C0320319[2 * (*a2 & 0xF)];
                v23[3] = v18;
                v23 += 4;
              }
              else if ( a7 == 5 )
              {
                *v23 = awStretch5W1[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
                v23[1] = byte_1C0320339[2 * ((unsigned __int64)(unsigned __int8)*a2 >> 4)];
                v23[2] = awStretch5W2[2 * (((unsigned __int64)(unsigned __int8)*a2 >> 1) & 0xF)];
                v23[3] = byte_1C03202F9[2 * (((unsigned __int64)(unsigned __int8)*a2 >> 1) & 0xF)];
                LOBYTE(v18) = ajStretch5B1[*a2 & 3];
                v23[4] = v18;
                v23 += 5;
              }
              break;
          }
          a2 += v13;
        }
        while ( (unsigned __int64)v23 < v20 );
        v8 = v46;
      }
      v24 = &a1[v19];
      if ( !a8 )
        break;
      if ( a8 == 0x2000 )
      {
        v34 = a1;
        v35 = 0;
        if ( a1 > &a1[v21] )
          v21 = 0LL;
        if ( v21 )
        {
          v36 = a3;
          do
          {
            *v34++ = v35 | *v36 | ((unsigned __int8)*v36 >> 1);
            v37 = *v36++;
            v35 = v37 << 7;
          }
          while ( v36 - a3 < v21 );
        }
        LOBYTE(v18) = 7;
        if ( (v8 & 7) == 0 )
          *v34 = v35;
        v38 = a1;
        a1 += v16;
        if ( a1 < v24 )
        {
          do
          {
            LOBYTE(v18) = (unsigned __int8)memmove(a1, v38, v16);
            a1 += v16;
          }
          while ( a1 < v24 );
          v8 = v46;
        }
        v22 = v48;
LABEL_63:
        v20 = (unsigned __int64)v45;
LABEL_64:
        v21 = v40;
        v13 = v41;
        goto LABEL_65;
      }
      if ( a8 != 0x4000 )
      {
        if ( a8 != 24576 || a1 >= v24 )
          goto LABEL_65;
        do
        {
          vEmboldenItalicizeLine(&a1[v14], (unsigned __int64)a3, v20, v12, v46);
          v20 = (unsigned __int64)v45;
          v12 -= v48 & 1;
          v22 = v48 + 1;
          v25 = v12;
          ++v48;
          if ( v12 < 0 )
            v12 = 7;
          v18 = v14 - 1;
          if ( v25 >= 0 )
            v18 = v14;
          a1 += v16;
          v14 = v18;
        }
        while ( a1 < v24 );
        v16 = v47;
        v8 = v46;
        goto LABEL_64;
      }
      if ( a1 < v24 )
      {
        v26 = v20 - (_QWORD)a3;
        if ( (unsigned __int64)a3 > v20 )
          v26 = 0LL;
        v27 = -v8 & 7;
        do
        {
          v28 = 0;
          v29 = &a1[v14];
          if ( v26 )
          {
            v30 = a3;
            do
            {
              *v29++ = v28 | ((unsigned __int8)*v30 >> v12);
              v31 = *v30++;
              v28 = v31 << (8 - v12);
            }
            while ( v30 - a3 < v26 );
            v22 = v48;
          }
          if ( v27 < v12 )
            *v29 = v28;
          v32 = v22++;
          v48 = v22;
          v12 -= v32 & 1;
          v18 = v14 - 1;
          v33 = v12;
          if ( v12 < 0 )
            v12 = 7;
          if ( v33 >= 0 )
            v18 = v14;
          a1 += v16;
          v14 = v18;
        }
        while ( a1 < v24 );
        v8 = v46;
        goto LABEL_63;
      }
LABEL_65:
      v19 = v43;
      a2 = v44 + 1;
      v44 = a2;
      if ( (unsigned __int64)a2 >= v42 )
        return v18;
    }
    if ( a1 >= v24 )
      goto LABEL_65;
    do
    {
      LOBYTE(v18) = (unsigned __int8)memmove(a1, a3, v16);
      a1 += v16;
    }
    while ( a1 < v24 );
    v8 = v46;
    v22 = v48;
    goto LABEL_63;
  }
  return v18;
}
