/*
 * XREFs of CapCorrection @ 0x1C02B75F8
 * Callers:
 *     sbit_EmboldenGrayFromMono @ 0x1C02B95EC (sbit_EmboldenGrayFromMono.c)
 * Callees:
 *     <none>
 */

void __fastcall CapCorrection(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v3; // r9
  char *v4; // rsi
  __int16 v5; // r14
  unsigned __int16 v6; // r11
  int v7; // ecx
  int v8; // edx
  int v9; // r10d
  __int64 v10; // rbx
  int v11; // r12d
  int v12; // r8d
  _BYTE *v13; // rcx
  int v14; // r8d
  char v15; // al
  char v16; // cl
  __int16 v17; // bx
  __int16 v18; // cx
  __int16 v19; // r13
  BOOL v20; // r9d
  __int16 v21; // bx
  __int16 v22; // di
  unsigned __int16 v23; // bp
  __int16 v24; // r15
  __int16 v25; // bp
  int v26; // eax
  __int16 v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int i; // ecx
  int v32; // eax
  int v33; // [rsp+0h] [rbp-58h]
  int v34; // [rsp+4h] [rbp-54h]
  int v35; // [rsp+8h] [rbp-50h]
  int v36; // [rsp+Ch] [rbp-4Ch]
  unsigned __int16 v37; // [rsp+10h] [rbp-48h]
  unsigned __int16 v39; // [rsp+70h] [rbp+18h]
  __int16 v40; // [rsp+78h] [rbp+20h]

  if ( a3 )
  {
    v3 = a1;
    v4 = 0LL;
    if ( a2 )
    {
      v36 = a2;
      v5 = 1;
      v6 = (a2 + 3) & 0xFFFC;
      v34 = a2 - 1;
      if ( v34 > 1 )
      {
        v7 = a2 - 1;
        v33 = a3;
        v35 = 1;
        v8 = a3 - 1;
        do
        {
          v9 = 1;
          if ( v8 > 1 )
          {
            v10 = v5;
            v11 = v6;
            do
            {
              v12 = -1;
              v13 = (_BYTE *)(v3 + v10 + v11 * (unsigned __int16)v9);
              if ( *(v13 - 1) == 16 && v13[1] == 16 && !*v13 )
              {
                v14 = v9 + 1;
                v4 = &v13[v6];
                while ( v14 < v8 && *(v4 - 1) == 16 && v4[1] == 16 && !*v4 )
                {
                  v4 += v6;
                  ++v14;
                }
                v12 = v14 - 1;
              }
              if ( (unsigned int)(v12 - v9) <= 1 )
              {
                if ( (v15 = v13[-v6], v16 = *v4, v15 == 16) && v16 != 16 || v16 == 16 && v15 != 16 )
                {
                  v39 = 0;
                  HIBYTE(v17) = 0;
                  v18 = 1;
                  if ( v15 != 16 )
                    v18 = -1;
                  v19 = v9;
                  v40 = v18;
                  v20 = 1;
                  LOBYTE(v17) = v12 - v9 != 0;
                  v37 = v17 + 1;
                  v21 = v5 + 1;
                  if ( v15 == 16 )
                    v19 = v12;
                  v22 = v5 - 1;
                  v23 = 0;
                  do
                  {
                    v24 = v22;
                    if ( !v20 )
                      goto LABEL_58;
                    v19 += v18;
                    if ( v19 < 0 || v19 >= v33 )
                      v20 = 0;
                    if ( v20 )
                    {
                      ++v39;
                      v25 = v21;
                      v26 = v11 * (unsigned __int16)v19;
                      v27 = v22;
                      v28 = v21;
                      v29 = a1 + v26;
                      v30 = v22;
                      if ( *(_BYTE *)(v22 + v29 + 1) == 16 || *(_BYTE *)(v21 + v29 - 1) == 16 )
                        v20 = 0;
                      if ( v20 )
                      {
                        v21 = -1;
                        v22 = -1;
                        v20 = 1;
                        if ( *(_BYTE *)(v30 + v29) == 16 )
                        {
                          v22 = v27;
                        }
                        else if ( v24 >= 1 && *(_BYTE *)(v30 + v29 - 1) == 16 )
                        {
                          v22 = v27 - 1;
                        }
                        if ( *(_BYTE *)(v28 + v29) == 16 )
                        {
                          v21 = v25;
                        }
                        else if ( v25 + 1 < v36 && *(_BYTE *)(v28 + v29 + 1) == 16 )
                        {
                          v21 = v25 + 1;
                        }
                        if ( v22 < 0 || v21 < 0 )
                        {
                          v20 = 0;
                        }
                        else if ( v39 == 1 )
                        {
                          v20 = v21 - v22 > v25 - v27;
                        }
                        v23 = v39;
                        v18 = v40;
                        v11 = v6;
                      }
                      else
                      {
                        v23 = v39;
                        v18 = v40;
                        v11 = v6;
                      }
                    }
                  }
                  while ( v23 < v37 );
                  if ( !v20 )
                  {
LABEL_58:
                    v3 = a1;
                    goto LABEL_59;
                  }
                  v3 = a1;
                  for ( i = v9; i <= v12; *(_BYTE *)(v35 + v32 + a1) = 16 )
                  {
                    v32 = i * v11;
                    ++i;
                  }
LABEL_59:
                  v10 = v5;
                }
              }
              if ( v12 <= 0 )
                v12 = v9;
              v8 = v33 - 1;
              v9 = v12 + 1;
            }
            while ( v12 + 1 < v33 - 1 );
            v7 = v34;
          }
          v35 = ++v5;
        }
        while ( v5 < v7 );
      }
    }
  }
}
