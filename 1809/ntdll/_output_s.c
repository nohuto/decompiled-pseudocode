/*
 * XREFs of _output_s @ 0x18009BCA0
 * Callers:
 *     _soutput_s @ 0x18009C614 (_soutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _safecrt_wctomb_s @ 0x18009C53C (_safecrt_wctomb_s.c)
 *     write_char_1 @ 0x18009C6F0 (write_char_1.c)
 *     write_multi_char_1 @ 0x18009C748 (write_multi_char_1.c)
 *     write_string_1 @ 0x18009C7A0 (write_string_1.c)
 */

__int64 __fastcall output_s(__int64 a1, const char *a2, int *a3)
{
  const char *v4; // r15
  __int64 v5; // r11
  int v6; // edi
  int v7; // esi
  unsigned int v8; // r12d
  __int64 v9; // r14
  int v10; // r10d
  char v11; // r9
  const wchar_t *v12; // rbx
  const char *v13; // r8
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  unsigned __int16 *v19; // rax
  const wchar_t *v20; // r14
  int v21; // eax
  int v22; // eax
  const char *v23; // rax
  unsigned __int64 v24; // r8
  char *v25; // rbx
  int v26; // ecx
  char v27; // r12
  unsigned int v28; // r9d
  char *v29; // rdx
  unsigned __int64 v30; // rdx
  char v31; // al
  int v32; // eax
  bool v33; // zf
  unsigned int v34; // r15d
  __int64 v35; // rcx
  __int64 v36; // rsi
  unsigned __int16 *v37; // r12
  int v38; // esi
  __int64 v39; // r9
  __int64 v40; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ecx
  _BYTE v47[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v48; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h]
  int v50; // [rsp+3Ch] [rbp-C4h]
  int v51; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+44h] [rbp-BCh]
  int v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+5Ch] [rbp-A4h]
  int v57; // [rsp+60h] [rbp-A0h]
  const char *v58; // [rsp+68h] [rbp-98h]
  unsigned int v59[4]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v60[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h] BYREF
  char v62; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v63[8]; // [rsp+280h] [rbp+180h] BYREF

  v54 = a1;
  v56 = 0;
  v55 = 0;
  v4 = a2;
  v50 = 0;
  v5 = a1;
  v49 = 0;
  v6 = 0;
  v57 = 0;
  v7 = 0;
  v52 = 0;
  v8 = 0;
  if ( !a1 || !a2 )
    goto LABEL_187;
  v48 = 0;
  LODWORD(v9) = 0;
  v51 = 0;
  v10 = 0;
  v11 = *a2;
  if ( !*a2 )
    return (unsigned int)v48;
  v12 = (const wchar_t *)v58;
  do
  {
    v13 = v4++;
    v58 = v4;
    if ( v48 < 0 )
      break;
    if ( (unsigned __int8)(v11 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = _lookuptable_s[v11 - 32] & 0xF;
    v15 = (unsigned int)(v14 + v10 + 8 * v14);
    v10 = _lookuptable_s[v15] >> 4;
    v53 = v10;
    switch ( v10 )
    {
      case 8:
        goto LABEL_187;
      case 0:
        v44 = 0LL;
        goto LABEL_186;
      case 1:
        v7 = -1;
        v57 = 0;
        v50 = -1;
        v8 = 0;
        v55 = 0;
        v6 = 0;
        v49 = 0;
        v52 = 0;
        break;
      case 2:
        switch ( v11 )
        {
          case ' ':
            v6 |= 2u;
            break;
          case '#':
            v6 |= 0x80u;
            break;
          case '+':
            v6 |= 1u;
            break;
          case '-':
            v6 |= 4u;
            break;
          case '0':
            v6 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v11 == 42 )
        {
          v45 = *a3;
          a3 += 2;
          v46 = v6 | 4;
          if ( v45 >= 0 )
            v46 = v6;
          v6 = v46;
          v55 = abs32(v45);
        }
        else
        {
          v55 = v11 + 2 * (5 * v55 - 24);
        }
        break;
      case 4:
        v7 = 0;
        v50 = 0;
        break;
      case 5:
        if ( v11 != 42 )
        {
          v7 = v11 + 2 * (5 * v7 - 24);
          goto LABEL_167;
        }
        v7 = *a3;
        a3 += 2;
        v50 = v7;
        if ( v7 < 0 )
        {
          v7 = -1;
LABEL_167:
          v50 = v7;
        }
        break;
      case 6:
        switch ( v11 )
        {
          case 'I':
            goto LABEL_145;
          case 'h':
            v6 |= 0x20u;
            goto LABEL_134;
          case 'j':
            goto LABEL_145;
          case 'l':
            v42 = 4096;
            if ( *v4 != 108 )
              v42 = 16;
            v6 |= v42;
            if ( *v4 != 108 )
              v4 = v13;
            ++v4;
            goto LABEL_134;
          case 't':
            goto LABEL_145;
          case 'w':
            v6 |= 0x800u;
            goto LABEL_134;
          case 'z':
LABEL_145:
            v6 |= 0x8000u;
            if ( v11 == 73 )
            {
              if ( *v4 == 54 && v13[2] == 52 )
              {
                v4 = v13 + 3;
                goto LABEL_134;
              }
              if ( *v4 == 51 && v13[2] == 50 )
              {
                v4 = v13 + 3;
                v6 &= ~0x8000u;
                goto LABEL_134;
              }
            }
            else if ( v11 == 106 )
            {
              goto LABEL_134;
            }
            LOBYTE(v15) = *v4 - 88;
            if ( (unsigned __int8)v15 <= 0x20u )
            {
              v43 = 0x120821001LL;
              if ( _bittest64(&v43, v15) )
                goto LABEL_134;
            }
            v44 = 0LL;
            v53 = 0;
LABEL_186:
            v52 = 0;
            LOBYTE(v44) = v11;
            write_char_1(v44, v5, &v48);
LABEL_133:
            v10 = v53;
            v5 = v54;
            break;
        }
        break;
      case 7:
        if ( v11 > 105 )
        {
          switch ( v11 )
          {
            case 'n':
              goto LABEL_187;
            case 'o':
              v17 = 8LL;
              if ( (v6 & 0x80u) != 0 )
                v6 |= 0x200u;
              goto LABEL_28;
            case 'p':
              v7 = 16;
              v6 |= 0x8000u;
              goto LABEL_75;
          }
          if ( v11 != 115 )
          {
            v16 = (unsigned int)(v11 - 117);
            if ( v11 != 117 )
            {
              if ( v11 != 120 )
                goto LABEL_107;
              v22 = 39;
              goto LABEL_76;
            }
LABEL_27:
            v17 = 10LL;
LABEL_28:
            a3 += 2;
            if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
            {
              v18 = *((_QWORD *)a3 - 1);
            }
            else if ( (v6 & 0x20) != 0 )
            {
              if ( (v6 & 0x40) != 0 )
                v18 = *((__int16 *)a3 - 4);
              else
                v18 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v6 & 0x40) != 0 )
            {
              v18 = *(a3 - 2);
            }
            else
            {
              v18 = (unsigned int)*(a3 - 2);
            }
            if ( (v6 & 0x40) != 0 && v18 < 0 )
            {
              v18 = -v18;
              v6 |= 0x100u;
            }
            v24 = (unsigned int)v18;
            if ( (v6 & 0x9000) != 0 )
              v24 = v18;
            if ( v7 >= 0 )
            {
              v6 &= ~8u;
              if ( v7 > 512 )
                v7 = 512;
            }
            else
            {
              v7 = 1;
            }
            v25 = &v62;
            v26 = v24 != 0 ? v8 : 0;
            v27 = v56;
            v49 = v26;
            v28 = v26;
            while ( 1 )
            {
              v16 = (unsigned int)v7;
              v29 = v25;
              --v7;
              if ( (int)v16 <= 0 && !v24 )
                break;
              v30 = v24 % v17;
              v24 /= v17;
              v31 = v30 + 48;
              if ( (int)v30 + 48 > 57 )
                v31 = v30 + v27 + 48;
              *v25-- = v31;
            }
            v50 = v7;
            v32 = (unsigned int)&v61 + 383 - (_DWORD)v25;
            v12 = (const wchar_t *)(v25 + 1);
            v51 = v32;
            LODWORD(v9) = v32;
            v8 = v28;
            if ( (v6 & 0x200) != 0 )
            {
              if ( !v32 || (v33 = *(_BYTE *)v12 == 48, v49 = v28, !v33) )
              {
                LODWORD(v9) = v32 + 1;
                *v29 = 48;
                v51 = v32 + 1;
                v12 = (const wchar_t *)v29;
                v8 = v28;
                v49 = v28;
              }
            }
            goto LABEL_107;
          }
        }
        else
        {
          if ( v11 == 105 )
            goto LABEL_26;
          v16 = (unsigned int)(v11 - 67);
          if ( v11 == 67 )
          {
            if ( (v6 & 0x830) == 0 )
              v6 |= 0x800u;
            goto LABEL_51;
          }
          if ( v11 != 83 )
          {
            if ( v11 != 88 )
            {
              v16 = (unsigned int)(v11 - 90);
              if ( v11 != 90 )
              {
                v16 = (unsigned int)(v11 - 99);
                if ( v11 != 99 )
                {
                  if ( v11 == 100 )
                  {
LABEL_26:
                    v6 |= 0x40u;
                    goto LABEL_27;
                  }
LABEL_107:
                  if ( v57 )
                    goto LABEL_133;
                  if ( (v6 & 0x40) != 0 )
                  {
                    if ( (v6 & 0x100) != 0 )
                    {
                      v47[0] = 45;
                      goto LABEL_115;
                    }
                    if ( (v6 & 1) != 0 )
                    {
                      v47[0] = 43;
                      goto LABEL_115;
                    }
                    if ( (v6 & 2) != 0 )
                    {
                      v47[0] = 32;
LABEL_115:
                      v8 = 1;
                      v49 = 1;
                    }
                  }
                  v34 = v55 - v9 - v8;
                  if ( (v6 & 0xC) == 0 )
                  {
                    LOBYTE(v16) = 32;
                    write_multi_char_1(v16, v34, v54, &v48);
                  }
                  write_string_1(v47, v8, v54, &v48);
                  v36 = v54;
                  if ( (v6 & 0xC) == 8 )
                  {
                    LOBYTE(v35) = 48;
                    write_multi_char_1(v35, v34, v54, &v48);
                  }
                  if ( v52 && (int)v9 > 0 )
                  {
                    v37 = (unsigned __int16 *)v12;
                    v38 = v9;
                    while ( 1 )
                    {
                      v39 = *v37++;
                      --v38;
                      if ( (unsigned int)safecrt_wctomb_s(v59, v63, 6LL, v39) || !v59[0] )
                        break;
                      write_string_1(v63, v59[0], v54, &v48);
                      if ( !v38 )
                      {
                        v8 = v49;
                        v36 = v54;
                        goto LABEL_129;
                      }
                    }
                    v48 = -1;
                    v8 = v49;
                    v36 = v54;
                  }
                  else
                  {
                    write_string_1(v12, (unsigned int)v9, v36, &v48);
                  }
LABEL_129:
                  if ( v48 >= 0 && (v6 & 4) != 0 )
                  {
                    LOBYTE(v40) = 32;
                    write_multi_char_1(v40, v34, v36, &v48);
                  }
                  v4 = v58;
                  v7 = v50;
                  goto LABEL_133;
                }
LABEL_51:
                a3 += 2;
                if ( (v6 & 0x810) != 0 )
                {
                  v21 = safecrt_wctomb_s(&v51, v60, 512LL, *((unsigned __int16 *)a3 - 4));
                  LODWORD(v9) = v51;
                  if ( v21 )
                    v57 = 1;
                }
                else
                {
                  LODWORD(v9) = 1;
                  v60[0] = *((_BYTE *)a3 - 8);
                  v51 = 1;
                }
                v12 = (const wchar_t *)v60;
                goto LABEL_107;
              }
              v19 = *(unsigned __int16 **)a3;
              a3 += 2;
              if ( v19 && (v12 = (const wchar_t *)*((_QWORD *)v19 + 1)) != 0LL )
              {
                v16 = *v19;
                if ( v19[1] < (unsigned __int16)v16 )
                  goto LABEL_187;
                LODWORD(v9) = (unsigned __int16)v16;
                if ( (v6 & 0x800) != 0 )
                {
                  if ( (v16 & 1) != 0 || ((unsigned __int8)v12 & 1) != 0 )
                    goto LABEL_187;
                  v52 = 1;
                  LODWORD(v9) = (unsigned __int16)v16 >> 1;
                }
                else
                {
                  v52 = 0;
                }
              }
              else
              {
                v12 = (const wchar_t *)"(null)";
                LODWORD(v9) = 6;
              }
LABEL_40:
              v51 = v9;
              goto LABEL_107;
            }
LABEL_75:
            v22 = 7;
LABEL_76:
            v56 = v22;
            if ( (v6 & 0x80u) != 0 )
            {
              v47[0] = 48;
              v47[1] = v22 + 81;
              v8 = 2;
            }
            v17 = 16LL;
            goto LABEL_28;
          }
          if ( (v6 & 0x830) == 0 )
            v6 |= 0x800u;
        }
        v12 = *(const wchar_t **)a3;
        v16 = (unsigned int)v7;
        if ( v7 == -1 )
          v16 = 0x7FFFFFFFLL;
        a3 += 2;
        if ( (v6 & 0x810) != 0 )
        {
          v20 = v12;
          if ( !v12 )
          {
            v12 = L"(null)";
            v20 = L"(null)";
          }
          v52 = 1;
          while ( (_DWORD)v16 )
          {
            v16 = (unsigned int)(v16 - 1);
            if ( !*v20 )
              break;
            ++v20;
          }
          v9 = v20 - v12;
        }
        else
        {
          v23 = "(null)";
          if ( v12 )
            v23 = (const char *)v12;
          v12 = (const wchar_t *)v23;
          while ( (_DWORD)v16 )
          {
            v16 = (unsigned int)(v16 - 1);
            if ( !*v23 )
              break;
            ++v23;
          }
          LODWORD(v9) = (_DWORD)v23 - (_DWORD)v12;
        }
        goto LABEL_40;
    }
LABEL_134:
    v11 = *v4;
  }
  while ( *v4 );
  if ( !v10 || v10 == 7 )
    return (unsigned int)v48;
LABEL_187:
  invalid_parameter();
  return 0xFFFFFFFFLL;
}
