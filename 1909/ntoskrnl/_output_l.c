/*
 * XREFs of _output_l @ 0x1401A3DF8
 * Callers:
 *     _vsnprintf_l @ 0x14019FB8C (_vsnprintf_l.c)
 *     _snprintf @ 0x1401A0070 (_snprintf.c)
 *     sprintf @ 0x1401A19D0 (sprintf.c)
 *     _vsprintf_l @ 0x1401A24E4 (_vsprintf_l.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wctomb_s @ 0x1401A2D60 (wctomb_s.c)
 *     write_char_0 @ 0x1401A4618 (write_char_0.c)
 *     write_multi_char_0 @ 0x1401A4670 (write_multi_char_0.c)
 *     write_string_0 @ 0x1401A46C8 (write_string_0.c)
 *     _get_printf_count_output @ 0x1401A4D74 (_get_printf_count_output.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall output_l(__int64 a1, _BYTE *a2, __int64 a3, int *a4)
{
  int v6; // edi
  int v7; // r12d
  int v8; // esi
  wchar_t *v9; // rbx
  char v11; // r9
  int v12; // r15d
  unsigned int v13; // r10d
  _BYTE *v14; // r8
  int v15; // ecx
  char *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  unsigned __int16 *v20; // rdx
  const wchar_t *v21; // rax
  int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  char *v25; // rbx
  int v26; // ecx
  char v27; // si
  int v28; // r9d
  unsigned __int64 v29; // rdx
  char v30; // al
  int v31; // eax
  wchar_t *v32; // rsi
  unsigned int v33; // r15d
  unsigned int v34; // r14d
  __int64 v35; // rcx
  __int64 v36; // r15
  int v37; // esi
  wchar_t *v38; // r15
  wchar_t v39; // r9
  __int64 v40; // rcx
  int v41; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v48[4]; // [rsp+38h] [rbp-C8h] BYREF
  int SizeConverted; // [rsp+3Ch] [rbp-C4h] BYREF
  int v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+44h] [rbp-BCh]
  unsigned int v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+4Ch] [rbp-B4h]
  int v54; // [rsp+50h] [rbp-B0h]
  __int64 v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v57; // [rsp+68h] [rbp-98h]
  char MbCh[512]; // [rsp+70h] [rbp-90h] BYREF
  char v59[8]; // [rsp+270h] [rbp+170h] BYREF

  v55 = a1;
  v54 = 0;
  v51 = 0;
  v46 = 0;
  v53 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  memset(MbCh, 0, sizeof(MbCh));
  v50 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v47 = 0;
    v13 = 0;
    SizeConverted = 0;
    if ( v11 )
    {
      do
      {
        v14 = a2++;
        v57 = a2;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x5Au )
          v15 = 0;
        else
          v15 = _lookuptable[v11 - 32] & 0xF;
        v16 = _lookuptable;
        v13 = _lookuptable[v13 + 8 * v15] >> 4;
        v52 = v13;
        v17 = v13;
        switch ( v13 )
        {
          case 0u:
            goto LABEL_164;
          case 1u:
            v53 = 0;
            v8 = 0;
            v51 = 0;
            v6 = 0;
            v46 = 0;
            v7 = -1;
            v50 = 0;
            goto LABEL_167;
          case 2u:
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
            goto LABEL_167;
          case 3u:
            if ( v11 == 42 )
            {
              v43 = *a4;
              a4 += 2;
              v44 = v6 | 4;
              if ( v43 >= 0 )
                v44 = v6;
              v6 = v44;
              v45 = abs32(v43);
            }
            else
            {
              v45 = v11 + 2 * (5 * v51 - 24);
            }
            v51 = v45;
            goto LABEL_167;
          case 4u:
            v7 = 0;
            goto LABEL_167;
          case 5u:
            if ( v11 == 42 )
            {
              v7 = *a4;
              a4 += 2;
              if ( v7 < 0 )
                v7 = -1;
            }
            else
            {
              v7 = v11 + 2 * (5 * v7 - 24);
            }
            goto LABEL_167;
        }
        v17 = v13 - 6;
        if ( v13 == 6 )
        {
          switch ( v11 )
          {
            case 'I':
              goto LABEL_146;
            case 'h':
              v6 |= 0x20u;
              break;
            case 'j':
              goto LABEL_146;
            case 'l':
              v41 = 4096;
              if ( *a2 != 108 )
                v41 = 16;
              v6 |= v41;
              if ( *a2 != 108 )
                a2 = v14;
              ++a2;
              break;
            case 't':
              goto LABEL_146;
            case 'w':
              v6 |= 0x800u;
              break;
            case 'z':
LABEL_146:
              v6 |= 0x8000u;
              if ( v11 == 73 )
              {
                if ( *a2 == 54 && v14[2] == 52 )
                {
                  a2 = v14 + 3;
                }
                else
                {
                  if ( *a2 != 51 || v14[2] != 50 )
                  {
LABEL_161:
                    LOBYTE(v16) = *a2 - 88;
                    if ( (unsigned __int8)v16 <= 0x20u )
                    {
                      v17 = 0x120821001LL;
                      if ( _bittest64(&v17, (unsigned __int64)v16) )
                        break;
                    }
                    v52 = 0;
LABEL_164:
                    LOBYTE(v17) = v11;
                    v50 = 0;
                    write_char_0(v17, v55, &v47);
LABEL_165:
                    v12 = v47;
                    goto LABEL_166;
                  }
                  a2 = v14 + 3;
                  v6 &= ~0x8000u;
                }
              }
              else if ( v11 != 106 )
              {
                goto LABEL_161;
              }
              break;
          }
        }
        else if ( v13 == 7 )
        {
          if ( v11 > 105 )
          {
            switch ( v11 )
            {
              case 'n':
                v32 = *(wchar_t **)a4;
                a4 += 2;
                if ( !get_printf_count_output() )
                  goto LABEL_191;
                if ( (v6 & 0x20) != 0 )
                  *v32 = v12;
                else
                  *(_DWORD *)v32 = v12;
                v8 = v46;
                v53 = 1;
                goto LABEL_106;
              case 'o':
                v18 = 8LL;
                if ( (v6 & 0x80u) != 0 )
                  v6 |= 0x200u;
                goto LABEL_26;
              case 'p':
                v7 = 16;
                v6 |= 0x8000u;
                goto LABEL_74;
            }
            if ( v11 != 115 )
            {
              if ( v11 != 117 )
              {
                if ( v11 != 120 )
                  goto LABEL_106;
                v22 = 39;
                goto LABEL_75;
              }
LABEL_25:
              v18 = 10LL;
LABEL_26:
              a4 += 2;
              if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
              {
                v19 = *((_QWORD *)a4 - 1);
              }
              else if ( (v6 & 0x20) != 0 )
              {
                if ( (v6 & 0x40) != 0 )
                  v19 = *((__int16 *)a4 - 4);
                else
                  v19 = *((unsigned __int16 *)a4 - 4);
              }
              else if ( (v6 & 0x40) != 0 )
              {
                v19 = *(a4 - 2);
              }
              else
              {
                v19 = (unsigned int)*(a4 - 2);
              }
              if ( (v6 & 0x40) != 0 && v19 < 0 )
              {
                v19 = -v19;
                v6 |= 0x100u;
              }
              v24 = (unsigned int)v19;
              if ( (v6 & 0x9000) != 0 )
                v24 = v19;
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
              v25 = &MbCh[511];
              v26 = v24 != 0 ? v8 : 0;
              v27 = v54;
              v46 = v26;
              v28 = v26;
              while ( 1 )
              {
                v17 = (unsigned int)v7--;
                if ( (int)v17 <= 0 && !v24 )
                  break;
                v29 = v24 % v18;
                v24 /= v18;
                v30 = v29 + 48;
                if ( (int)v29 + 48 > 57 )
                  v30 = v29 + v27 + 48;
                *v25-- = v30;
              }
              v8 = v28;
              v31 = (unsigned int)&MbCh[144] + 367 - (_DWORD)v25;
              v9 = (wchar_t *)(v25 + 1);
              SizeConverted = v31;
              if ( (v6 & 0x200) != 0 )
              {
                if ( !v31 || (v46 = v28, *(_BYTE *)v9 != 48) )
                {
                  v9 = (wchar_t *)((char *)v9 - 1);
                  v46 = v28;
                  v8 = v28;
                  SizeConverted = v31 + 1;
                  *(_BYTE *)v9 = 48;
                }
              }
              goto LABEL_106;
            }
          }
          else
          {
            if ( v11 == 105 )
              goto LABEL_24;
            if ( v11 == 67 )
            {
              if ( (v6 & 0x830) == 0 )
                v6 |= 0x800u;
              goto LABEL_49;
            }
            if ( v11 != 83 )
            {
              if ( v11 != 88 )
              {
                if ( v11 == 90 )
                {
                  v20 = *(unsigned __int16 **)a4;
                  a4 += 2;
                  if ( v20 && (v9 = (wchar_t *)*((_QWORD *)v20 + 1)) != 0LL )
                  {
                    if ( v20[1] < *v20 )
                      goto LABEL_191;
                    v17 = *v20;
                    if ( (v6 & 0x800) != 0 )
                    {
                      if ( (v17 & 1) != 0 || ((unsigned __int8)v9 & 1) != 0 )
                        goto LABEL_191;
                      v50 = 1;
                      v17 = (unsigned int)v17 >> 1;
                    }
                    else
                    {
                      v50 = 0;
                    }
                  }
                  else
                  {
                    v9 = (wchar_t *)"(null)";
                    v17 = 6LL;
                  }
                  SizeConverted = v17;
                  goto LABEL_106;
                }
                if ( v11 != 99 )
                {
                  if ( v11 == 100 )
                  {
LABEL_24:
                    v6 |= 0x40u;
                    goto LABEL_25;
                  }
LABEL_106:
                  if ( v53 )
                    goto LABEL_166;
                  if ( (v6 & 0x40) == 0 )
                    goto LABEL_120;
                  if ( (v6 & 0x100) != 0 )
                  {
                    v48[0] = 45;
                    goto LABEL_117;
                  }
                  if ( (v6 & 1) != 0 )
                  {
                    v48[0] = 43;
                    goto LABEL_117;
                  }
                  if ( (v6 & 2) != 0 )
                  {
                    v48[0] = 32;
LABEL_117:
                    v33 = 1;
                    v46 = 1;
                  }
                  else
                  {
LABEL_120:
                    v33 = v46;
                  }
                  v34 = v51 - SizeConverted - v33;
                  if ( (v6 & 0xC) == 0 )
                  {
                    LOBYTE(v17) = 32;
                    write_multi_char_0(v17, v34, v55, &v47);
                  }
                  write_string_0(v48, v33, v55, &v47);
                  v36 = v55;
                  if ( (v6 & 0xC) == 8 )
                  {
                    LOBYTE(v35) = 48;
                    write_multi_char_0(v35, v34, v55, &v47);
                  }
                  v37 = SizeConverted;
                  if ( v50 && SizeConverted > 0 )
                  {
                    v38 = v9;
                    while ( 1 )
                    {
                      v39 = *v38++;
                      --v37;
                      if ( wctomb_s(&v56, v59, 6uLL, v39) || !v56 )
                        break;
                      write_string_0(v59, (unsigned int)v56, v55, &v47);
                      if ( !v37 )
                        goto LABEL_134;
                    }
                    v12 = -1;
                    v47 = -1;
                  }
                  else
                  {
                    write_string_0(v9, (unsigned int)SizeConverted, v36, &v47);
LABEL_134:
                    v12 = v47;
                  }
                  if ( v12 >= 0 && (v6 & 4) != 0 )
                  {
                    LOBYTE(v40) = 32;
                    write_multi_char_0(v40, v34, v55, &v47);
                    a2 = v57;
                    v8 = v46;
                    goto LABEL_165;
                  }
                  a2 = v57;
                  v8 = v46;
LABEL_166:
                  v13 = v52;
                  goto LABEL_167;
                }
LABEL_49:
                a4 += 2;
                if ( (v6 & 0x810) != 0 )
                {
                  if ( wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4)) )
                    v53 = 1;
                }
                else
                {
                  MbCh[0] = *((_BYTE *)a4 - 8);
                  SizeConverted = 1;
                }
                v9 = (wchar_t *)MbCh;
                goto LABEL_106;
              }
LABEL_74:
              v22 = 7;
LABEL_75:
              v54 = v22;
              if ( (v6 & 0x80u) != 0 )
              {
                v48[0] = 48;
                v48[1] = v22 + 81;
                v8 = 2;
              }
              v18 = 16LL;
              goto LABEL_26;
            }
            if ( (v6 & 0x830) == 0 )
              v6 |= 0x800u;
          }
          v9 = *(wchar_t **)a4;
          v17 = (unsigned int)v7;
          if ( v7 == -1 )
            v17 = 0x7FFFFFFFLL;
          a4 += 2;
          if ( (v6 & 0x810) != 0 )
          {
            v21 = v9;
            if ( !v9 )
            {
              v9 = L"(null)";
              v21 = L"(null)";
            }
            v50 = 1;
            while ( (_DWORD)v17 )
            {
              v17 = (unsigned int)(v17 - 1);
              if ( !*v21 )
                break;
              ++v21;
            }
            v23 = v21 - v9;
          }
          else
          {
            v23 = (__int64)"(null)";
            if ( v9 )
              v23 = (__int64)v9;
            v9 = (wchar_t *)v23;
            while ( (_DWORD)v17 )
            {
              v17 = (unsigned int)(v17 - 1);
              if ( !*(_BYTE *)v23 )
                break;
              ++v23;
            }
            LODWORD(v23) = v23 - (_DWORD)v9;
          }
          SizeConverted = v23;
          goto LABEL_106;
        }
LABEL_167:
        v11 = *a2;
      }
      while ( *a2 );
    }
    return (unsigned int)v12;
  }
  else
  {
LABEL_191:
    xHalTimerWatchdogStop();
    return 0xFFFFFFFFLL;
  }
}
