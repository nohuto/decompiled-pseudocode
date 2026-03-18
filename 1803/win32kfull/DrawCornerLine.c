/*
 * XREFs of DrawCornerLine @ 0x1C012A9B0
 * Callers:
 *     CreateStandardMonoPattern @ 0x1C012A568 (CreateStandardMonoPattern.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall DrawCornerLine(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        int a6)
{
  int v7; // ebp
  char *v8; // r10
  int v9; // r11d
  int v10; // esi
  int v11; // eax
  int v12; // edi
  BOOL v13; // r13d
  int v14; // eax
  int v15; // r15d
  int v16; // r9d
  int v17; // r14d
  int v18; // r12d
  int v19; // r8d
  int v20; // ebx
  int v21; // ecx
  bool v22; // sf
  int v23; // edx
  int v24; // r15d
  int v25; // eax
  int v26; // edx
  char *v27; // rax
  char v28; // cl
  int v29; // [rsp+20h] [rbp-38h]
  int v30; // [rsp+24h] [rbp-34h]
  int v31; // [rsp+80h] [rbp+28h]

  v7 = 0;
  v8 = a1;
  if ( a5 )
  {
    if ( a2 == 1 || a3 == 1 || a5 >= a2 )
    {
      memset(a1, 255, a3 * a4);
    }
    else
    {
      v9 = a4;
      if ( !a6 )
      {
        v8 = &a1[a4 * (a3 - 1)];
        v9 = -a4;
      }
      v10 = a2;
      v11 = 0;
      v12 = a2;
      if ( a2 < a3 )
        v12 = a3;
      LOBYTE(v11) = a2 < a3;
      v31 = v11;
      v13 = a2 >= a3;
      v14 = a3;
      if ( a2 < a3 )
        v14 = a2;
      v15 = v14 - 2 * v12;
      v30 = 2 * v12;
      v16 = a5 - 1;
      v29 = 2 * v14;
      if ( a2 > a3 )
      {
        v16 -= a2 / (unsigned int)a3;
        if ( v16 < 0 )
          v16 = 0;
      }
      v17 = 0;
      v18 = 0;
      v19 = 0;
LABEL_16:
      v20 = v16;
      while ( v12 )
      {
        v21 = v18 + v13;
        --v12;
        ++v20;
        v22 = v15 + v29 < 0;
        v23 = v15 + v29;
        v24 = v15 + v29;
        v25 = v31 + v17;
        v17 += v31 + v13;
        if ( v22 )
          v17 = v25;
        v18 = v21 + v31;
        if ( v23 < 0 )
          v18 = v21;
        v15 = v24 - v30;
        if ( v23 < 0 )
          v15 = v23;
        if ( v17 != v7 )
        {
          v26 = 128 >> (v19 & 7);
          v27 = &v8[(__int64)v19 >> 3];
LABEL_26:
          v28 = 0;
          while ( v20 )
          {
            --v20;
            v28 |= v26;
            if ( ++v19 >= v10 )
            {
              *v27 = v28;
              LOBYTE(v26) = 0x80;
              v28 = *v8;
              v27 = v8;
              v19 = 0;
            }
            else
            {
              LOBYTE(v26) = (unsigned __int8)v26 >> 1;
              if ( !(_BYTE)v26 )
              {
                *v27 = v28;
                LOBYTE(v26) = 0x80;
                ++v27;
                goto LABEL_26;
              }
            }
          }
          if ( (_BYTE)v26 != 0x80 )
            *v27 = v28;
          v19 = v18;
          v8 += v9;
          v7 = v17;
          goto LABEL_16;
        }
      }
    }
  }
}
