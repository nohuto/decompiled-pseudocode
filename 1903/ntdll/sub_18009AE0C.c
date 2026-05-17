/*
 * XREFs of sub_18009AE0C @ 0x18009AE0C
 * Callers:
 *     sub_18009AD10 @ 0x18009AD10 (sub_18009AD10.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     iswctype @ 0x180090110 (iswctype.c)
 *     sub_18009A918 @ 0x18009A918 (sub_18009A918.c)
 *     sub_18009AB58 @ 0x18009AB58 (sub_18009AB58.c)
 *     sub_18009ADB4 @ 0x18009ADB4 (sub_18009ADB4.c)
 *     sub_18009B7E4 @ 0x18009B7E4 (sub_18009B7E4.c)
 *     sub_18009B82C @ 0x18009B82C (sub_18009B82C.c)
 */

__int64 __fastcall sub_18009AE0C(__int64 a1, wint_t *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // rsi
  int v5; // edi
  __int64 v6; // r14
  wint_t v7; // ax
  int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  char v12; // r9
  int v13; // r11d
  int v14; // r10d
  char v15; // r12
  char v16; // r8
  char v17; // r13
  int v18; // r14d
  unsigned int v19; // edx
  unsigned __int16 v20; // cx
  unsigned __int16 *v21; // rax
  unsigned __int16 *v22; // rax
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  char v25; // r8
  __int64 Src; // r9
  __int64 v27; // rdx
  char v28; // r12
  char v29; // cl
  unsigned int v30; // r14d
  unsigned __int16 v31; // ax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  char v35; // al
  char v36; // cl
  char v37; // al
  int v38; // eax
  __int64 v39; // r13
  unsigned __int16 v40; // ax
  int v41; // r8d
  int v42; // r13d
  unsigned __int16 v43; // ax
  unsigned __int16 v44; // ax
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned __int16 v47; // ax
  __int64 v48; // rax
  int v49; // ecx
  int v50; // ecx
  unsigned __int16 v51; // ax
  unsigned __int16 v52; // ax
  wint_t v53; // ax
  int v54; // r13d
  bool v55; // cc
  int v57; // [rsp+50h] [rbp-49h] BYREF
  char v58; // [rsp+54h] [rbp-45h]
  int v59; // [rsp+58h] [rbp-41h] BYREF
  char v60; // [rsp+5Ch] [rbp-3Dh]
  char v61; // [rsp+5Dh] [rbp-3Ch]
  unsigned int v62; // [rsp+60h] [rbp-39h]
  int v63; // [rsp+64h] [rbp-35h]
  int v64; // [rsp+68h] [rbp-31h]
  int v65; // [rsp+6Ch] [rbp-2Dh]
  int v66; // [rsp+70h] [rbp-29h]
  int v67; // [rsp+74h] [rbp-25h]
  __int64 v68; // [rsp+80h] [rbp-19h]
  int v69; // [rsp+88h] [rbp-11h]
  _DWORD v70[3]; // [rsp+8Ch] [rbp-Dh] BYREF
  __int64 v71; // [rsp+98h] [rbp-1h]
  __int64 v72[10]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int16 *v74; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v75; // [rsp+110h] [rbp+77h]
  char v76; // [rsp+118h] [rbp+7Fh]

  v75 = a3;
  v3 = 0;
  v4 = a2;
  LOWORD(v57) = 0;
  LOWORD(v5) = 0;
  v63 = 0;
  v6 = a1;
  *(_QWORD *)&v70[1] = 0LL;
  if ( !a2 || !a1 )
  {
    v9 = -1;
LABEL_212:
    sub_18008C6D8();
    return v9;
  }
  v7 = *a2;
  v8 = 0;
  v58 = 0;
  v9 = 0;
  v59 = 0;
  v62 = 0;
  v70[0] = 0;
  if ( !v7 )
    return v9;
  while ( iswctype(v7, 8u) )
  {
    v59 = v8 - 1;
    v11 = sub_18009ADB4(&v59, v6);
    if ( v11 != 0xFFFF )
      sub_18009B82C(v11, v6);
    do
      ++v4;
    while ( iswctype(*v4, 8u) );
    v8 = v59;
LABEL_190:
    v7 = *v4;
    if ( !*v4 )
      goto LABEL_191;
  }
  if ( *v4 != 37 )
    goto LABEL_186;
  if ( v4[1] == 37 )
  {
    ++v4;
LABEL_186:
    v59 = ++v8;
    v52 = sub_18009B7E4(v6, v10);
    v5 = v52;
    LOWORD(v57) = v52;
    v53 = *v4++;
    v63 = v5;
    if ( v53 == (_WORD)v5 )
      goto LABEL_187;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_207;
    sub_18009B82C((unsigned __int16)v5, v6);
LABEL_191:
    v54 = 0;
    goto LABEL_196;
  }
  v12 = 1;
  v66 = 0;
  v69 = 0;
  v13 = 0;
  v60 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  do
  {
    v74 = ++v4;
    v19 = *v4;
    if ( (v19 & 0xFF00) == 0 && (off_18015F000[(unsigned __int8)v19] & 4) != 0 )
    {
      ++v13;
      v14 = v19 + 2 * (5 * v14 - 24);
      continue;
    }
    if ( v19 > 0x68 )
    {
      if ( v19 != 106 )
      {
        if ( v19 == 108 )
        {
          v21 = v4 + 1;
          if ( v4[1] == 108 )
            goto LABEL_34;
          ++v12;
LABEL_38:
          ++v17;
          continue;
        }
        if ( v19 != 116 )
        {
          if ( v19 == 119 )
            goto LABEL_38;
          if ( v19 != 122 )
            goto LABEL_46;
        }
      }
      if ( v19 == 106 )
        goto LABEL_35;
      goto LABEL_43;
    }
    switch ( v19 )
    {
      case 'h':
        --v12;
        --v17;
        continue;
      case '*':
        ++v15;
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
LABEL_34:
            v4 = v21;
            v74 = v21;
LABEL_35:
            ++v18;
            v68 = 0LL;
            continue;
          }
        }
        if ( v20 == 51 )
        {
          v22 = v4 + 2;
          if ( v4[2] == 50 )
          {
            v4 += 2;
            v74 = v22;
            continue;
          }
        }
LABEL_43:
        v23 = v4[1] - 88;
        if ( v23 <= 0x20u )
        {
          v24 = 0x120821001LL;
          if ( _bittest64(&v24, v23) )
            goto LABEL_35;
        }
        ++v18;
        v68 = 0LL;
        break;
      case 'L':
        ++v12;
        continue;
      case 'N':
        continue;
    }
LABEL_46:
    ++v16;
  }
  while ( !v16 );
  v5 = v63;
  v25 = v15;
  v8 = v59;
  v76 = v12;
  Src = 0LL;
  v61 = v15;
  v67 = v18;
  v65 = v13;
  v64 = v14;
  if ( v15 )
  {
    v27 = 0LL;
    v71 = 0LL;
  }
  else
  {
    *(_QWORD *)&v70[1] = v75;
    v75 += 8LL;
    v27 = *(_QWORD *)(v75 - 8);
    v71 = v27;
  }
  v72[0] = v27;
  v28 = 0;
  if ( !v17 )
    v17 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v29 = 32;
  v30 = *v4 | 0x20;
  if ( v30 == 110 )
  {
LABEL_60:
    if ( v13 && !v14 )
    {
      if ( (_WORD)v5 == 0xFFFF )
        goto LABEL_207;
      sub_18009B82C((unsigned __int16)v5, a1);
LABEL_194:
      v54 = 0;
LABEL_195:
      v9 = v62;
      goto LABEL_196;
    }
    if ( v25
      || v30 != 99 && v30 != 115 && v30 != 123
      || (*(_QWORD *)&v70[1] += 8LL,
          v27 = *(_QWORD *)(*(_QWORD *)&v70[1] - 8LL),
          v71 = v27,
          v72[0] = v27,
          v75 = *(_QWORD *)&v70[1] + 8LL,
          Src = (unsigned int)**(_DWORD **)&v70[1],
          **(_DWORD **)&v70[1]) )
    {
      if ( v30 > 0x70 )
      {
        if ( v30 != 115 )
        {
          if ( v30 == 117 )
            goto LABEL_74;
          if ( v30 == 120 )
            goto LABEL_80;
          if ( v30 != 123 )
          {
LABEL_100:
            if ( *v4 == (_WORD)v5 )
            {
              --v58;
              if ( !v25 )
                v75 = *(_QWORD *)&v70[1];
              goto LABEL_77;
            }
            if ( (_WORD)v5 != 0xFFFF )
              sub_18009B82C((unsigned __int16)v5, a1);
            v54 = 1;
            goto LABEL_195;
          }
          v29 = 64;
        }
      }
      else
      {
        if ( v30 == 112 )
        {
          ++v67;
          v76 = 1;
          v68 = 0LL;
          goto LABEL_74;
        }
        if ( v30 != 99 )
        {
          if ( v30 != 100 )
          {
            if ( v30 != 105 )
            {
              if ( v30 == 110 )
              {
                v32 = v8;
                if ( v25 )
                  goto LABEL_77;
                goto LABEL_177;
              }
              if ( v30 == 111 )
                goto LABEL_74;
              goto LABEL_100;
            }
            v30 = 100;
LABEL_80:
            if ( (_WORD)v5 == 45 )
            {
              v60 = 1;
            }
            else if ( (_WORD)v5 != 43 )
            {
              goto LABEL_108;
            }
            v64 = v14 - 1;
            if ( v14 != 1 || !v13 )
            {
              v39 = a1;
              v59 = ++v8;
              v43 = sub_18009B7E4(a1, v27);
              v5 = v43;
              LOWORD(v57) = v43;
              v63 = v43;
LABEL_109:
              if ( (_WORD)v5 == 48 )
              {
                v59 = ++v8;
                v40 = sub_18009B7E4(v39, v27);
                v5 = v40;
                LOWORD(v57) = v40;
                v63 = v40;
                if ( ((v40 - 88) & 0xFFDF) == 0 )
                {
                  v59 = ++v8;
                  v44 = sub_18009B7E4(v39, v27);
                  v41 = v65;
                  v5 = v44;
                  v42 = v64;
                  v63 = v44;
                  LOWORD(v57) = v44;
                  if ( v65 )
                  {
                    v42 = v64 - 2;
                    if ( v64 - 2 < 1 )
                      ++v28;
                  }
                  v30 = 120;
                  goto LABEL_132;
                }
                v69 = 1;
                if ( v30 != 120 )
                {
                  v41 = v65;
                  v42 = v64;
                  if ( v65 )
                  {
                    v42 = v64 - 1;
                    if ( v64 == 1 )
                      ++v28;
                  }
                  v30 = 111;
                  goto LABEL_132;
                }
                v59 = --v8;
                if ( v40 != 0xFFFF )
                  sub_18009B82C(v40, v39);
                v5 = 48;
LABEL_129:
                LOWORD(v57) = v5;
                v63 = v5;
                goto LABEL_130;
              }
              goto LABEL_130;
            }
            v28 = 1;
LABEL_108:
            v39 = a1;
            goto LABEL_109;
          }
LABEL_74:
          if ( (_WORD)v5 == 45 )
          {
            v60 = 1;
            goto LABEL_125;
          }
          if ( (_WORD)v5 == 43 )
          {
LABEL_125:
            v64 = v14 - 1;
            if ( v14 == 1 && v13 )
            {
              v28 = 1;
              v42 = 0;
LABEL_131:
              v41 = v65;
LABEL_132:
              if ( v67 )
              {
                if ( !v28 )
                {
                  while ( 1 )
                  {
                    if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (v5 & 0xFF00) != 0 || (off_18015F000[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_148;
                      if ( v30 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_148;
                        v45 = 8 * v68;
                      }
                      else
                      {
                        v45 = 10 * v68;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v27 = off_18015F000[(unsigned __int8)v5], (v27 & 0x80u) == 0LL) )
                      {
LABEL_148:
                        v59 = --v8;
                        if ( (_WORD)v5 != 0xFFFF )
                          sub_18009B82C((unsigned __int16)v5, a1);
                        break;
                      }
                      v45 = 16 * v68;
                      if ( (v27 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v63 = v5;
                        LOWORD(v57) = v5;
                      }
                    }
                    ++v69;
                    v46 = (unsigned __int16)v5 + v45 - 48;
                    v68 = v46;
                    if ( v41 )
                    {
                      if ( !--v42 )
                        goto LABEL_151;
                    }
                    v59 = ++v8;
                    v47 = sub_18009B7E4(a1, v27);
                    v41 = v65;
                    v5 = v47;
                    v63 = v47;
                    LOWORD(v57) = v47;
                  }
                }
                v46 = v68;
LABEL_151:
                v48 = -v46;
                if ( !v60 )
                  v48 = v46;
                v68 = v48;
              }
              else
              {
                if ( !v28 )
                {
                  while ( 1 )
                  {
                    if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (v5 & 0xFF00) != 0 || (off_18015F000[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_169;
                      if ( v30 == 111 )
                      {
                        if ( (unsigned __int16)v5 >= 0x38u )
                          goto LABEL_169;
                        v49 = 8 * v66;
                      }
                      else
                      {
                        v49 = 10 * v66;
                      }
                    }
                    else
                    {
                      if ( (v5 & 0xFF00) != 0 || (v27 = off_18015F000[(unsigned __int8)v5], (v27 & 0x80u) == 0LL) )
                      {
LABEL_169:
                        v59 = --v8;
                        if ( (_WORD)v5 != 0xFFFF )
                          sub_18009B82C((unsigned __int16)v5, a1);
                        break;
                      }
                      v49 = 16 * v66;
                      if ( (v27 & 4) == 0 )
                      {
                        LOWORD(v5) = (v5 & 0xFFDF) - 7;
                        v63 = v5;
                        LOWORD(v57) = v5;
                      }
                    }
                    ++v69;
                    v50 = (unsigned __int16)v5 + v49 - 48;
                    v66 = v50;
                    if ( v41 )
                    {
                      if ( !--v42 )
                        goto LABEL_172;
                    }
                    v59 = ++v8;
                    v51 = sub_18009B7E4(a1, v27);
                    v41 = v65;
                    v5 = v51;
                    v63 = v51;
                    LOWORD(v57) = v51;
                  }
                }
                v50 = v66;
LABEL_172:
                if ( v60 )
                  v66 = -v50;
              }
              if ( !v69 )
                goto LABEL_194;
              if ( v61 )
                goto LABEL_77;
              v27 = v71;
              v70[0] = ++v62;
              v32 = v66;
LABEL_177:
              if ( !v67 )
              {
                v9 = v62;
                if ( v76 )
                  *(_DWORD *)v27 = v32;
                else
                  *(_WORD *)v27 = v32;
                goto LABEL_78;
              }
              *(_QWORD *)v27 = v68;
LABEL_77:
              v9 = v62;
LABEL_78:
              ++v58;
              v6 = a1;
              ++v4;
LABEL_187:
              if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
                goto LABEL_207;
              goto LABEL_190;
            }
            v59 = ++v8;
            v5 = (unsigned __int16)sub_18009B7E4(a1, v27);
            goto LABEL_129;
          }
LABEL_130:
          v42 = v64;
          goto LABEL_131;
        }
        v33 = v14 + 1;
        v29 = 16;
        if ( v13 )
          v33 = v14;
        v14 = v33;
        v34 = 1;
        if ( v13 )
          v34 = v13;
        v13 = v34;
      }
      v35 = v29 | 1;
      if ( !v13 )
        v35 = v29;
      v36 = v35 | 2;
      if ( v17 <= 0 )
        v36 = v35;
      v37 = v36 | 4;
      if ( !v25 )
        v37 = v36;
      if ( v30 == 123 )
      {
        v38 = sub_18009AB58(v37, &v74, (unsigned __int16 *)&v57, &v59, (void **)v72, v14, a1, Src, v70);
        v4 = v74;
      }
      else
      {
        v38 = sub_18009A918(v37, 0LL, (unsigned __int16 *)&v57, &v59, (void **)v72, v14, a1, Src, v70);
      }
      v9 = v70[0];
      LOWORD(v5) = v57;
      v62 = v70[0];
      if ( v38 )
        goto LABEL_191;
      v8 = v59;
      v63 = (unsigned __int16)v57;
      goto LABEL_78;
    }
    v9 = v62;
    v55 = v17 <= 0;
    v54 = 0;
    if ( v55 )
      *(_BYTE *)v27 = 0;
    else
      *(_WORD *)v27 = 0;
LABEL_196:
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_207;
    if ( v54 != 1 )
      return v9;
    goto LABEL_212;
  }
  if ( v30 == 99 || v30 == 123 )
  {
    v8 = ++v59;
    v31 = sub_18009B7E4(a1, v27);
  }
  else
  {
    v31 = sub_18009ADB4(&v59, a1);
    v8 = v59;
  }
  v5 = v31;
  LOWORD(v57) = v31;
  v63 = v31;
  if ( v31 != 0xFFFF )
  {
    v27 = v71;
    Src = 0LL;
    v14 = v64;
    v29 = 32;
    v13 = v65;
    v25 = v61;
    goto LABEL_60;
  }
LABEL_207:
  if ( v62 || v58 )
    return v62;
  return v3;
}
