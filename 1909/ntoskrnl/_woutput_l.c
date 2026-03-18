/*
 * XREFs of _woutput_l @ 0x1401A3390
 * Callers:
 *     _vsnwprintf_l @ 0x14019FA5C (_vsnwprintf_l.c)
 *     _snwprintf @ 0x1401A0130 (_snwprintf.c)
 *     swprintf @ 0x1401A0640 (swprintf.c)
 *     _vswprintf_l @ 0x1401A072C (_vswprintf_l.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x1401A1080 (_safecrt_mbtowc.c)
 *     write_char @ 0x1401A3CC0 (write_char.c)
 *     write_multi_char @ 0x1401A3D14 (write_multi_char.c)
 *     write_string @ 0x1401A3D6C (write_string.c)
 *     _get_printf_count_output @ 0x1401A4D74 (_get_printf_count_output.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall woutput_l(__int64 a1, unsigned __int16 *a2, __int64 a3, wchar_t *a4)
{
  int v6; // edi
  int v7; // r15d
  wchar_t *v8; // rbx
  wchar_t *v9; // rsi
  unsigned __int16 v10; // r9
  int v11; // r14d
  __int64 v12; // r13
  int v13; // r10d
  unsigned __int16 *v14; // r8
  int v15; // ecx
  unsigned __int64 v16; // r10
  wchar_t *v17; // rsi
  __int64 v18; // rax
  unsigned __int16 *v19; // rcx
  wchar_t v20; // ax
  int v21; // eax
  int v22; // ecx
  const char *v23; // rax
  const wchar_t *v24; // rax
  const wchar_t *i; // r13
  unsigned __int64 v26; // r8
  char v27; // r11
  char *v28; // rbx
  int v29; // r9d
  int v30; // ecx
  unsigned __int64 v31; // rdx
  char v32; // al
  int v33; // eax
  __int16 v34; // ax
  _WORD *v35; // rsi
  unsigned int v36; // r14d
  unsigned int v37; // r12d
  __int64 v38; // rsi
  const char *v39; // r15
  int v40; // esi
  int v41; // eax
  __int64 v42; // r14
  int v44; // eax
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+34h] [rbp-CCh] BYREF
  int v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+3Ch] [rbp-C4h]
  int v54; // [rsp+40h] [rbp-C0h]
  int v55; // [rsp+44h] [rbp-BCh]
  char SrcCh[4]; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t v57; // [rsp+4Ch] [rbp-B4h] BYREF
  _WORD v58[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+54h] [rbp-ACh]
  wchar_t *v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  int v62; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v63; // [rsp+70h] [rbp-90h]
  wchar_t DstCh[512]; // [rsp+80h] [rbp-80h] BYREF

  v61 = a1;
  v62 = 0;
  v59 = 0;
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v6 = 0;
  v60 = a4;
  v7 = 0;
  v8 = 0LL;
  v9 = a4;
  memset(DstCh, 0, sizeof(DstCh));
  v54 = 0;
  if ( a1 && a2 )
  {
    v10 = *a2;
    v11 = 0;
    v51 = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v14 = a2++;
        v63 = a2;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v10 - 32] & 0xF;
        v13 = _lookuptable[8 * v15 + v13] >> 4;
        v55 = v13;
        switch ( v13 )
        {
          case 0:
            goto LABEL_167;
          case 1:
            v7 = -1;
            v50 = 0;
            v53 = -1;
            v6 = 0;
            v59 = 0;
            v52 = 0;
            v54 = 0;
            goto LABEL_139;
          case 2:
            switch ( v10 )
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
            goto LABEL_139;
          case 3:
            if ( v10 == 42 )
            {
              v47 = *(_DWORD *)v9;
              v60 = v9 + 4;
              v48 = v6 | 4;
              if ( v47 >= 0 )
                v48 = v6;
              v6 = v48;
              v49 = abs32(v47);
            }
            else
            {
              v49 = v10 + 2 * (5 * v59 - 24);
            }
            v59 = v49;
            goto LABEL_139;
          case 4:
            v7 = 0;
            v53 = 0;
            goto LABEL_139;
          case 5:
            if ( v10 == 42 )
            {
              v7 = *(_DWORD *)v9;
              v60 = v9 + 4;
              v53 = v7;
              if ( v7 < 0 )
              {
                v7 = -1;
                v53 = -1;
              }
            }
            else
            {
              v7 = v10 + 2 * (5 * v7 - 24);
              v53 = v7;
            }
            goto LABEL_139;
          case 6:
            if ( v10 != 73 )
            {
              if ( v10 == 104 )
              {
                v6 |= 0x20u;
                goto LABEL_139;
              }
              if ( v10 != 106 )
              {
                if ( v10 == 108 )
                {
                  v44 = 4096;
                  if ( *a2 != 108 )
                    v44 = 16;
                  v6 |= v44;
                  if ( *a2 != 108 )
                    a2 = v14;
                  ++a2;
                  goto LABEL_139;
                }
                if ( v10 != 116 )
                {
                  if ( v10 == 119 )
                  {
                    v6 |= 0x800u;
                    goto LABEL_139;
                  }
                  if ( v10 != 122 )
                    goto LABEL_139;
                }
              }
            }
            v6 |= 0x8000u;
            if ( v10 == 73 )
            {
              if ( *a2 == 54 && v14[2] == 52 )
              {
                a2 = v14 + 3;
                goto LABEL_139;
              }
              if ( *a2 == 51 && v14[2] == 50 )
              {
                a2 = v14 + 3;
                v6 &= ~0x8000u;
                goto LABEL_139;
              }
            }
            else if ( v10 == 106 )
            {
              goto LABEL_139;
            }
            v45 = *a2;
            LOWORD(v45) = v45 - 88;
            if ( (unsigned __int16)v45 <= 0x20u )
            {
              v46 = 0x120821001LL;
              if ( _bittest64(&v46, v45) )
                goto LABEL_139;
            }
            v55 = 0;
LABEL_167:
            v54 = 1;
            write_char(v10, v61, &v51);
            goto LABEL_138;
        }
        if ( v13 == 7 )
          break;
LABEL_139:
        v10 = *a2;
        v9 = v60;
        if ( !*a2 )
          return (unsigned int)v11;
      }
      if ( v10 > 0x69u )
      {
        switch ( v10 )
        {
          case 'n':
            v60 = v9 + 4;
            v35 = *(_WORD **)v9;
            if ( !get_printf_count_output() )
              goto LABEL_193;
            if ( (v6 & 0x20) != 0 )
              *v35 = v11;
            else
              *(_DWORD *)v35 = v11;
            v33 = 1;
            v50 = 1;
            goto LABEL_104;
          case 'o':
            v16 = 8LL;
            if ( (v6 & 0x80u) != 0 )
              v6 |= 0x200u;
            goto LABEL_26;
          case 'p':
            v7 = 16;
            v6 |= 0x8000u;
LABEL_71:
            v21 = 7;
            goto LABEL_72;
        }
        if ( v10 != 115 )
        {
          if ( v10 == 117 )
          {
LABEL_25:
            v16 = 10LL;
LABEL_26:
            v17 = v9 + 4;
            v60 = v17;
            if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
            {
              v18 = *((_QWORD *)v17 - 1);
            }
            else if ( (v6 & 0x20) != 0 )
            {
              if ( (v6 & 0x40) != 0 )
                v18 = (__int16)*(v17 - 4);
              else
                v18 = *(v17 - 4);
            }
            else if ( (v6 & 0x40) != 0 )
            {
              v18 = *((int *)v17 - 2);
            }
            else
            {
              v18 = *((unsigned int *)v17 - 2);
            }
            if ( (v6 & 0x40) != 0 && v18 < 0 )
            {
              v18 = -v18;
              v6 |= 0x100u;
            }
            v26 = (unsigned int)v18;
            if ( (v6 & 0x9000) != 0 )
              v26 = v18;
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
            v27 = v62;
            v28 = (char *)&DstCh[255] + 1;
            v52 &= -(v26 != 0);
            v29 = v52;
            while ( 1 )
            {
              v30 = v7--;
              if ( v30 <= 0 && !v26 )
                break;
              v31 = v26 % v16;
              v26 /= v16;
              v32 = v31 + 48;
              if ( (int)v31 + 48 > 57 )
                v32 = v31 + v27 + 48;
              *v28-- = v32;
            }
            v53 = v7;
            LODWORD(v12) = (unsigned int)&DstCh[64] + 383 - (_DWORD)v28;
            v8 = (wchar_t *)(v28 + 1);
            if ( (v6 & 0x200) != 0 )
            {
              if ( !(_DWORD)v12 || (v60 = v17, v52 = v29, *(_BYTE *)v8 != 48) )
              {
                v8 = (wchar_t *)((char *)v8 - 1);
                v60 = v17;
                LODWORD(v12) = v12 + 1;
                v52 = v29;
                *(_BYTE *)v8 = 48;
              }
            }
            goto LABEL_103;
          }
          if ( v10 != 120 )
            goto LABEL_103;
          v21 = 39;
LABEL_72:
          v62 = v21;
          if ( (v6 & 0x80u) != 0 )
          {
            v52 = 2;
            v58[0] = 48;
            v58[1] = v21 + 81;
          }
          v16 = 16LL;
          goto LABEL_26;
        }
      }
      else
      {
        if ( v10 == 105 )
          goto LABEL_24;
        if ( v10 == 67 )
        {
          if ( (v6 & 0x830) == 0 )
            v6 |= 0x20u;
          goto LABEL_42;
        }
        if ( v10 != 83 )
        {
          if ( v10 != 88 )
          {
            if ( v10 == 90 )
            {
              v19 = *(unsigned __int16 **)v9;
              v60 = v9 + 4;
              if ( v19 && (v8 = (wchar_t *)*((_QWORD *)v19 + 1)) != 0LL )
              {
                if ( v19[1] < *v19 )
                  goto LABEL_193;
                LODWORD(v12) = *v19;
                if ( (v6 & 0x800) != 0 )
                {
                  if ( (v12 & 1) != 0 || ((unsigned __int8)v8 & 1) != 0 )
                    goto LABEL_193;
                  LODWORD(v12) = *v19 >> 1;
                  v54 = 1;
                }
                else
                {
                  v54 = 0;
                }
              }
              else
              {
                v8 = (wchar_t *)"(null)";
                LODWORD(v12) = 6;
              }
              goto LABEL_103;
            }
            if ( v10 != 99 )
            {
              if ( v10 == 100 )
              {
LABEL_24:
                v6 |= 0x40u;
                goto LABEL_25;
              }
LABEL_103:
              v33 = v50;
LABEL_104:
              if ( v33 )
              {
                v13 = v55;
                goto LABEL_139;
              }
              if ( (v6 & 0x40) != 0 )
              {
                if ( (v6 & 0x100) != 0 )
                {
                  v34 = 45;
                  goto LABEL_115;
                }
                if ( (v6 & 1) != 0 )
                {
                  v34 = 43;
LABEL_115:
                  v58[0] = v34;
LABEL_116:
                  v36 = 1;
                  v52 = 1;
LABEL_120:
                  v37 = v59 - v12 - v36;
                  if ( (v6 & 0xC) == 0 )
                    write_multi_char(32LL, v37, v61, &v51);
                  write_string(v58, v36, v61, &v51);
                  v38 = v61;
                  if ( (v6 & 0xC) == 8 )
                    write_multi_char(48LL, v37, v61, &v51);
                  if ( v54 || (int)v12 <= 0 )
                  {
                    write_string(v8, (unsigned int)v12, v38, &v51);
LABEL_134:
                    v11 = v51;
                  }
                  else
                  {
                    v39 = (const char *)v8;
                    v40 = v12;
                    while ( 1 )
                    {
                      --v40;
                      v41 = safecrt_mbtowc(&v57, v39, _mb_cur_max);
                      v42 = v41;
                      if ( v41 == 2 )
                        --v40;
                      if ( v41 <= 0 )
                        break;
                      write_char(v57, v61, &v51);
                      v39 += v42;
                      if ( v40 <= 0 )
                      {
                        v7 = v53;
                        v38 = v61;
                        goto LABEL_134;
                      }
                    }
                    v7 = v53;
                    v11 = -1;
                    v38 = v61;
                    v51 = -1;
                  }
                  if ( v11 < 0 || (v6 & 4) == 0 )
                  {
                    a2 = v63;
                    v13 = v55;
                    goto LABEL_139;
                  }
                  write_multi_char(32LL, v37, v38, &v51);
                  a2 = v63;
LABEL_138:
                  v11 = v51;
                  v13 = v55;
                  goto LABEL_139;
                }
                if ( (v6 & 2) != 0 )
                {
                  v58[0] = 32;
                  goto LABEL_116;
                }
              }
              v36 = v52;
              goto LABEL_120;
            }
LABEL_42:
            v20 = *v9;
            v57 = *v9;
            v54 = 1;
            v60 = v9 + 4;
            if ( (v6 & 0x20) != 0 )
            {
              SrcCh[0] = v20;
              SrcCh[1] = 0;
              if ( safecrt_mbtowc(DstCh, SrcCh, _mb_cur_max) < 0 )
                v50 = 1;
            }
            else
            {
              DstCh[0] = v20;
            }
            v8 = DstCh;
            LODWORD(v12) = 1;
            goto LABEL_103;
          }
          goto LABEL_71;
        }
        if ( (v6 & 0x830) == 0 )
          v6 |= 0x20u;
      }
      v8 = *(wchar_t **)v9;
      v22 = v7;
      if ( v7 == -1 )
        v22 = 0x7FFFFFFF;
      v60 = v9 + 4;
      if ( (v6 & 0x20) != 0 )
      {
        v23 = (const char *)v8;
        if ( !v8 )
        {
          v8 = (wchar_t *)"(null)";
          v23 = "(null)";
        }
        LODWORD(v12) = 0;
        if ( v22 > 0 )
        {
          do
          {
            if ( !*v23 )
              break;
            ++v23;
            LODWORD(v12) = v12 + 1;
          }
          while ( (int)v12 < v22 );
        }
      }
      else
      {
        v54 = 1;
        v24 = L"(null)";
        if ( v8 )
          v24 = v8;
        v8 = (wchar_t *)v24;
        for ( i = v24; v22; ++i )
        {
          --v22;
          if ( !*i )
            break;
        }
        v12 = i - v24;
      }
      goto LABEL_103;
    }
    return (unsigned int)v11;
  }
  else
  {
LABEL_193:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
