/*
 * XREFs of sub_180092D30 @ 0x180092D30
 * Callers:
 *     _snprintf @ 0x18008D660 (_snprintf.c)
 *     sub_18008DE80 @ 0x18008DE80 (sub_18008DE80.c)
 *     sub_18008E01C @ 0x18008E01C (sub_18008E01C.c)
 *     sprintf @ 0x180090DA0 (sprintf.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 *     sub_1800935D8 @ 0x1800935D8 (sub_1800935D8.c)
 *     sub_180093630 @ 0x180093630 (sub_180093630.c)
 *     sub_18009656C @ 0x18009656C (sub_18009656C.c)
 *     sub_180096644 @ 0x180096644 (sub_180096644.c)
 */

__int64 __fastcall sub_180092D30(__int64 a1, _BYTE *a2, __int64 a3, int *a4)
{
  _BYTE *v5; // r14
  __int64 v6; // r10
  int v7; // edi
  int v8; // r11d
  int v9; // r12d
  int v10; // esi
  int v11; // r15d
  char v12; // r9
  wchar_t *v13; // rbx
  _BYTE *v14; // r8
  int v15; // ecx
  char *v16; // rax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  unsigned __int16 *v24; // rdx
  const wchar_t *v25; // rax
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  char *v31; // rbx
  int v32; // ecx
  char v33; // si
  int v34; // r9d
  unsigned __int64 v35; // rdx
  char v36; // al
  int v37; // eax
  wchar_t *v38; // rsi
  unsigned int v39; // r15d
  unsigned int v40; // r14d
  __int64 v41; // rcx
  __int64 v42; // r15
  int v43; // esi
  wchar_t *v44; // r15
  __int64 v45; // r9
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // eax
  int v51; // ecx
  int v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v55[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v56; // [rsp+3Ch] [rbp-C4h] BYREF
  int v57; // [rsp+40h] [rbp-C0h]
  int v58; // [rsp+44h] [rbp-BCh]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  int v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+54h] [rbp-ACh]
  int v62; // [rsp+58h] [rbp-A8h]
  unsigned int v63; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE *v64; // [rsp+60h] [rbp-A0h]
  char *v65; // [rsp+68h] [rbp-98h]
  _BYTE v66[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+100h] [rbp+0h] BYREF
  char v68; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v69[8]; // [rsp+270h] [rbp+170h] BYREF

  v59 = a1;
  v5 = a2;
  v61 = 0;
  v6 = a1;
  v57 = 0;
  v7 = 0;
  v53 = 0;
  v8 = 0;
  v60 = 0;
  v9 = 0;
  v58 = 0;
  v10 = 0;
  if ( a1 && a2 )
  {
    v11 = 0;
    v54 = 0;
    v56 = 0;
    v62 = 0;
    v12 = *a2;
    if ( *a2 )
    {
      v13 = (wchar_t *)v65;
      do
      {
        v14 = v5++;
        v64 = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int8)(v12 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = byte_1801203C0[v12 - 32] & 0xF;
        v16 = byte_1801203C0;
        v17 = byte_1801203C0[8 * v15 + v62] >> 4;
        v62 = v17;
        if ( !v17 )
        {
          v49 = 0LL;
          goto LABEL_188;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v60 = 0;
          v8 = 0;
          v57 = 0;
          v10 = 0;
          v53 = 0;
          v7 = 0;
          v9 = -1;
          v58 = 0;
          goto LABEL_190;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          switch ( v12 )
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
          goto LABEL_190;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( v12 == 42 )
          {
            v50 = *a4;
            a4 += 2;
            v51 = v7 | 4;
            if ( v50 >= 0 )
              v51 = v7;
            v8 = abs32(v50);
            v7 = v51;
          }
          else
          {
            v8 = v12 + 2 * (5 * v8 - 24);
          }
          v57 = v8;
          goto LABEL_190;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v9 = 0;
          goto LABEL_190;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          if ( v12 == 42 )
          {
            v9 = *a4;
            a4 += 2;
            if ( v9 < 0 )
              v9 = -1;
          }
          else
          {
            v9 = v12 + 2 * (5 * v9 - 24);
          }
          goto LABEL_190;
        }
        v23 = (unsigned int)(v22 - 1);
        if ( (_DWORD)v23 )
        {
          if ( (_DWORD)v23 == 1 )
          {
            if ( v12 > 105 )
            {
              switch ( v12 )
              {
                case 'n':
                  v38 = *(wchar_t **)a4;
                  a4 += 2;
                  if ( !(unsigned int)sub_18009656C(v23, (unsigned int)(v12 - 110), v14) )
                    goto LABEL_192;
                  if ( (v7 & 0x20) != 0 )
                    *v38 = v11;
                  else
                    *(_DWORD *)v38 = v11;
                  v10 = v53;
                  v60 = 1;
                  goto LABEL_25;
                case 'o':
                  v26 = 8LL;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto LABEL_56;
                case 'p':
                  v9 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_79;
              }
              if ( v12 != 115 )
              {
                if ( v12 == 117 )
                  goto LABEL_55;
                if ( v12 != 120 )
                  goto LABEL_25;
                v28 = 39;
                goto LABEL_80;
              }
            }
            else
            {
              if ( v12 == 105 )
                goto LABEL_54;
              if ( v12 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x800u;
                goto LABEL_49;
              }
              if ( v12 != 83 )
              {
                if ( v12 != 88 )
                {
                  if ( v12 == 90 )
                  {
                    v24 = *(unsigned __int16 **)a4;
                    a4 += 2;
                    if ( v24 && (v13 = (wchar_t *)*((_QWORD *)v24 + 1)) != 0LL )
                    {
                      if ( v24[1] < *v24 )
                        goto LABEL_192;
                      v23 = *v24;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (v23 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                          goto LABEL_192;
                        v58 = 1;
                        v23 = (unsigned int)v23 >> 1;
                      }
                      else
                      {
                        v58 = 0;
                      }
                    }
                    else
                    {
                      v13 = (wchar_t *)"(null)";
                      v23 = 6LL;
                    }
                    v56 = v23;
                    goto LABEL_25;
                  }
                  if ( v12 != 99 )
                  {
                    if ( v12 != 100 )
                      goto LABEL_25;
LABEL_54:
                    v7 |= 0x40u;
LABEL_55:
                    v26 = 10LL;
LABEL_56:
                    a4 += 2;
                    if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                    {
                      v27 = *((_QWORD *)a4 - 1);
                    }
                    else if ( (v7 & 0x20) != 0 )
                    {
                      if ( (v7 & 0x40) != 0 )
                        v27 = *((__int16 *)a4 - 4);
                      else
                        v27 = *((unsigned __int16 *)a4 - 4);
                    }
                    else if ( (v7 & 0x40) != 0 )
                    {
                      v27 = *(a4 - 2);
                    }
                    else
                    {
                      v27 = (unsigned int)*(a4 - 2);
                    }
                    if ( (v7 & 0x40) != 0 && v27 < 0 )
                    {
                      v27 = -v27;
                      v7 |= 0x100u;
                    }
                    v30 = (unsigned int)v27;
                    if ( (v7 & 0x9000) != 0 )
                      v30 = v27;
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
                    v31 = &v68;
                    v32 = v30 != 0 ? v10 : 0;
                    v33 = v61;
                    v53 = v32;
                    v34 = v32;
                    while ( 1 )
                    {
                      v23 = (unsigned int)v9--;
                      if ( (int)v23 <= 0 && !v30 )
                        break;
                      v35 = v30 % v26;
                      v30 /= v26;
                      v36 = v35 + 48;
                      if ( (int)v35 + 48 > 57 )
                        v36 = v35 + v33 + 48;
                      *v31-- = v36;
                    }
                    v37 = (unsigned int)&v67 + 367 - (_DWORD)v31;
                    v10 = v34;
                    v13 = (wchar_t *)(v31 + 1);
                    v56 = v37;
                    if ( (v7 & 0x200) != 0 )
                    {
                      if ( !v37 || (v53 = v34, *(_BYTE *)v13 != 48) )
                      {
                        v13 = (wchar_t *)((char *)v13 - 1);
                        v53 = v34;
                        v56 = v37 + 1;
                        v10 = v34;
                        *(_BYTE *)v13 = 48;
                      }
                    }
LABEL_25:
                    if ( v60 )
                      goto LABEL_189;
                    if ( (v7 & 0x40) == 0 )
                      goto LABEL_121;
                    if ( (v7 & 0x100) != 0 )
                    {
                      v55[0] = 45;
                      goto LABEL_118;
                    }
                    if ( (v7 & 1) != 0 )
                    {
                      v55[0] = 43;
                      goto LABEL_118;
                    }
                    if ( (v7 & 2) != 0 )
                    {
                      v55[0] = 32;
LABEL_118:
                      v39 = 1;
                      v53 = 1;
                    }
                    else
                    {
LABEL_121:
                      v39 = v53;
                    }
                    v40 = v57 - v56 - v39;
                    if ( (v7 & 0xC) == 0 )
                    {
                      LOBYTE(v23) = 32;
                      sub_1800935D8(v23, v40, v59, &v54);
                    }
                    sub_180093630(v55, v39, v59, &v54);
                    v42 = v59;
                    if ( (v7 & 0xC) == 8 )
                    {
                      LOBYTE(v41) = 48;
                      sub_1800935D8(v41, v40, v59, &v54);
                    }
                    v43 = v56;
                    if ( v58 && v56 > 0 )
                    {
                      v44 = v13;
                      while ( 1 )
                      {
                        v45 = *v44++;
                        --v43;
                        if ( (unsigned int)sub_180096644(&v63, v69, 6LL, v45) || !v63 )
                          break;
                        sub_180093630(v69, v63, v59, &v54);
                        if ( !v43 )
                          goto LABEL_135;
                      }
                      v11 = -1;
                      v54 = -1;
                    }
                    else
                    {
                      sub_180093630(v13, (unsigned int)v56, v42, &v54);
LABEL_135:
                      v11 = v54;
                    }
                    if ( v11 >= 0 && (v7 & 4) != 0 )
                    {
                      LOBYTE(v46) = 32;
                      sub_1800935D8(v46, v40, v59, &v54);
                      v11 = v54;
                    }
                    v5 = v64;
                    v10 = v53;
                    goto LABEL_189;
                  }
LABEL_49:
                  a4 += 2;
                  if ( (v7 & 0x810) != 0 )
                  {
                    if ( (unsigned int)sub_180096644(&v56, v66, 512LL, *((unsigned __int16 *)a4 - 4)) )
                      v60 = 1;
                  }
                  else
                  {
                    v66[0] = *((_BYTE *)a4 - 8);
                    v56 = 1;
                  }
                  v13 = (wchar_t *)v66;
                  goto LABEL_25;
                }
LABEL_79:
                v28 = 7;
LABEL_80:
                v61 = v28;
                if ( (v7 & 0x80u) != 0 )
                {
                  v55[0] = 48;
                  v55[1] = v28 + 81;
                  v10 = 2;
                }
                v26 = 16LL;
                goto LABEL_56;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x800u;
            }
            v13 = *(wchar_t **)a4;
            v23 = (unsigned int)v9;
            if ( v9 == -1 )
              v23 = 0x7FFFFFFFLL;
            a4 += 2;
            if ( (v7 & 0x810) != 0 )
            {
              v25 = v13;
              if ( !v13 )
              {
                v13 = L"(null)";
                v25 = L"(null)";
              }
              v58 = 1;
              while ( (_DWORD)v23 )
              {
                v23 = (unsigned int)(v23 - 1);
                if ( !*v25 )
                  break;
                ++v25;
              }
              v29 = v25 - v13;
            }
            else
            {
              v29 = (__int64)"(null)";
              if ( v13 )
                v29 = (__int64)v13;
              v13 = (wchar_t *)v29;
              while ( (_DWORD)v23 )
              {
                v23 = (unsigned int)(v23 - 1);
                if ( !*(_BYTE *)v29 )
                  break;
                ++v29;
              }
              LODWORD(v29) = v29 - (_DWORD)v13;
            }
            v56 = v29;
            goto LABEL_25;
          }
        }
        else
        {
          switch ( v12 )
          {
            case 'I':
              goto LABEL_147;
            case 'h':
              v7 |= 0x20u;
              break;
            case 'j':
              goto LABEL_147;
            case 'l':
              v47 = 4096;
              if ( *v5 != 108 )
                v47 = 16;
              v7 |= v47;
              if ( *v5 != 108 )
                v5 = v14;
              ++v5;
              break;
            case 't':
              goto LABEL_147;
            case 'w':
              v7 |= 0x800u;
              break;
            case 'z':
LABEL_147:
              v7 |= 0x8000u;
              if ( v12 == 73 )
              {
                if ( *v5 == 54 && v14[2] == 52 )
                {
                  v5 = v14 + 3;
                }
                else
                {
                  if ( *v5 != 51 || v14[2] != 50 )
                  {
LABEL_162:
                    LOBYTE(v16) = *v5 - 88;
                    if ( (unsigned __int8)v16 <= 0x20u )
                    {
                      v48 = 0x120821001LL;
                      if ( _bittest64(&v48, (unsigned __int64)v16) )
                        break;
                    }
                    v49 = 0LL;
                    v62 = 0;
LABEL_188:
                    v58 = 0;
                    LOBYTE(v49) = v12;
                    sub_180093580(v49, v6, &v54);
                    v11 = v54;
LABEL_189:
                    v8 = v57;
                    v6 = v59;
                    break;
                  }
                  v5 = v14 + 3;
                  v7 &= ~0x8000u;
                }
              }
              else if ( v12 != 106 )
              {
                goto LABEL_162;
              }
              break;
          }
        }
LABEL_190:
        v12 = *v5;
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
