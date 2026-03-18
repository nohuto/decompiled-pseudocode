/*
 * XREFs of _woutput_l @ 0x1C001AAF4
 * Callers:
 *     _vsnwprintf_l @ 0x1C001AA00 (_vsnwprintf_l.c)
 * Callees:
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C000BB30 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     write_char @ 0x1C001B410 (write_char.c)
 *     write_multi_char @ 0x1C001B464 (write_multi_char.c)
 *     write_string @ 0x1C001B4BC (write_string.c)
 *     _get_printf_count_output @ 0x1C001B548 (_get_printf_count_output.c)
 *     mbtowc @ 0x1C001B5B4 (mbtowc.c)
 */

__int64 __fastcall woutput_l(_iobuf *stream, wchar_t *format, localeinfo_struct *plocinfo, char *argptr)
{
  wchar_t *v4; // rsi
  char *v5; // r10
  _iobuf *v6; // r11
  int v7; // edi
  int v8; // r15d
  int v9; // r12d
  wchar_t v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  $B4FF2100EA110D8CD0B9C89F852FB035 *sz; // rbx
  char *v14; // r8
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // eax
  wchar_t v25; // ax
  unsigned __int16 *v26; // rax
  wchar_t v27; // ax
  unsigned __int64 v28; // r10
  char *v29; // rsi
  __int64 v30; // rax
  int v31; // eax
  int v32; // ecx
  const char *v33; // rax
  const wchar_t *v34; // rax
  const wchar_t *i; // r13
  unsigned __int64 v36; // r8
  char *v37; // rbx
  int v38; // ecx
  char v39; // r12
  int v40; // r9d
  int v41; // ecx
  $B4FF2100EA110D8CD0B9C89F852FB035 *v42; // rdx
  unsigned __int64 v43; // rdx
  char v44; // al
  _WORD *v45; // rsi
  _iobuf *v46; // r14
  int v47; // r15d
  _iobuf *v48; // rsi
  const char *v49; // r12
  int v50; // esi
  int v51; // eax
  __int64 v52; // r14
  int v53; // eax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  int v57; // eax
  int v58; // ecx
  int v59; // ecx
  int v60; // [rsp+30h] [rbp-D0h]
  int charsout; // [rsp+34h] [rbp-CCh] BYREF
  int v62; // [rsp+38h] [rbp-C8h]
  int v63; // [rsp+3Ch] [rbp-C4h]
  int v64; // [rsp+40h] [rbp-C0h]
  _iobuf *f; // [rsp+48h] [rbp-B8h]
  char tempchar[4]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t wchar; // [rsp+54h] [rbp-ACh] BYREF
  wchar_t prefix[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v69; // [rsp+5Ch] [rbp-A4h]
  char *v70; // [rsp+60h] [rbp-A0h]
  int v71; // [rsp+68h] [rbp-98h]
  int v72; // [rsp+6Ch] [rbp-94h]
  $12F061FBE778B92DEB8200A0ACF7A038 text; // [rsp+70h] [rbp-90h]
  $B4FF2100EA110D8CD0B9C89F852FB035 buffer; // [rsp+80h] [rbp-80h] BYREF

  v70 = argptr;
  f = stream;
  v4 = (wchar_t *)argptr;
  v71 = 0;
  v5 = (char *)format;
  v69 = 0;
  v6 = stream;
  v63 = 0;
  v7 = 0;
  v62 = 0;
  v8 = 0;
  v60 = 0;
  v9 = 0;
  v64 = 0;
  if ( stream && format )
  {
    v10 = *format;
    v11 = 0;
    charsout = 0;
    LODWORD(v12) = 0;
    v72 = 0;
    if ( v10 )
    {
      sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)text.sz;
      do
      {
        v14 = v5;
        v5 += 2;
        text.sz = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v10 - 32] & 0xF;
        v16 = _lookuptable[8 * v15 + v72] >> 4;
        v72 = v16;
        if ( !v16 )
          goto $NORMAL_STATE;
        v17 = v16 - 1;
        if ( !v17 )
        {
          v8 = -1;
          v60 = 0;
          v63 = -1;
          v9 = 0;
          v69 = 0;
          v7 = 0;
          v62 = 0;
          v64 = 0;
          goto LABEL_167;
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
          goto LABEL_167;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          if ( v10 == 42 )
          {
            v57 = *(_DWORD *)v4;
            v70 = (char *)(v4 + 4);
            v58 = v7 | 4;
            if ( v57 >= 0 )
              v58 = v7;
            v7 = v58;
            v59 = abs32(v57);
          }
          else
          {
            v59 = v10 + 2 * (5 * v69 - 24);
          }
          v69 = v59;
          goto LABEL_167;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v8 = 0;
          v63 = 0;
          goto LABEL_167;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          if ( v10 == 42 )
          {
            v8 = *(_DWORD *)v4;
            v70 = (char *)(v4 + 4);
            v63 = v8;
            if ( v8 < 0 )
            {
              v8 = -1;
              v63 = -1;
            }
          }
          else
          {
            v8 = v10 + 2 * (5 * v8 - 24);
            v63 = v8;
          }
          goto LABEL_167;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = (unsigned int)(v22 - 1);
          if ( !(_DWORD)v23 )
          {
            if ( v10 > 0x69u )
            {
              switch ( v10 )
              {
                case 'n':
                  v70 = (char *)(v4 + 4);
                  v45 = *(_WORD **)v4;
                  if ( !(unsigned int)get_printf_count_output(v23, (unsigned int)v10 - 110, v14) )
                    goto LABEL_191;
                  if ( (v7 & 0x20) != 0 )
                    *v45 = v11;
                  else
                    *(_DWORD *)v45 = v11;
                  v24 = 1;
                  v60 = 1;
                  goto LABEL_26;
                case 'o':
                  v28 = 8LL;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto $COMMON_INT;
                case 'p':
                  v8 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_78;
              }
              if ( v10 != 115 )
              {
                if ( v10 == 117 )
                  goto LABEL_50;
                if ( v10 != 120 )
                  goto LABEL_25;
                v31 = 39;
                goto LABEL_79;
              }
            }
            else
            {
              if ( v10 == 105 )
                goto LABEL_49;
              if ( v10 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x20u;
                goto LABEL_44;
              }
              if ( v10 != 83 )
              {
                if ( v10 != 88 )
                {
                  if ( v10 == 90 )
                  {
                    v26 = *(unsigned __int16 **)v4;
                    v70 = (char *)(v4 + 4);
                    if ( v26 && (sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)*((_QWORD *)v26 + 1)) != 0LL )
                    {
                      if ( v26[1] < *v26 )
                        goto LABEL_191;
                      LODWORD(v12) = *v26;
                      if ( (v7 & 0x800) != 0 )
                      {
                        if ( (v12 & 1) != 0 || ((unsigned __int8)sz & 1) != 0 )
                          goto LABEL_191;
                        LODWORD(v12) = *v26 >> 1;
                        v64 = 1;
                      }
                      else
                      {
                        v64 = 0;
                      }
                    }
                    else
                    {
                      sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                      LODWORD(v12) = 6;
                    }
                    goto LABEL_25;
                  }
                  if ( v10 != 99 )
                  {
                    if ( v10 != 100 )
                      goto LABEL_25;
LABEL_49:
                    v7 |= 0x40u;
LABEL_50:
                    v28 = 10LL;
$COMMON_INT:
                    v29 = (char *)(v4 + 4);
                    v70 = v29;
                    if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                    {
                      v30 = *((_QWORD *)v29 - 1);
                    }
                    else if ( (v7 & 0x20) != 0 )
                    {
                      if ( (v7 & 0x40) != 0 )
                        v30 = *((__int16 *)v29 - 4);
                      else
                        v30 = *((unsigned __int16 *)v29 - 4);
                    }
                    else if ( (v7 & 0x40) != 0 )
                    {
                      v30 = *((int *)v29 - 2);
                    }
                    else
                    {
                      v30 = *((unsigned int *)v29 - 2);
                    }
                    if ( (v7 & 0x40) != 0 && v30 < 0 )
                    {
                      v30 = -v30;
                      v7 |= 0x100u;
                    }
                    v36 = (unsigned int)v30;
                    if ( (v7 & 0x9000) != 0 )
                      v36 = v30;
                    if ( v8 >= 0 )
                    {
                      v7 &= ~8u;
                      if ( v8 > 512 )
                        v8 = 512;
                    }
                    else
                    {
                      v8 = 1;
                    }
                    v37 = &buffer.sz[511];
                    v38 = v36 != 0 ? v9 : 0;
                    v39 = v71;
                    v62 = v38;
                    v40 = v38;
                    while ( 1 )
                    {
                      v41 = v8;
                      v42 = ($B4FF2100EA110D8CD0B9C89F852FB035 *)v37;
                      --v8;
                      if ( v41 <= 0 && !v36 )
                        break;
                      v43 = v36 % v28;
                      v36 /= v28;
                      v44 = v43 + 48;
                      if ( (int)v43 + 48 > 57 )
                        v44 = v43 + v39 + 48;
                      *v37-- = v44;
                    }
                    v63 = v8;
                    LODWORD(v12) = (unsigned int)&buffer.wz[64] + 383 - (_DWORD)v37;
                    sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)(v37 + 1);
                    v9 = v40;
                    if ( (v7 & 0x200) != 0 )
                    {
                      if ( !(_DWORD)v12 || (v70 = v29, v62 = v40, sz->sz[0] != 48) )
                      {
                        sz = v42;
                        v42->sz[0] = 48;
                        LODWORD(v12) = v12 + 1;
                        v70 = v29;
                        v9 = v40;
                        v62 = v40;
                      }
                    }
LABEL_25:
                    v24 = v60;
LABEL_26:
                    if ( v24 )
                      goto LABEL_166;
                    if ( (v7 & 0x40) != 0 )
                    {
                      if ( (v7 & 0x100) != 0 )
                      {
                        v25 = 45;
                        goto LABEL_30;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v25 = 43;
LABEL_30:
                        prefix[0] = v25;
LABEL_119:
                        v9 = 1;
                        v62 = 1;
                      }
                      else if ( (v7 & 2) != 0 )
                      {
                        prefix[0] = 32;
                        goto LABEL_119;
                      }
                    }
                    v46 = f;
                    v47 = v69 - v12 - v9;
                    if ( (v7 & 0xC) == 0 )
                      write_multi_char(0x20u, v47, f, &charsout);
                    write_string(prefix, v9, v46, &charsout);
                    v48 = f;
                    if ( (v7 & 0xC) == 8 )
                      write_multi_char(0x30u, v47, f, &charsout);
                    if ( v64 || (int)v12 <= 0 )
                    {
                      write_string((wchar_t *)sz, v12, v48, &charsout);
LABEL_134:
                      v11 = charsout;
                    }
                    else
                    {
                      v49 = (const char *)sz;
                      v50 = v12;
                      while ( 1 )
                      {
                        --v50;
                        v51 = mbtowc(&wchar, v49, _mb_cur_max);
                        v52 = v51;
                        if ( v51 == 2 )
                          --v50;
                        if ( v51 <= 0 )
                          break;
                        write_char(wchar, f, &charsout);
                        v49 += v52;
                        if ( v50 <= 0 )
                        {
                          v9 = v62;
                          v48 = f;
                          goto LABEL_134;
                        }
                      }
                      v9 = v62;
                      v11 = -1;
                      v48 = f;
                      charsout = -1;
                    }
                    if ( v11 >= 0 && (v7 & 4) != 0 )
                    {
                      write_multi_char(0x20u, v47, v48, &charsout);
                      v11 = charsout;
                    }
                    v8 = v63;
                    goto LABEL_166;
                  }
LABEL_44:
                  v27 = *v4;
                  wchar = *v4;
                  v64 = 1;
                  v70 = (char *)(v4 + 4);
                  if ( (v7 & 0x20) != 0 )
                  {
                    tempchar[0] = v27;
                    tempchar[1] = 0;
                    if ( mbtowc((wchar_t *)&buffer, tempchar, _mb_cur_max) < 0 )
                      v60 = 1;
                  }
                  else
                  {
                    buffer.wz[0] = v27;
                  }
                  sz = &buffer;
                  LODWORD(v12) = 1;
                  goto LABEL_25;
                }
LABEL_78:
                v31 = 7;
LABEL_79:
                v71 = v31;
                if ( (v7 & 0x80u) != 0 )
                {
                  prefix[0] = 48;
                  prefix[1] = v31 + 81;
                  v9 = 2;
                }
                v28 = 16LL;
                goto $COMMON_INT;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x20u;
            }
            sz = *($B4FF2100EA110D8CD0B9C89F852FB035 **)v4;
            v32 = v8;
            if ( v8 == -1 )
              v32 = 0x7FFFFFFF;
            v70 = (char *)(v4 + 4);
            if ( (v7 & 0x20) != 0 )
            {
              LODWORD(v12) = 0;
              v33 = (const char *)sz;
              if ( !sz )
              {
                sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                v33 = "(null)";
              }
              if ( v32 > 0 )
              {
                do
                {
                  if ( !*v33 )
                    break;
                  ++v33;
                  LODWORD(v12) = v12 + 1;
                }
                while ( (int)v12 < v32 );
              }
            }
            else
            {
              v64 = 1;
              v34 = L"(null)";
              if ( sz )
                v34 = (const wchar_t *)sz;
              sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)v34;
              for ( i = v34; v32; ++i )
              {
                --v32;
                if ( !*i )
                  break;
              }
              v12 = i - v34;
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
              goto LABEL_167;
            }
            if ( v10 != 106 )
            {
              if ( v10 == 108 )
              {
                v53 = 4096;
                if ( *(_WORD *)v5 != 108 )
                  v53 = 16;
                v7 |= v53;
                if ( *(_WORD *)v5 != 108 )
                  v5 = v14;
                v5 += 2;
                goto LABEL_167;
              }
              if ( v10 != 116 )
              {
                if ( v10 == 119 )
                {
                  v7 |= 0x800u;
                  goto LABEL_167;
                }
                if ( v10 != 122 )
                  goto LABEL_167;
              }
            }
          }
          v7 |= 0x8000u;
          if ( v10 == 73 )
          {
            if ( *(_WORD *)v5 == 54 && *((_WORD *)v14 + 2) == 52 )
            {
              v5 = v14 + 6;
            }
            else
            {
              if ( *(_WORD *)v5 != 51 || *((_WORD *)v14 + 2) != 50 )
              {
LABEL_162:
                v54 = *(unsigned __int16 *)v5;
                LOWORD(v54) = v54 - 88;
                if ( (unsigned __int16)v54 <= 0x20u )
                {
                  v55 = 0x120821001LL;
                  if ( _bittest64(&v55, v54) )
                    goto LABEL_167;
                }
                v72 = 0;
$NORMAL_STATE:
                v64 = 1;
                write_char(v10, v6, &charsout);
                v11 = charsout;
LABEL_166:
                v6 = f;
                v5 = text.sz;
                goto LABEL_167;
              }
              v5 = v14 + 6;
              v7 &= ~0x8000u;
            }
          }
          else if ( v10 != 106 )
          {
            goto LABEL_162;
          }
        }
LABEL_167:
        v10 = *(_WORD *)v5;
        v4 = (wchar_t *)v70;
      }
      while ( *(_WORD *)v5 );
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_191:
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
