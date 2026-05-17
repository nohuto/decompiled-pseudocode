/*
 * XREFs of sub_180098540 @ 0x180098540
 * Callers:
 *     sub_180098E98 @ 0x180098E98 (sub_180098E98.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_180098DC0 @ 0x180098DC0 (sub_180098DC0.c)
 *     sub_180098F94 @ 0x180098F94 (sub_180098F94.c)
 *     sub_180098FEC @ 0x180098FEC (sub_180098FEC.c)
 *     sub_180099044 @ 0x180099044 (sub_180099044.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180098540(__int64 a1, _BYTE *a2, int *a3)
{
  int v5; // edi
  int v6; // esi
  unsigned int v7; // r15d
  wchar_t *v8; // rbx
  char v10; // r9
  __int64 v11; // r12
  int v12; // r10d
  _BYTE *v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // r10
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  const wchar_t *v24; // r12
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  const char *v31; // rax
  unsigned __int64 v32; // r8
  _BYTE *v33; // rbx
  int v34; // ecx
  char v35; // r15
  unsigned int v36; // r9d
  unsigned __int64 v37; // rdx
  char v38; // al
  int v39; // eax
  bool v40; // zf
  unsigned int v41; // r14d
  __int64 v42; // rcx
  __int64 v43; // rsi
  wchar_t *v44; // r15
  int v45; // esi
  __int64 v46; // r9
  __int64 v47; // rcx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  _BYTE v52[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+34h] [rbp-CCh] BYREF
  int v54; // [rsp+38h] [rbp-C8h]
  int v55; // [rsp+3Ch] [rbp-C4h]
  int v56; // [rsp+40h] [rbp-C0h] BYREF
  int v57; // [rsp+44h] [rbp-BCh]
  int v58; // [rsp+48h] [rbp-B8h]
  unsigned int v59; // [rsp+4Ch] [rbp-B4h]
  __int64 v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+5Ch] [rbp-A4h]
  unsigned int v63; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v64; // [rsp+68h] [rbp-98h]
  _BYTE v65[512]; // [rsp+70h] [rbp-90h] BYREF
  char v66[8]; // [rsp+270h] [rbp+170h] BYREF

  v60 = a1;
  v61 = 0;
  v5 = 0;
  v59 = 0;
  v6 = 0;
  v55 = 0;
  v7 = 0;
  v54 = 0;
  v8 = 0LL;
  v62 = 0;
  memset(v65, 0, sizeof(v65));
  v57 = 0;
  if ( !a1 || !a2 )
    goto LABEL_186;
  v10 = *a2;
  LODWORD(v11) = 0;
  v53 = 0;
  v12 = 0;
  v56 = 0;
  if ( !v10 )
    return (unsigned int)v53;
  do
  {
    v13 = a2++;
    v64 = a2;
    if ( v53 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x5Au )
      v14 = 0;
    else
      v14 = byte_180120500[v10 - 32] & 0xF;
    v15 = (unsigned int)v10;
    v16 = (unsigned int)(v14 + v12 + 8 * v14);
    v12 = byte_180120500[v16] >> 4;
    v58 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_186;
      case 0:
        goto LABEL_157;
      case 1:
        v6 = -1;
        v62 = 0;
        v55 = -1;
        v7 = 0;
        v59 = 0;
        v5 = 0;
        v54 = 0;
        v57 = 0;
        break;
      case 2:
        switch ( v10 )
        {
          case ' ':
            v5 |= 2u;
            break;
          case '#':
            v5 |= 0x80u;
            break;
          case '+':
            v5 |= 1u;
            break;
          case '-':
            v5 |= 4u;
            break;
          case '0':
            v5 |= 8u;
            break;
        }
        break;
      case 3:
        if ( v10 == 42 )
        {
          v49 = *a3;
          a3 += 2;
          v50 = v5 | 4;
          if ( v49 >= 0 )
            v50 = v5;
          v5 = v50;
          v59 = abs32(v49);
        }
        else
        {
          v59 = v15 + 2 * (5 * v59 - 24);
        }
        break;
      case 4:
        v6 = 0;
        v55 = 0;
        break;
      case 5:
        if ( v10 != 42 )
        {
          v6 = v15 + 2 * (5 * v6 - 24);
          goto LABEL_162;
        }
        v6 = *a3;
        a3 += 2;
        v55 = v6;
        if ( v6 < 0 )
        {
          v6 = -1;
LABEL_162:
          v55 = v6;
        }
        break;
      case 6:
        switch ( v10 )
        {
          case 'I':
            goto LABEL_139;
          case 'h':
            v5 |= 0x20u;
            goto LABEL_182;
          case 'j':
            goto LABEL_139;
          case 'l':
            v48 = 4096;
            if ( *a2 != 108 )
              v48 = 16;
            v5 |= v48;
            if ( *a2 != 108 )
              a2 = v13;
            ++a2;
            goto LABEL_182;
          case 't':
            goto LABEL_139;
          case 'w':
            v5 |= 0x800u;
            goto LABEL_182;
          case 'z':
LABEL_139:
            v5 |= 0x8000u;
            if ( v10 == 73 )
            {
              if ( *a2 == 54 && v13[2] == 52 )
              {
                a2 = v13 + 3;
              }
              else
              {
                if ( *a2 != 51 || v13[2] != 50 )
                {
LABEL_154:
                  LOBYTE(v16) = *a2 - 88;
                  if ( (unsigned __int8)v16 <= 0x20u )
                  {
                    v15 = 0x120821001LL;
                    if ( _bittest64(&v15, v16) )
                      goto LABEL_182;
                  }
                  v58 = 0;
LABEL_157:
                  LOBYTE(v15) = v10;
                  v57 = 0;
                  sub_180098F94(v15, v60, &v53);
LABEL_181:
                  v12 = v58;
                  goto LABEL_182;
                }
                a2 = v13 + 3;
                v5 &= ~0x8000u;
              }
            }
            else if ( v10 != 106 )
            {
              goto LABEL_154;
            }
            break;
        }
        break;
      case 7:
        if ( (int)v15 > 105 )
        {
          v26 = v15 - 110;
          if ( !v26 )
            goto LABEL_186;
          v27 = v26 - 1;
          if ( !v27 )
          {
            v21 = 8LL;
            if ( (v5 & 0x80u) != 0 )
              v5 |= 0x200u;
            goto LABEL_27;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
            v6 = 16;
            v5 |= 0x8000u;
            goto LABEL_74;
          }
          v29 = v28 - 3;
          if ( v29 )
          {
            v17 = (unsigned int)(v29 - 2);
            if ( (_DWORD)v17 )
            {
              if ( (_DWORD)v17 != 3 )
                goto LABEL_106;
              v30 = 39;
              goto LABEL_75;
            }
LABEL_26:
            v21 = 10LL;
LABEL_27:
            a3 += 2;
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v22 = *((_QWORD *)a3 - 1);
            }
            else if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) != 0 )
                v22 = *((__int16 *)a3 - 4);
              else
                v22 = *((unsigned __int16 *)a3 - 4);
            }
            else if ( (v5 & 0x40) != 0 )
            {
              v22 = *(a3 - 2);
            }
            else
            {
              v22 = (unsigned int)*(a3 - 2);
            }
            if ( (v5 & 0x40) != 0 && v22 < 0 )
            {
              v22 = -v22;
              v5 |= 0x100u;
            }
            v32 = (unsigned int)v22;
            if ( (v5 & 0x9000) != 0 )
              v32 = v22;
            if ( v6 >= 0 )
            {
              v5 &= ~8u;
              if ( v6 > 512 )
                v6 = 512;
            }
            else
            {
              v6 = 1;
            }
            v33 = &v65[511];
            v34 = v32 != 0 ? v7 : 0;
            v35 = v61;
            v54 = v34;
            v36 = v34;
            while ( 1 )
            {
              v17 = (unsigned int)v6--;
              if ( (int)v17 <= 0 && !v32 )
                break;
              v37 = v32 % v21;
              v32 /= v21;
              v38 = v37 + 48;
              if ( (int)v37 + 48 > 57 )
                v38 = v37 + v35 + 48;
              *v33-- = v38;
            }
            v55 = v6;
            v39 = (unsigned int)&v65[144] + 367 - (_DWORD)v33;
            v7 = v36;
            v8 = (wchar_t *)(v33 + 1);
            v56 = v39;
            LODWORD(v11) = v39;
            if ( (v5 & 0x200) != 0 )
            {
              if ( !v39 || (v40 = *(_BYTE *)v8 == 48, v54 = v36, !v40) )
              {
                v8 = (wchar_t *)((char *)v8 - 1);
                v54 = v36;
                LODWORD(v11) = v39 + 1;
                v7 = v36;
                v56 = v39 + 1;
                *(_BYTE *)v8 = 48;
              }
            }
            goto LABEL_106;
          }
        }
        else
        {
          if ( (_DWORD)v15 == 105 )
            goto LABEL_25;
          v17 = (unsigned int)(v15 - 67);
          if ( !(_DWORD)v17 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
            goto LABEL_50;
          }
          v18 = v17 - 16;
          if ( v18 )
          {
            v19 = v18 - 5;
            if ( v19 )
            {
              v20 = v19 - 2;
              if ( v20 )
              {
                v17 = (unsigned int)(v20 - 9);
                if ( (_DWORD)v17 )
                {
                  if ( (_DWORD)v17 == 1 )
                  {
LABEL_25:
                    v5 |= 0x40u;
                    goto LABEL_26;
                  }
LABEL_106:
                  if ( v62 )
                    goto LABEL_181;
                  if ( (v5 & 0x40) != 0 )
                  {
                    if ( (v5 & 0x100) != 0 )
                    {
                      v52[0] = 45;
                      goto LABEL_114;
                    }
                    if ( (v5 & 1) != 0 )
                    {
                      v52[0] = 43;
                      goto LABEL_114;
                    }
                    if ( (v5 & 2) != 0 )
                    {
                      v52[0] = 32;
LABEL_114:
                      v7 = 1;
                      v54 = 1;
                    }
                  }
                  v41 = v59 - v11 - v7;
                  if ( (v5 & 0xC) == 0 )
                  {
                    LOBYTE(v17) = 32;
                    sub_180098FEC(v17, v41, v60, &v53);
                  }
                  sub_180099044(v52, v7, v60, &v53);
                  v43 = v60;
                  if ( (v5 & 0xC) == 8 )
                  {
                    LOBYTE(v42) = 48;
                    sub_180098FEC(v42, v41, v60, &v53);
                  }
                  if ( v57 && (int)v11 > 0 )
                  {
                    v44 = v8;
                    v45 = v11;
                    while ( 1 )
                    {
                      v46 = *v44++;
                      --v45;
                      if ( (unsigned int)sub_180098DC0(&v63, v66, 6LL, v46) || !v63 )
                        break;
                      sub_180099044(v66, v63, v60, &v53);
                      if ( !v45 )
                        goto LABEL_127;
                    }
                    v53 = -1;
LABEL_127:
                    v7 = v54;
                    v43 = v60;
                  }
                  else
                  {
                    sub_180099044(v8, (unsigned int)v11, v43, &v53);
                  }
                  if ( v53 >= 0 && (v5 & 4) != 0 )
                  {
                    LOBYTE(v47) = 32;
                    sub_180098FEC(v47, v41, v43, &v53);
                    v6 = v55;
                    a2 = v64;
                  }
                  else
                  {
                    a2 = v64;
                    v6 = v55;
                  }
                  goto LABEL_181;
                }
LABEL_50:
                a3 += 2;
                if ( (v5 & 0x810) != 0 )
                {
                  v25 = sub_180098DC0(&v56, v65, 512LL, *((unsigned __int16 *)a3 - 4));
                  LODWORD(v11) = v56;
                  if ( v25 )
                    v62 = 1;
                }
                else
                {
                  LODWORD(v11) = 1;
                  v65[0] = *((_BYTE *)a3 - 8);
                  v56 = 1;
                }
                v8 = (wchar_t *)v65;
                goto LABEL_106;
              }
              v17 = *(_QWORD *)a3;
              a3 += 2;
              if ( v17 && (v8 = *(wchar_t **)(v17 + 8)) != 0LL )
              {
                if ( *(_WORD *)(v17 + 2) < *(_WORD *)v17 )
                  goto LABEL_186;
                v23 = *(_WORD *)v17;
                LODWORD(v11) = *(unsigned __int16 *)v17;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (v11 & 1) != 0 || ((unsigned __int8)v8 & 1) != 0 )
                    goto LABEL_186;
                  v57 = 1;
                  LODWORD(v11) = v23 >> 1;
                }
                else
                {
                  v57 = 0;
                }
              }
              else
              {
                v8 = (wchar_t *)"(null)";
                LODWORD(v11) = 6;
              }
LABEL_39:
              v56 = v11;
              goto LABEL_106;
            }
LABEL_74:
            v30 = 7;
LABEL_75:
            v61 = v30;
            if ( (v5 & 0x80u) != 0 )
            {
              v52[0] = 48;
              v52[1] = v30 + 81;
              v7 = 2;
            }
            v21 = 16LL;
            goto LABEL_27;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v8 = *(wchar_t **)a3;
        v17 = (unsigned int)v6;
        if ( v6 == -1 )
          v17 = 0x7FFFFFFFLL;
        a3 += 2;
        if ( (v5 & 0x810) != 0 )
        {
          v24 = v8;
          if ( !v8 )
          {
            v8 = L"(null)";
            v24 = L"(null)";
          }
          v57 = 1;
          while ( (_DWORD)v17 )
          {
            v17 = (unsigned int)(v17 - 1);
            if ( !*v24 )
              break;
            ++v24;
          }
          v11 = v24 - v8;
        }
        else
        {
          v31 = "(null)";
          if ( v8 )
            v31 = (const char *)v8;
          v8 = (wchar_t *)v31;
          while ( (_DWORD)v17 )
          {
            v17 = (unsigned int)(v17 - 1);
            if ( !*v31 )
              break;
            ++v31;
          }
          LODWORD(v11) = (_DWORD)v31 - (_DWORD)v8;
        }
        goto LABEL_39;
    }
LABEL_182:
    v10 = *a2;
  }
  while ( *a2 );
  if ( !v12 || v12 == 7 )
    return (unsigned int)v53;
LABEL_186:
  sub_18008C6D8();
  return 0xFFFFFFFFLL;
}
