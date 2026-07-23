/*
 * XREFs of _input_l @ 0x180099400
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 *     isleadbyte @ 0x180093778 (isleadbyte.c)
 *     __pctype_func @ 0x180096220 (__pctype_func.c)
 *     ReadString @ 0x180099074 (ReadString.c)
 *     ReadStringDelimited @ 0x180099244 (ReadStringDelimited.c)
 *     _inc @ 0x1800993CC (_inc.c)
 *     _ungetc_nolock @ 0x180099EA0 (_ungetc_nolock.c)
 */

__int64 __fastcall input_l(FILE *Stream, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int8 *v5; // rsi
  FILE *v6; // r15
  unsigned __int8 v7; // bl
  int v8; // r14d
  __int64 result; // rax
  unsigned int v10; // r12d
  int v11; // ebx
  __int64 v12; // rbx
  int v13; // edi
  int v14; // r14d
  char v15; // r15
  char v16; // r13
  __int64 v17; // rbx
  bool v18; // zf
  unsigned __int64 v19; // rax
  char v20; // r9
  __int64 v21; // rcx
  __int64 *v22; // rax
  char v23; // bl
  unsigned int v24; // r15d
  int v25; // edx
  int v26; // r8d
  int v27; // ecx
  int v28; // eax
  char v29; // cl
  int v30; // eax
  FILE *v31; // r13
  FILE *v32; // r13
  __int64 v33; // rbx
  __int64 v34; // rbx
  int v35; // ebx
  const unsigned __int16 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // ecx
  int v40; // ebx
  const unsigned __int16 *v41; // rax
  __int64 v42; // rcx
  char v43; // dl
  int v44; // ecx
  char v45; // al
  char v46; // dl
  char v47; // cl
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  FILE *v52; // rdx
  char v53; // [rsp+48h] [rbp-39h]
  char v54; // [rsp+49h] [rbp-38h]
  char v55; // [rsp+4Ah] [rbp-37h]
  char v56; // [rsp+4Bh] [rbp-36h]
  int v57; // [rsp+4Ch] [rbp-35h] BYREF
  int v58; // [rsp+50h] [rbp-31h]
  int v59; // [rsp+54h] [rbp-2Dh] BYREF
  int v60; // [rsp+58h] [rbp-29h]
  int Character; // [rsp+5Ch] [rbp-25h]
  int v62; // [rsp+60h] [rbp-21h]
  int v63; // [rsp+64h] [rbp-1Dh]
  int v64; // [rsp+68h] [rbp-19h]
  int v65; // [rsp+6Ch] [rbp-15h]
  __int64 v66; // [rsp+70h] [rbp-11h] BYREF
  __int64 v67; // [rsp+78h] [rbp-9h]
  __int64 *v68; // [rsp+80h] [rbp-1h]
  unsigned int v69; // [rsp+88h] [rbp+7h]
  __int64 v70; // [rsp+90h] [rbp+Fh]
  char SrcCh[8]; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int8 *v73; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v74; // [rsp+100h] [rbp+7Fh]

  v74 = a4;
  v4 = 0;
  v5 = a2;
  v70 = 0LL;
  v6 = Stream;
  Character = 0;
  v59 = 0;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v7 = *a2;
  v8 = 0;
  result = 0LL;
  v55 = 0;
  v58 = 0;
  v57 = 0;
  LODWORD(v66) = 0;
  if ( !v7 )
    return result;
  v10 = -1;
  while ( 2 )
  {
    if ( (_pctype_func()[v7] & 8) != 0 )
    {
      --v8;
      while ( 1 )
      {
        v58 = ++v8;
        v57 = v8;
        v11 = inc((__int64)v6);
        if ( v11 == -1 )
          break;
        if ( (_pctype_func()[(unsigned __int8)v11] & 8) == 0 )
        {
          ungetc_nolock(v11, v6);
          goto LABEL_10;
        }
      }
      do
LABEL_10:
        v12 = *++v5;
      while ( (_pctype_func()[v12] & 8) != 0 );
      goto LABEL_193;
    }
    if ( *v5 != 37 )
      goto LABEL_186;
    if ( v5[1] == 37 )
    {
      if ( *v5 == 37 && v5[1] == 37 )
        ++v5;
LABEL_186:
      v58 = ++v8;
      v57 = v8;
      v4 = inc((__int64)v6);
      Character = v4;
      v59 = v4;
      v49 = *v5++;
      if ( v49 == v4 )
      {
        if ( !isleadbyte((unsigned __int8)v4) )
          goto LABEL_190;
        v50 = inc((__int64)v6);
        v51 = *v5++;
        if ( v51 == v50 )
        {
          v58 = v8;
          v57 = v8;
          goto LABEL_190;
        }
        if ( v50 != -1 )
          ungetc_nolock(v50, v6);
      }
      if ( v4 == -1 )
        goto LABEL_203;
      v52 = v6;
      goto LABEL_201;
    }
    v63 = 0;
    v13 = 0;
    v65 = 0;
    v14 = 0;
    v56 = 0;
    v15 = 0;
    v53 = 0;
    v16 = 0;
    v54 = 1;
    v60 = 0;
    do
    {
      v73 = ++v5;
      v17 = *v5;
      v18 = (_pctype_func()[v17] & 4) == 0;
      v19 = (unsigned int)v17;
      if ( !v18 )
      {
        ++v13;
        v14 = v17 + 2 * (5 * v14 - 24);
        goto LABEL_50;
      }
      if ( (unsigned __int8)v17 > 0x68u )
      {
        if ( (_BYTE)v17 != 106 )
        {
          if ( (_BYTE)v17 == 108 )
          {
            if ( v5[1] != 108 )
            {
              ++v54;
LABEL_41:
              ++v16;
              goto LABEL_50;
            }
            v73 = ++v5;
            goto LABEL_39;
          }
          if ( (_BYTE)v17 != 116 )
          {
            if ( (_BYTE)v17 == 119 )
              goto LABEL_41;
            if ( (_BYTE)v17 != 122 )
              goto LABEL_49;
          }
        }
        if ( (_BYTE)v17 == 106 )
        {
LABEL_39:
          ++v60;
          v67 = 0LL;
          goto LABEL_50;
        }
LABEL_46:
        LOBYTE(v19) = v5[1] - 88;
        if ( (unsigned __int8)v19 > 0x20u || (v21 = 0x120821001LL, !_bittest64(&v21, v19)) )
        {
          ++v60;
          v67 = 0LL;
LABEL_49:
          ++v15;
          goto LABEL_50;
        }
        goto LABEL_39;
      }
      if ( (_BYTE)v17 == 104 )
      {
        --v54;
        --v16;
        goto LABEL_50;
      }
      if ( (_BYTE)v17 == 42 )
      {
        v20 = ++v53;
        continue;
      }
      if ( (_BYTE)v17 != 70 )
      {
        if ( (_BYTE)v17 != 73 )
        {
          if ( (_BYTE)v17 == 76 )
          {
            ++v54;
          }
          else if ( (_BYTE)v17 != 78 )
          {
            goto LABEL_49;
          }
          goto LABEL_50;
        }
        if ( v5[1] == 54 )
        {
          v19 = (unsigned __int64)(v5 + 2);
          if ( v5[2] == 52 )
          {
            v5 += 2;
            v73 = (unsigned __int8 *)v19;
            goto LABEL_39;
          }
        }
        if ( v5[1] == 51 )
        {
          v19 = (unsigned __int64)(v5 + 2);
          if ( v5[2] == 50 )
          {
            v5 += 2;
            v73 = (unsigned __int8 *)v19;
            goto LABEL_50;
          }
        }
        goto LABEL_46;
      }
LABEL_50:
      v20 = v53;
    }
    while ( !v15 );
    v64 = v13;
    v4 = Character;
    v62 = v14;
    v8 = v58;
    if ( v20 )
    {
      v22 = 0LL;
    }
    else
    {
      v70 = v74;
      v74 += 8LL;
      v22 = *(__int64 **)(v74 - 8);
    }
    v23 = 0;
    v68 = v22;
    *(_QWORD *)SrcCh = v22;
    if ( !v16 )
      v16 = ((*v5 - 67) & 0xEF) != 0 ? -1 : 1;
    v24 = *v5 | 0x20;
    v69 = v24;
    if ( v24 != 110 )
    {
      if ( v24 == 99 || v24 == 123 )
      {
        v8 = v58 + 1;
        v58 = v8;
        v57 = v8;
        v4 = inc((__int64)Stream);
        Character = v4;
        v59 = v4;
      }
      else
      {
        do
        {
          v57 = ++v8;
          v4 = inc((__int64)Stream);
          Character = v4;
        }
        while ( v4 != -1 && (_pctype_func()[(unsigned __int8)v4] & 8) != 0 );
        v24 = v69;
        v58 = v8;
        v59 = v4;
      }
      if ( v4 == -1 )
        goto LABEL_203;
      v20 = v53;
    }
    v25 = v64;
    v26 = v62;
    if ( v64 && !v62 )
      goto LABEL_195;
    if ( v24 > 0x70 )
    {
      if ( v24 == 115 )
      {
        v29 = 32;
        goto LABEL_171;
      }
      if ( v24 != 117 )
      {
        if ( v24 == 120 )
          goto LABEL_80;
        if ( v24 != 123 )
          goto LABEL_92;
        v29 = 64;
        goto LABEL_171;
      }
    }
    else
    {
      if ( v24 != 112 )
      {
        if ( v24 != 99 )
        {
          if ( v24 == 100 )
            break;
          if ( v24 != 105 )
          {
            if ( v24 != 110 )
            {
              if ( v24 == 111 )
                break;
LABEL_92:
              if ( *v5 == v4 )
              {
                --v55;
                if ( !v20 )
                  v74 = v70;
                goto LABEL_182;
              }
LABEL_195:
              if ( v4 == -1 )
                goto LABEL_203;
              v52 = Stream;
LABEL_201:
              ungetc_nolock(v4, v52);
              goto LABEL_202;
            }
            v27 = v8;
            if ( !v20 )
            {
LABEL_165:
              if ( v60 )
              {
                *v68 = v67;
              }
              else if ( v54 )
              {
                *(_DWORD *)v68 = v27;
              }
              else
              {
                *(_WORD *)v68 = v27;
              }
            }
LABEL_182:
            ++v55;
            v6 = Stream;
            ++v5;
LABEL_190:
            if ( v4 == -1 && (*v5 != 37 || v5[1] != 110) )
              goto LABEL_203;
LABEL_193:
            v7 = *v5;
            if ( !*v5 )
              goto LABEL_202;
            continue;
          }
          v24 = 100;
LABEL_80:
          switch ( v4 )
          {
            case '-':
              v56 = 1;
LABEL_97:
              --v62;
              if ( v26 == 1 && v64 )
              {
                v23 = 1;
                goto LABEL_100;
              }
              v31 = Stream;
              v58 = ++v8;
              v57 = v8;
              v4 = inc((__int64)Stream);
              Character = v4;
              v59 = v4;
              break;
            case '+':
              goto LABEL_97;
            case '0':
              v58 = ++v8;
              v57 = v8;
              v4 = inc((__int64)v31);
              Character = v4;
              v59 = v4;
              if ( (((_BYTE)v4 - 88) & 0xDF) != 0 )
              {
                v65 = 1;
                if ( v24 == 120 )
                {
                  v58 = --v8;
                  v57 = v8;
                  if ( v4 != -1 )
                    ungetc_nolock(v4, v31);
                  v4 = 48;
                  Character = 48;
                  v59 = 48;
                }
                else
                {
                  if ( v64 )
                  {
                    if ( !--v62 )
                      ++v23;
                  }
                  v24 = 111;
                }
              }
              else
              {
                v58 = ++v8;
                v57 = v8;
                v4 = inc((__int64)v31);
                Character = v4;
                v59 = v4;
                if ( v64 )
                {
                  v62 -= 2;
                  if ( v62 < 1 )
                    ++v23;
                }
                v24 = 120;
              }
              break;
            default:
LABEL_100:
              v31 = Stream;
              break;
          }
LABEL_108:
          v32 = Stream;
          goto LABEL_109;
        }
        v28 = v62 + 1;
        v29 = 16;
        if ( v64 )
          v28 = v62;
        v26 = v28;
        v30 = 1;
        if ( v64 )
          v30 = v64;
        v25 = v30;
LABEL_171:
        v45 = v29 | 1;
        if ( !v25 )
          v45 = v29;
        v46 = v45 | 2;
        if ( v16 <= 0 )
          v46 = v45;
        v47 = v46 | 4;
        if ( !v20 )
          v47 = v46;
        if ( v24 == 123 )
        {
          v48 = ReadStringDelimited(v47, &v73, &v59, &v57, SrcCh, v26, Stream, &v66);
          v5 = v73;
        }
        else
        {
          v48 = ReadString(v47, 0LL, &v59, &v57, SrcCh, v26, Stream, &v66);
        }
        v4 = v59;
        if ( !v48 )
        {
          v8 = v57;
          v58 = v57;
          Character = v59;
          goto LABEL_182;
        }
        goto LABEL_202;
      }
      ++v60;
      v67 = 0LL;
      v54 = 1;
    }
    break;
  }
  if ( v4 == 45 )
  {
    v56 = 1;
  }
  else if ( v4 != 43 )
  {
    goto LABEL_108;
  }
  --v62;
  if ( v26 == 1 && v64 )
  {
    v23 = 1;
    goto LABEL_108;
  }
  v32 = Stream;
  v58 = ++v8;
  v57 = v8;
  v4 = inc((__int64)Stream);
  Character = v4;
  v59 = v4;
LABEL_109:
  if ( !v60 )
  {
    if ( !v23 )
    {
      while ( 1 )
      {
        if ( ((v24 - 112) & 0xFFFFFFF7) != 0 )
        {
          if ( (_pctype_func()[(unsigned __int8)v4] & 4) == 0 )
            goto LABEL_157;
          if ( v24 == 111 )
          {
            if ( v4 >= 56 )
              goto LABEL_157;
            v39 = 8 * v63;
          }
          else
          {
            v39 = 10 * v63;
          }
        }
        else
        {
          if ( SLOBYTE(_pctype_func()[(unsigned __int8)v4]) >= 0 )
          {
LABEL_157:
            v58 = --v8;
            v57 = v8;
            if ( v4 != -1 )
              ungetc_nolock(v4, v32);
            break;
          }
          v63 *= 16;
          v40 = (char)v4;
          v41 = _pctype_func();
          v42 = (unsigned __int8)v4;
          v4 = ((char)v4 & 0xFFFFFFDF) - 7;
          v43 = v41[v42];
          v39 = v63;
          if ( (v43 & 4) != 0 )
            v4 = v40;
          Character = v4;
          v59 = v4;
        }
        ++v65;
        v44 = v4 + v39 - 48;
        v63 = v44;
        if ( v64 )
        {
          if ( !--v62 )
            goto LABEL_160;
        }
        v58 = ++v8;
        v57 = v8;
        v4 = inc((__int64)v32);
        Character = v4;
        v59 = v4;
      }
    }
    v44 = v63;
LABEL_160:
    if ( v56 )
      v63 = -v44;
    goto LABEL_162;
  }
  if ( v23 )
    goto LABEL_140;
  v33 = v67;
  while ( 2 )
  {
    if ( ((v24 - 112) & 0xFFFFFFF7) != 0 )
    {
      if ( (_pctype_func()[(unsigned __int8)v4] & 4) == 0 )
        break;
      if ( v24 == 111 )
      {
        if ( v4 >= 56 )
          break;
        v34 = 8 * v33;
      }
      else
      {
        v34 = 10 * v33;
      }
      goto LABEL_135;
    }
    if ( SLOBYTE(_pctype_func()[(unsigned __int8)v4]) < 0 )
    {
      v67 = 16 * v33;
      v35 = (char)v4;
      v36 = _pctype_func();
      v37 = (unsigned __int8)v4;
      v4 = ((char)v4 & 0xFFFFFFDF) - 7;
      if ( (v36[v37] & 4) != 0 )
        v4 = v35;
      v34 = v67;
      Character = v4;
      v59 = v4;
LABEL_135:
      ++v65;
      v33 = v4 - 48 + v34;
      v67 = v33;
      if ( v64 )
      {
        if ( !--v62 )
          goto LABEL_140;
      }
      v58 = ++v8;
      v57 = v8;
      v4 = inc((__int64)v32);
      Character = v4;
      v59 = v4;
      continue;
    }
    break;
  }
  v58 = --v8;
  v57 = v8;
  if ( v4 != -1 )
    ungetc_nolock(v4, v32);
LABEL_140:
  v38 = -v67;
  if ( !v56 )
    v38 = v67;
  v67 = v38;
LABEL_162:
  if ( v65 )
  {
    if ( !v53 )
    {
      LODWORD(v66) = v66 + 1;
      v27 = v63;
      goto LABEL_165;
    }
    goto LABEL_182;
  }
LABEL_202:
  if ( v4 != -1 )
    return (unsigned int)v66;
LABEL_203:
  if ( (_DWORD)v66 || v55 )
    return (unsigned int)v66;
  return v10;
}
