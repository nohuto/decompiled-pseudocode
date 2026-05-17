/*
 * XREFs of sub_1800936C0 @ 0x1800936C0
 * Callers:
 *     _snwprintf @ 0x18008D710 (_snwprintf.c)
 *     swprintf @ 0x18008DD50 (swprintf.c)
 *     sub_18008DF54 @ 0x18008DF54 (sub_18008DF54.c)
 *     sub_18008E0EC @ 0x18008E0EC (sub_18008E0EC.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_180093FE0 @ 0x180093FE0 (sub_180093FE0.c)
 *     sub_180094030 @ 0x180094030 (sub_180094030.c)
 *     sub_180094088 @ 0x180094088 (sub_180094088.c)
 *     sub_18009656C @ 0x18009656C (sub_18009656C.c)
 *     sub_1800966B0 @ 0x1800966B0 (sub_1800966B0.c)
 */

__int64 __fastcall sub_1800936C0(__int64 a1, _WORD *a2, __int64 a3, int *a4)
{
  int *v4; // rsi
  _WORD *v5; // r12
  __int64 v6; // r10
  int v7; // edi
  int v8; // r11d
  int v9; // r15d
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  char *v13; // rbx
  _WORD *v14; // r8
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  int v23; // eax
  __int16 v24; // ax
  char *v25; // rcx
  __int16 v26; // ax
  unsigned __int64 v27; // r10
  int *v28; // rsi
  __int64 v29; // rax
  int v30; // eax
  int v31; // ecx
  const char *v32; // rax
  const wchar_t *v33; // rax
  const wchar_t *i; // r13
  unsigned __int64 v35; // r8
  char v36; // r11
  char *v37; // rbx
  int v38; // r9d
  int v39; // ecx
  unsigned __int64 v40; // rdx
  char v41; // al
  char *v42; // rsi
  unsigned int v43; // r14d
  unsigned int v44; // r12d
  __int64 v45; // rsi
  char *v46; // r15
  int v47; // esi
  int v48; // eax
  __int64 v49; // r14
  int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  int v54; // eax
  int v55; // ecx
  int v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+34h] [rbp-CCh] BYREF
  int v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+3Ch] [rbp-C4h]
  int v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+44h] [rbp-BCh]
  __int64 v62; // [rsp+48h] [rbp-B8h]
  _BYTE v63[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v64; // [rsp+54h] [rbp-ACh] BYREF
  _WORD v65[4]; // [rsp+58h] [rbp-A8h] BYREF
  int *v66; // [rsp+60h] [rbp-A0h]
  int v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+6Ch] [rbp-94h]
  _WORD *v69; // [rsp+70h] [rbp-90h]
  char *v70; // [rsp+78h] [rbp-88h]
  _WORD v71[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+100h] [rbp+0h] BYREF
  char v73; // [rsp+27Fh] [rbp+17Fh] BYREF

  v66 = a4;
  v62 = a1;
  v4 = a4;
  v67 = 0;
  v5 = a2;
  v59 = 0;
  v6 = a1;
  v60 = 0;
  v7 = 0;
  v58 = 0;
  v8 = 0;
  v56 = 0;
  v9 = 0;
  v61 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v57 = 0;
    LODWORD(v12) = 0;
    v68 = 0;
    if ( v10 )
    {
      v13 = v70;
      do
      {
        v14 = v5++;
        v69 = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = byte_1801203C0[v10 - 32] & 0xF;
        v16 = byte_1801203C0[8 * v15 + v68] >> 4;
        v68 = v16;
        if ( !v16 )
          goto LABEL_166;
        v17 = v16 - 1;
        if ( !v17 )
        {
          v9 = -1;
          v56 = 0;
          v60 = -1;
          v8 = 0;
          v59 = 0;
          v7 = 0;
          v58 = 0;
          v61 = 0;
          goto LABEL_168;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          switch ( v10 )
          {
            case ' ':
              v7 |= 2u;
              break;
            case '#':
              v7 |= 0x80u;
              break;
            case '+':
              v7 |= 1u;
              break;
            case '-':
              v7 |= 4u;
              break;
            case '0':
              v7 |= 8u;
              break;
          }
          goto LABEL_168;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( v10 == 42 )
          {
            v54 = *v4;
            v66 = v4 + 2;
            v55 = v7 | 4;
            if ( v54 >= 0 )
              v55 = v7;
            v8 = abs32(v54);
            v7 = v55;
          }
          else
          {
            v8 = v10 + 2 * (5 * v8 - 24);
          }
          v59 = v8;
          goto LABEL_168;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v9 = 0;
          v60 = 0;
          goto LABEL_168;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( v10 == 42 )
          {
            v9 = *v4;
            v66 = v4 + 2;
            v60 = v9;
            if ( v9 < 0 )
            {
              v9 = -1;
              v60 = -1;
            }
          }
          else
          {
            v9 = v10 + 2 * (5 * v9 - 24);
            v60 = v9;
          }
          goto LABEL_168;
        }
        v22 = (unsigned int)(v21 - 1);
        if ( (_DWORD)v22 )
        {
          if ( (_DWORD)v22 == 1 )
          {
            if ( v10 > 0x69u )
            {
              switch ( v10 )
              {
                case 'n':
                  v66 = v4 + 2;
                  v42 = *(char **)v4;
                  if ( !(unsigned int)sub_18009656C(v22, (unsigned int)v10 - 110, v14) )
                    goto LABEL_192;
                  if ( (v7 & 0x20) != 0 )
                    *(_WORD *)v42 = v11;
                  else
                    *(_DWORD *)v42 = v11;
                  v23 = 1;
                  v56 = 1;
                  goto LABEL_26;
                case 'o':
                  v27 = 8LL;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto LABEL_50;
                case 'p':
                  v9 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_77;
              }
              if ( v10 != 115 )
              {
                if ( v10 == 117 )
                  goto LABEL_49;
                if ( v10 != 120 )
                  goto LABEL_25;
                v30 = 39;
                goto LABEL_78;
              }
            }
            else
            {
              if ( v10 == 105 )
                goto LABEL_48;
              if ( v10 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x20u;
                goto LABEL_43;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v25 = *(char **)v4;
                    v66 = v4 + 2;
                    if ( v25 && (v13 = (char *)*((_QWORD *)v25 + 1)) != 0LL )
                    {
                      if ( *((_WORD *)v25 + 1) < *(_WORD *)v25 )
                        goto LABEL_192;
                      LODWORD(v12) = *(unsigned __int16 *)v25;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (v12 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                          goto LABEL_192;
                        LODWORD(v12) = *(unsigned __int16 *)v25 >> 1;
                        v61 = 1;
                      }
                      else
                      {
                        v61 = 0;
                      }
                    }
                    else
                    {
                      v13 = "(null)";
                      LODWORD(v12) = 6;
                    }
                    goto LABEL_25;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 != 100 )
                      goto LABEL_25;
LABEL_48:
                    v7 |= 0x40u;
LABEL_49:
                    v27 = 10LL;
LABEL_50:
                    v28 = v4 + 2;
                    v66 = v28;
                    if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                    {
                      v29 = *((_QWORD *)v28 - 1);
                    }
                    else if ( (v7 & 0x20) != 0 )
                    {
                      if ( (v7 & 0x40) != 0 )
                        v29 = *((__int16 *)v28 - 4);
                      else
                        v29 = *((unsigned __int16 *)v28 - 4);
                    }
                    else if ( (v7 & 0x40) != 0 )
                    {
                      v29 = *(v28 - 2);
                    }
                    else
                    {
                      v29 = (unsigned int)*(v28 - 2);
                    }
                    if ( (v7 & 0x40) != 0 && v29 < 0 )
                    {
                      v29 = -v29;
                      v7 |= 0x100u;
                    }
                    v35 = (unsigned int)v29;
                    if ( (v7 & 0x9000) != 0 )
                      v35 = v29;
                    if ( v9 >= 0 )
                    {
                      v7 &= ~8u;
                      if ( v9 > 512 )
                        v9 = 512;
                    }
                    else
                    {
                      v9 = 1;
                    }
                    v36 = v67;
                    v37 = &v73;
                    v58 &= -(v35 != 0);
                    v38 = v58;
                    while ( 1 )
                    {
                      v39 = v9--;
                      if ( v39 <= 0 && !v35 )
                        break;
                      v40 = v35 % v27;
                      v35 /= v27;
                      v41 = v40 + 48;
                      if ( (int)v40 + 48 > 57 )
                        v41 = v40 + v36 + 48;
                      *v37-- = v41;
                    }
                    v60 = v9;
                    LODWORD(v12) = (unsigned int)&v72 + 383 - (_DWORD)v37;
                    v13 = v37 + 1;
                    if ( (v7 & 0x200) != 0 )
                    {
                      if ( !(_DWORD)v12 || (v66 = v28, v58 = v38, *v13 != 48) )
                      {
                        --v13;
                        v66 = v28;
                        LODWORD(v12) = v12 + 1;
                        v58 = v38;
                        *v13 = 48;
                      }
                    }
LABEL_25:
                    v23 = v56;
LABEL_26:
                    if ( v23 )
                      goto LABEL_167;
                    if ( (v7 & 0x40) != 0 )
                    {
                      if ( (v7 & 0x100) != 0 )
                      {
                        v24 = 45;
                        goto LABEL_116;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v24 = 43;
LABEL_116:
                        v65[0] = v24;
LABEL_117:
                        v43 = 1;
                        v58 = 1;
LABEL_121:
                        v44 = v59 - v12 - v43;
                        if ( (v7 & 0xC) == 0 )
                          sub_180094030(32LL, v44, v62, &v57);
                        sub_180094088(v65, v43, v62, &v57);
                        v45 = v62;
                        if ( (v7 & 0xC) == 8 )
                          sub_180094030(48LL, v44, v62, &v57);
                        if ( v61 || (int)v12 <= 0 )
                        {
                          sub_180094088(v13, (unsigned int)v12, v45, &v57);
LABEL_135:
                          v11 = v57;
                        }
                        else
                        {
                          v46 = v13;
                          v47 = v12;
                          while ( 1 )
                          {
                            --v47;
                            v48 = sub_1800966B0(&v64, v46, dword_18015FF34);
                            v49 = v48;
                            if ( v48 == 2 )
                              --v47;
                            if ( v48 <= 0 )
                              break;
                            sub_180093FE0(v64, v62, &v57);
                            v46 += v49;
                            if ( v47 <= 0 )
                            {
                              v9 = v60;
                              v45 = v62;
                              goto LABEL_135;
                            }
                          }
                          v9 = v60;
                          v11 = -1;
                          v45 = v62;
                          v57 = -1;
                        }
                        if ( v11 >= 0 && (v7 & 4) != 0 )
                        {
                          sub_180094030(32LL, v44, v45, &v57);
                          v11 = v57;
                        }
                        v5 = v69;
                        goto LABEL_167;
                      }
                      if ( (v7 & 2) != 0 )
                      {
                        v65[0] = 32;
                        goto LABEL_117;
                      }
                    }
                    v43 = v58;
                    goto LABEL_121;
                  }
LABEL_43:
                  v26 = *(_WORD *)v4;
                  v64 = *(_WORD *)v4;
                  v61 = 1;
                  v66 = v4 + 2;
                  if ( (v7 & 0x20) != 0 )
                  {
                    v63[0] = v26;
                    v63[1] = 0;
                    if ( (int)sub_1800966B0(v71, v63, dword_18015FF34) < 0 )
                      v56 = 1;
                  }
                  else
                  {
                    v71[0] = v26;
                  }
                  v13 = (char *)v71;
                  LODWORD(v12) = 1;
                  goto LABEL_25;
                }
LABEL_77:
                v30 = 7;
LABEL_78:
                v67 = v30;
                if ( (v7 & 0x80u) != 0 )
                {
                  v58 = 2;
                  v65[0] = 48;
                  v65[1] = v30 + 81;
                }
                v27 = 16LL;
                goto LABEL_50;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x20u;
            }
            v13 = *(char **)v4;
            v31 = v9;
            if ( v9 == -1 )
              v31 = 0x7FFFFFFF;
            v66 = v4 + 2;
            if ( (v7 & 0x20) != 0 )
            {
              LODWORD(v12) = 0;
              v32 = v13;
              if ( !v13 )
              {
                v13 = "(null)";
                v32 = "(null)";
              }
              if ( v31 > 0 )
              {
                do
                {
                  if ( !*v32 )
                    break;
                  ++v32;
                  LODWORD(v12) = v12 + 1;
                }
                while ( (int)v12 < v31 );
              }
            }
            else
            {
              v61 = 1;
              v33 = L"(null)";
              if ( v13 )
                v33 = (const wchar_t *)v13;
              v13 = (char *)v33;
              for ( i = v33; v31; ++i )
              {
                --v31;
                if ( !*i )
                  break;
              }
              v12 = i - v33;
            }
            goto LABEL_25;
          }
        }
        else
        {
          if ( v10 != 73 )
          {
            if ( v10 == 104 )
            {
              v7 |= 0x20u;
              goto LABEL_168;
            }
            if ( v10 != 106 )
            {
              if ( v10 == 108 )
              {
                v50 = 4096;
                if ( *v5 != 108 )
                  v50 = 16;
                v7 |= v50;
                if ( *v5 != 108 )
                  v5 = v14;
                ++v5;
                goto LABEL_168;
              }
              if ( v10 != 116 )
              {
                if ( v10 == 119 )
                {
                  v7 |= 0x800u;
                  goto LABEL_168;
                }
                if ( v10 != 122 )
                  goto LABEL_168;
              }
            }
          }
          v7 |= 0x8000u;
          if ( v10 == 73 )
          {
            if ( *v5 == 54 && v14[2] == 52 )
            {
              v5 = v14 + 3;
            }
            else
            {
              if ( *v5 != 51 || v14[2] != 50 )
              {
LABEL_163:
                v51 = (unsigned __int16)*v5;
                LOWORD(v51) = v51 - 88;
                if ( (unsigned __int16)v51 <= 0x20u )
                {
                  v52 = 0x120821001LL;
                  if ( _bittest64(&v52, v51) )
                    goto LABEL_168;
                }
                v68 = 0;
LABEL_166:
                v61 = 1;
                sub_180093FE0(v10, v6, &v57);
                v11 = v57;
LABEL_167:
                v8 = v59;
                v6 = v62;
                goto LABEL_168;
              }
              v5 = v14 + 3;
              v7 &= ~0x8000u;
            }
          }
          else if ( v10 != 106 )
          {
            goto LABEL_163;
          }
        }
LABEL_168:
        v10 = *v5;
        v4 = v66;
      }
      while ( *v5 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_192:
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
