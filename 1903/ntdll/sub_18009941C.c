/*
 * XREFs of sub_18009941C @ 0x18009941C
 * Callers:
 *     sub_180099D8C @ 0x180099D8C (sub_180099D8C.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180096740 @ 0x180096740 (sub_180096740.c)
 *     sub_1800990B4 @ 0x1800990B4 (sub_1800990B4.c)
 *     sub_18009925C @ 0x18009925C (sub_18009925C.c)
 *     sub_1800993E8 @ 0x1800993E8 (sub_1800993E8.c)
 */

__int64 __fastcall sub_18009941C(__int64 *a1, unsigned __int8 *a2, _DWORD *a3)
{
  char v3; // r8
  unsigned __int8 *v4; // rsi
  int v5; // ebx
  __int64 *v6; // rdi
  unsigned __int8 v7; // cl
  int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  int v11; // r8d
  char v12; // r15
  char v13; // r12
  int v14; // edi
  int v15; // r10d
  char v16; // bl
  char v17; // r14
  int v18; // r11d
  __int64 v19; // rcx
  unsigned __int8 v20; // dl
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  char v25; // r9
  __int64 v26; // r11
  _WORD *v27; // rdx
  unsigned int v28; // edi
  int v29; // r8d
  int v30; // eax
  int v31; // eax
  char v32; // cl
  int v33; // eax
  __int64 *v34; // r12
  int v35; // r12d
  int v36; // eax
  __int64 v37; // rdx
  wchar_t v38; // cx
  int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  int v43; // edx
  wchar_t v44; // cx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  char v48; // al
  char v49; // cl
  char v50; // al
  int v51; // eax
  int v52; // eax
  int v53; // r12d
  bool v54; // cc
  char v56; // [rsp+50h] [rbp-59h]
  char v57; // [rsp+51h] [rbp-58h]
  char v58; // [rsp+52h] [rbp-57h]
  unsigned int v59; // [rsp+54h] [rbp-55h]
  int v60; // [rsp+58h] [rbp-51h] BYREF
  int v61; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v62; // [rsp+60h] [rbp-49h]
  int v63; // [rsp+64h] [rbp-45h]
  int v64; // [rsp+68h] [rbp-41h]
  int v65; // [rsp+6Ch] [rbp-3Dh]
  int v66; // [rsp+70h] [rbp-39h]
  int v67; // [rsp+74h] [rbp-35h]
  int v68; // [rsp+78h] [rbp-31h]
  __int64 v69; // [rsp+80h] [rbp-29h]
  int v70; // [rsp+88h] [rbp-21h]
  unsigned int v71; // [rsp+8Ch] [rbp-1Dh] BYREF
  _DWORD *v72; // [rsp+90h] [rbp-19h]
  _WORD *v73; // [rsp+98h] [rbp-11h]
  unsigned int v74; // [rsp+A0h] [rbp-9h]
  _WORD *v75; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v76; // [rsp+B0h] [rbp+7h]
  unsigned __int8 *v78; // [rsp+118h] [rbp+6Fh] BYREF
  _DWORD *v79; // [rsp+120h] [rbp+77h]
  char v80; // [rsp+128h] [rbp+7Fh]

  v79 = a3;
  v3 = 0;
  v4 = a2;
  v68 = 0;
  v5 = 0;
  v63 = 0;
  v6 = a1;
  v61 = 0;
  v72 = 0LL;
  if ( !a2 || !a1 )
  {
    v9 = -1;
LABEL_215:
    sub_18008C6D8();
    return v9;
  }
  v7 = *a2;
  v8 = 0;
  v56 = 0;
  v9 = 0;
  v62 = 0;
  v60 = 0;
  v59 = 0;
  v71 = 0;
  if ( !v7 )
    return v9;
  v10 = -1;
  while ( (off_18015F000[v7] & 8) != 0 )
  {
    --v8;
    while ( 1 )
    {
      v62 = ++v8;
      v60 = v8;
      v11 = sub_1800993E8((__int64)v6);
      if ( v11 == -1 )
        break;
      if ( (off_18015F000[(unsigned __int8)v11] & 8) == 0 )
      {
        sub_180096740(v11, v6);
        goto LABEL_10;
      }
    }
    do
LABEL_10:
      ++v4;
    while ( (off_18015F000[*v4] & 8) != 0 );
LABEL_193:
    v7 = *v4;
    v3 = 0;
    if ( !*v4 )
      goto LABEL_194;
  }
  if ( v7 != 37 )
    goto LABEL_189;
  if ( v4[1] == 37 )
  {
    ++v4;
LABEL_189:
    v62 = ++v8;
    v60 = v8;
    v5 = sub_1800993E8((__int64)v6);
    v63 = v5;
    v61 = v5;
    v52 = *v4++;
    if ( v52 == v5 )
      goto LABEL_190;
    if ( v5 == -1 )
      goto LABEL_210;
    sub_180096740(v5, v6);
    v53 = v68;
    goto LABEL_199;
  }
  v12 = 0;
  v66 = 0;
  v13 = 0;
  v70 = 0;
  v14 = 0;
  v76 = 0LL;
  v15 = 0;
  v57 = 0;
  v16 = 0;
  v17 = 1;
  v18 = 0;
  do
  {
    v78 = ++v4;
    v19 = *v4;
    if ( (off_18015F000[v19] & 4) != 0 )
    {
      ++v18;
      v15 = v19 + 2 * (5 * v15 - 24);
      continue;
    }
    if ( (unsigned int)v19 > 0x68 )
    {
      if ( (_DWORD)v19 != 106 )
      {
        if ( (_DWORD)v19 == 108 )
        {
          if ( v4[1] == 108 )
          {
            v78 = ++v4;
            goto LABEL_37;
          }
          ++v17;
LABEL_41:
          ++v13;
          continue;
        }
        if ( (_DWORD)v19 != 116 )
        {
          if ( (_DWORD)v19 == 119 )
            goto LABEL_41;
          if ( (_DWORD)v19 != 122 )
            goto LABEL_49;
        }
      }
      if ( (_DWORD)v19 == 106 )
        goto LABEL_37;
      goto LABEL_46;
    }
    switch ( (_DWORD)v19 )
    {
      case 'h':
        --v17;
        --v13;
        continue;
      case '*':
        ++v16;
        continue;
      case 'F':
        continue;
      case 'I':
        v20 = v4[1];
        if ( v20 == 54 )
        {
          v21 = v4 + 2;
          if ( v4[2] == 52 )
          {
            v4 += 2;
            v78 = v21;
LABEL_37:
            ++v14;
            v69 = 0LL;
            continue;
          }
        }
        if ( v20 == 51 )
        {
          v22 = v4 + 2;
          if ( v4[2] == 50 )
          {
            v4 += 2;
            v78 = v22;
            continue;
          }
        }
LABEL_46:
        v23 = v4[1] - 88;
        if ( v23 <= 0x20u )
        {
          v24 = 0x120821001LL;
          if ( _bittest64(&v24, v23) )
            goto LABEL_37;
        }
        ++v14;
        v69 = 0LL;
        break;
      case 'L':
        ++v17;
        continue;
      case 'N':
        continue;
    }
LABEL_49:
    ++v3;
  }
  while ( !v3 );
  v58 = v16;
  v25 = v16;
  v5 = v63;
  v80 = v17;
  v8 = v62;
  v65 = v18;
  v26 = v76;
  v67 = v14;
  v64 = v15;
  if ( v25 )
  {
    v27 = 0LL;
  }
  else
  {
    v72 = v79;
    v79 += 2;
    v27 = (_WORD *)*((_QWORD *)v79 - 1);
  }
  v73 = v27;
  v75 = v27;
  if ( !v13 )
    v13 = ((*v4 - 67) & 0xEF) != 0 ? -1 : 1;
  v28 = *v4 | 0x20;
  v74 = v28;
  if ( v28 == 110 )
  {
LABEL_65:
    v29 = v65;
    if ( v65 && !v15 )
    {
      if ( v5 == -1 )
        goto LABEL_210;
      sub_180096740(v5, a1);
LABEL_197:
      v53 = v68;
LABEL_198:
      v9 = v59;
      goto LABEL_199;
    }
    if ( !v25
      && (v28 == 99 || v28 == 115 || v28 == 123)
      && (v72 += 2,
          v27 = (_WORD *)*((_QWORD *)v72 - 1),
          v73 = v27,
          v75 = v27,
          v79 = v72 + 2,
          v26 = (unsigned int)*v72,
          !*v72) )
    {
      v9 = v59;
      v54 = v13 <= 0;
      v53 = 0;
      if ( v54 )
        *(_BYTE *)v27 = 0;
      else
        *v27 = 0;
    }
    else
    {
      if ( v28 > 0x70 )
      {
        switch ( v28 )
        {
          case 's':
            v32 = 32;
            break;
          case 'u':
            goto LABEL_79;
          case 'x':
            goto LABEL_85;
          case '{':
            v32 = 64;
            break;
          default:
LABEL_97:
            if ( *v4 == v5 )
            {
              --v56;
              if ( !v25 )
                v79 = v72;
              goto LABEL_82;
            }
            if ( v5 != -1 )
              sub_180096740(v5, a1);
            v53 = 1;
            goto LABEL_198;
        }
      }
      else
      {
        if ( v28 == 112 )
        {
          ++v67;
          v80 = 1;
          v69 = 0LL;
          goto LABEL_79;
        }
        if ( v28 != 99 )
        {
          if ( v28 != 100 )
          {
            if ( v28 != 105 )
            {
              if ( v28 == 110 )
              {
                v30 = v8;
                if ( !v25 )
                {
LABEL_171:
                  if ( !v67 )
                  {
                    v9 = v59;
                    if ( v80 )
                      *(_DWORD *)v27 = v30;
                    else
                      *v27 = v30;
                    goto LABEL_83;
                  }
                  *(_QWORD *)v27 = v69;
                }
LABEL_82:
                v9 = v59;
LABEL_83:
                ++v56;
                v6 = a1;
                ++v4;
LABEL_190:
                if ( v5 == -1 && (*v4 != 37 || v4[1] != 110) )
                  goto LABEL_210;
                goto LABEL_193;
              }
              if ( v28 == 111 )
                goto LABEL_79;
              goto LABEL_97;
            }
            v28 = 100;
LABEL_85:
            if ( v5 == 45 )
            {
              v57 = 1;
            }
            else if ( v5 != 43 )
            {
              goto LABEL_105;
            }
            v64 = v15 - 1;
            if ( v15 != 1 || !v65 )
            {
              v34 = a1;
              v62 = ++v8;
              v60 = v8;
              v5 = sub_1800993E8((__int64)a1);
              v63 = v5;
              v61 = v5;
LABEL_106:
              if ( v5 == 48 )
              {
                v62 = ++v8;
                v60 = v8;
                v5 = sub_1800993E8((__int64)v34);
                v63 = v5;
                v61 = v5;
                if ( (((_BYTE)v5 - 88) & 0xDF) != 0 )
                {
                  v70 = 1;
                  if ( v28 == 120 )
                  {
                    v62 = --v8;
                    v60 = v8;
                    if ( v5 != -1 )
                      sub_180096740(v5, v34);
                    v5 = 48;
                    v63 = 48;
                    v61 = 48;
                    goto LABEL_117;
                  }
                  v29 = v65;
                  v35 = v64;
                  if ( v65 )
                  {
                    v35 = v64 - 1;
                    if ( v64 == 1 )
                      ++v12;
                  }
                  v28 = 111;
                }
                else
                {
                  v62 = ++v8;
                  v60 = v8;
                  v36 = sub_1800993E8((__int64)v34);
                  v29 = v65;
                  v5 = v36;
                  v35 = v64;
                  v63 = v36;
                  v61 = v36;
                  if ( v65 )
                  {
                    v35 = v64 - 2;
                    if ( v64 - 2 < 1 )
                      ++v12;
                  }
                  v28 = 120;
                }
LABEL_128:
                if ( v67 )
                {
                  if ( !v12 )
                  {
                    while ( 1 )
                    {
                      if ( ((v28 - 112) & 0xFFFFFFF7) != 0 )
                      {
                        if ( (off_18015F000[(unsigned __int8)v5] & 4) == 0 )
                          goto LABEL_143;
                        if ( v28 == 111 )
                        {
                          if ( v5 >= 56 )
                            goto LABEL_143;
                          v37 = 8 * v69;
                        }
                        else
                        {
                          v37 = 10 * v69;
                        }
                      }
                      else
                      {
                        v38 = off_18015F000[(unsigned __int8)v5];
                        if ( (v38 & 0x80u) == 0 )
                        {
LABEL_143:
                          v62 = --v8;
                          v60 = v8;
                          if ( v5 != -1 )
                            sub_180096740(v5, a1);
                          break;
                        }
                        v39 = (char)v5;
                        v37 = 16 * v69;
                        v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                        if ( (v38 & 4) != 0 )
                          v5 = v39;
                        v63 = v5;
                        v61 = v5;
                      }
                      ++v70;
                      v40 = v5 - 48 + v37;
                      v69 = v40;
                      if ( v29 )
                      {
                        if ( !--v35 )
                          goto LABEL_146;
                      }
                      v62 = ++v8;
                      v60 = v8;
                      v41 = sub_1800993E8((__int64)a1);
                      v29 = v65;
                      v5 = v41;
                      v63 = v41;
                      v61 = v41;
                    }
                  }
                  v40 = v69;
LABEL_146:
                  v42 = -v40;
                  if ( !v57 )
                    v42 = v40;
                  v69 = v42;
                }
                else
                {
                  if ( !v12 )
                  {
                    while ( 1 )
                    {
                      if ( ((v28 - 112) & 0xFFFFFFF7) != 0 )
                      {
                        if ( (off_18015F000[(unsigned __int8)v5] & 4) == 0 )
                          goto LABEL_163;
                        if ( v28 == 111 )
                        {
                          if ( v5 >= 56 )
                            goto LABEL_163;
                          v43 = 8 * v66;
                        }
                        else
                        {
                          v43 = 10 * v66;
                        }
                      }
                      else
                      {
                        v44 = off_18015F000[(unsigned __int8)v5];
                        if ( (v44 & 0x80u) == 0 )
                        {
LABEL_163:
                          v62 = --v8;
                          v60 = v8;
                          if ( v5 != -1 )
                            sub_180096740(v5, a1);
                          break;
                        }
                        v45 = (char)v5;
                        v43 = 16 * v66;
                        v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                        if ( (v44 & 4) != 0 )
                          v5 = v45;
                        v63 = v5;
                        v61 = v5;
                      }
                      ++v70;
                      v46 = v5 + v43 - 48;
                      v66 = v46;
                      if ( v29 )
                      {
                        if ( !--v35 )
                          goto LABEL_166;
                      }
                      v62 = ++v8;
                      v60 = v8;
                      v47 = sub_1800993E8((__int64)a1);
                      v29 = v65;
                      v5 = v47;
                      v63 = v47;
                      v61 = v47;
                    }
                  }
                  v46 = v66;
LABEL_166:
                  if ( v57 )
                    v66 = -v46;
                }
                if ( !v70 )
                  goto LABEL_197;
                if ( !v58 )
                {
                  v27 = v73;
                  v71 = ++v59;
                  v30 = v66;
                  goto LABEL_171;
                }
                goto LABEL_82;
              }
LABEL_117:
              v29 = v65;
LABEL_127:
              v35 = v64;
              goto LABEL_128;
            }
            v12 = 1;
LABEL_105:
            v34 = a1;
            goto LABEL_106;
          }
LABEL_79:
          if ( v5 == 45 )
          {
            v57 = 1;
          }
          else if ( v5 != 43 )
          {
            goto LABEL_127;
          }
          v64 = v15 - 1;
          if ( v15 == 1 && v65 )
          {
            v12 = 1;
            v35 = 0;
            goto LABEL_128;
          }
          v62 = ++v8;
          v60 = v8;
          v5 = sub_1800993E8((__int64)a1);
          v63 = v5;
          v61 = v5;
          goto LABEL_117;
        }
        v31 = v15 + 1;
        v32 = 16;
        if ( v65 )
          v31 = v15;
        v15 = v31;
        v33 = 1;
        if ( v65 )
          v33 = v65;
        v29 = v33;
      }
      v48 = v32 | 1;
      if ( !v29 )
        v48 = v32;
      v49 = v48 | 2;
      if ( v13 <= 0 )
        v49 = v48;
      v50 = v49 | 4;
      if ( !v25 )
        v50 = v49;
      if ( v28 == 123 )
      {
        v51 = sub_18009925C(v50, &v78, &v61, &v60, &v75, v15, a1, v26, &v71);
        v4 = v78;
      }
      else
      {
        v51 = sub_1800990B4(v50, 0LL, &v61, &v60, &v75, v15, a1, v26, &v71);
      }
      v9 = v71;
      v5 = v61;
      v59 = v71;
      if ( !v51 )
      {
        v8 = v60;
        v62 = v60;
        v63 = v61;
        goto LABEL_83;
      }
LABEL_194:
      v53 = 0;
    }
LABEL_199:
    if ( v5 == -1 )
      goto LABEL_210;
    if ( v53 != 1 )
      return v9;
    goto LABEL_215;
  }
  if ( v28 == 99 || v28 == 123 )
  {
    v8 = v62 + 1;
    v62 = v8;
    v60 = v8;
    v5 = sub_1800993E8((__int64)a1);
    v63 = v5;
    v61 = v5;
  }
  else
  {
    do
    {
      v60 = ++v8;
      v5 = sub_1800993E8((__int64)a1);
      v63 = v5;
    }
    while ( v5 != -1 && (off_18015F000[(unsigned __int8)v5] & 8) != 0 );
    v28 = v74;
    v62 = v8;
    v61 = v5;
  }
  if ( v5 != -1 )
  {
    v27 = v73;
    v15 = v64;
    v26 = v76;
    v25 = v58;
    goto LABEL_65;
  }
LABEL_210:
  if ( v59 || v56 )
    return v59;
  return v10;
}
