/*
 * XREFs of xxxInternalToUnicode @ 0x1C005B8F0
 * Callers:
 *     xxxToUnicodeEx @ 0x1C005B7D0 (xxxToUnicodeEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     HKLtoPKL @ 0x1C005BC40 (HKLtoPKL.c)
 *     GetModifierBits @ 0x1C005BC90 (GetModifierBits.c)
 *     InternalVkKeyScanEx @ 0x1C0061830 (InternalVkKeyScanEx.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0130AF8 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C013D768 (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionMessageBeep @ 0x1C013F020 (ApiSetEditionMessageBeep.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        int a1,
        __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  int *v12; // r8
  int v13; // ebp
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r12
  int v19; // r15d
  unsigned __int16 v20; // bx
  unsigned __int16 ModifierBits; // ax
  char v22; // r11
  unsigned __int16 v23; // dx
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 result; // rax
  char *v27; // rbx
  unsigned __int8 v28; // r9
  __int64 v29; // r9
  __int16 v30; // ax
  __int64 v31; // rbp
  struct DEADKEY *v32; // rdx
  __int16 v33; // ax
  int v34; // ecx
  __int64 v35; // rcx
  unsigned int v36; // eax
  int v37; // edx
  char v38; // al
  int v39; // ecx
  char v40; // al
  char v41; // al
  unsigned __int16 v42; // r8
  char *v43; // rcx
  char v44; // al
  char v45; // dl
  int v46; // ebp
  int v47; // ebx
  unsigned __int16 *v48; // rdi
  unsigned __int16 v49; // dx
  unsigned __int16 *v50; // r9
  int v51; // eax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = a7;
  v13 = a2 & 0x8000;
  v14 = ThreadWin32Thread;
  *a7 = v13;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  if ( a8 || (v16 = *(_QWORD *)(ThreadWin32Thread + 432)) == 0 )
  {
    v15 = HKLtoPKL(ThreadWin32Thread, a8);
    v16 = v15;
    if ( !v15 )
      return 0LL;
    v17 = *(_QWORD *)(v15 + 48);
    v12 = a7;
  }
  else
  {
    v17 = *(_QWORD *)(v16 + 48);
  }
  v18 = *(_QWORD *)(v17 + 32);
  v19 = a2 & 0x1FF;
  v20 = word_1C01A0CEC;
  if ( v13 )
  {
    if ( a1 != 18 )
    {
      if ( a1 == (unsigned __int16)word_1C01A0CF0 )
        word_1C01A0CF0 = 0;
      goto LABEL_6;
    }
    if ( !word_1C01A0CEC )
    {
      if ( byte_1C01A0CEE )
        byte_1C01A0CEE = 0;
      goto LABEL_6;
    }
    if ( byte_1C01A0CEE == 3 )
      goto LABEL_61;
    if ( byte_1C01A0CEE )
    {
      v35 = *(unsigned __int16 *)(v16 + 72);
    }
    else
    {
      if ( (*(_DWORD *)(v14 + 480) & 8) != 0 )
      {
        *v12 = v13 | 0x4000000;
LABEL_61:
        *a4 = v20;
LABEL_74:
        gfInNumpadHexInput &= ~2u;
        result = 1LL;
        word_1C01A0CF0 = 0;
        byte_1C01A0CEE = 0;
        word_1C01A0CEC = 0;
        return result;
      }
      v35 = NlsOemCodePage;
    }
    v36 = (unsigned __int16)v35;
    if ( (unsigned __int16)(v35 - 932) <= 0x12u && (v37 = 393233, LOWORD(v36) = v35 - 932, _bittest(&v37, v36)) )
    {
      if ( (word_1C01A0CEC & 0xFF00) != 0 )
      {
        v20 = _byteswap_ushort(word_1C01A0CEC);
        word_1C01A0CEC = v20;
      }
      else if ( ((_WORD)v35 != 932 || (unsigned __int16)(word_1C01A0CEC - 161) > 0x3Eu)
             && (unsigned __int16)(word_1C01A0CEC - 128) <= 0x7Fu )
      {
        v35 = 1252LL;
      }
    }
    else
    {
      HIBYTE(word_1C01A0CEC) = 0;
      v20 = word_1C01A0CEC;
    }
    *a4 = ApiSetEditionClientCharToWchar(v35, v20, 932LL, 0LL);
    goto LABEL_74;
  }
LABEL_6:
  if ( (v13 & 0x8000) != 0 && (a6 & 2) == 0 )
    return 0LL;
  ModifierBits = GetModifierBits(*(_QWORD *)v18, a3, v12, 0LL);
  v22 = a6;
  v23 = ModifierBits;
  if ( !v13 && (ModifierBits & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
    {
LABEL_53:
      word_1C01A0CF0 = 0;
      v23 &= ~4u;
      byte_1C01A0CEE = 0;
      gfInNumpadHexInput &= ~2u;
      word_1C01A0CEC = 0;
      goto LABEL_9;
    }
    if ( !gfEnableHexNumpad )
    {
LABEL_49:
      if ( (unsigned int)(v19 - 71) <= 0xB )
      {
        v39 = *((unsigned __int8 *)&aVkNumpad + (unsigned int)(v19 - 71));
        if ( v39 == 255 )
          goto LABEL_53;
        v34 = v39 - 96;
        goto LABEL_52;
      }
      if ( (gfInNumpadHexInput & 2) != 0 )
      {
        if ( (unsigned int)(a1 - 65) <= 5 )
        {
          v34 = a1 - 55;
          goto LABEL_52;
        }
        if ( (unsigned int)(a1 - 48) <= 9 )
        {
          v34 = a1 - 48;
          goto LABEL_52;
        }
      }
      v34 = -1;
LABEL_52:
      if ( v34 < 0 )
        goto LABEL_53;
      if ( (unsigned __int16)word_1C01A0CF0 == a1 )
        return 0LL;
      if ( (unsigned __int8)(byte_1C01A0CEE - 2) > 1u )
      {
        word_1C01A0CEC = v34 + 10 * v20;
        if ( !word_1C01A0CEC )
        {
          v40 = byte_1C01A0CEE;
          if ( !v34 )
            v40 = 1;
          byte_1C01A0CEE = v40;
        }
      }
      else
      {
        word_1C01A0CEC = v34 + 16 * v20;
      }
LABEL_95:
      word_1C01A0CF0 = a1;
      goto LABEL_9;
    }
    if ( v19 == 83 )
    {
      v38 = gfInNumpadHexInput;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_53;
      byte_1C01A0CEE = 2;
    }
    else
    {
      if ( v19 != 78 )
        goto LABEL_49;
      v38 = gfInNumpadHexInput;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_53;
      byte_1C01A0CEE = 3;
    }
    gfInNumpadHexInput = v38 | 2;
    goto LABEL_95;
  }
LABEL_9:
  if ( a1 == 8 && (*(_DWORD *)(v18 + 80) & 4) != 0 )
  {
    v24 = a3;
    v41 = *(_BYTE *)(a3 + 40);
    if ( (v41 & 1) != 0 )
    {
      v33 = 8206;
      goto LABEL_36;
    }
    if ( (v41 & 4) != 0 )
    {
      v33 = 8207;
      goto LABEL_36;
    }
  }
  else
  {
    if ( (_WORD)a1 == 231 && !(_BYTE)v19 )
    {
      *a4 = *((_WORD *)gptiCurrent + 433);
      return 1LL;
    }
    v24 = a3;
  }
  v25 = *(_QWORD *)(v18 + 8);
  if ( !v25 )
    return 0LL;
LABEL_16:
  v27 = *(char **)v25;
  if ( !*(_QWORD *)v25 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v27 )
    {
      v25 += 16LL;
      goto LABEL_16;
    }
    if ( *v27 == (_BYTE)a1 )
      break;
    v27 += *(unsigned __int8 *)(v25 + 9);
  }
  v28 = v27[1];
  if ( (v28 & 8) != 0 && (*(_BYTE *)(v24 + 5) & 8) != 0 )
  {
    v23 |= 8u;
  }
  else if ( (((v23 & 0xFFFE) == 0) & v28) != 0 && (*(_BYTE *)(v24 + 5) & 2) != 0
         || (v28 & 4) != 0 && (v23 & 6) == 6 && (*(_BYTE *)(v24 + 5) & 2) != 0 )
  {
    v23 ^= 1u;
  }
  if ( (v28 & 2) != 0 && (v23 & 0xFFFE) == 0 && (*(_BYTE *)(v24 + 5) & 2) != 0 )
    v27 += *(unsigned __int8 *)(v25 + 9);
  if ( v23 > *(_WORD *)(*(_QWORD *)v18 + 8LL) )
    return 0LL;
  _mm_lfence();
  v29 = *(unsigned __int8 *)(v23 + *(_QWORD *)v18 + 10LL);
  if ( (_DWORD)v29 == 15 )
    return 0LL;
  if ( (unsigned __int16)v29 >= *(unsigned __int8 *)(v25 + 8)
    || (v30 = *(_WORD *)&v27[2 * v29 + 2], v31 = *(unsigned __int8 *)(v23 + *(_QWORD *)v18 + 10LL), v30 == -4096) )
  {
    if ( ((v23 - 2) & 0xFFF6) == 0 )
    {
      if ( (unsigned int)(a1 - 65) <= 0x19 )
      {
        *a4 = a1 & 0x1F;
        return 1LL;
      }
      if ( (unsigned int)(a1 - 65377) <= 0x30 )
      {
        v33 = InternalVkKeyScanEx((unsigned __int16)a1, v18) & 0x1F;
        goto LABEL_36;
      }
    }
    return 0LL;
  }
  if ( v30 == -4095 )
  {
    v27 += *(unsigned __int8 *)(v25 + 9);
    if ( !*(_WORD *)(v16 + 74) || (GetAppCompatFlags2(1024LL) & 0x8000) != 0 )
    {
      v42 = *(_WORD *)&v27[2 * v31 + 2];
      *a4 = v42;
      if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
        *(_WORD *)(v16 + 74) = v42;
      return 0xFFFFFFFFLL;
    }
    goto LABEL_34;
  }
  if ( v30 == -4094 )
  {
    if ( *(_WORD *)(v18 + 82) )
    {
      v43 = *(char **)(v18 + 88);
      if ( v43 )
      {
        v44 = *v43;
        if ( *v43 )
        {
          v45 = *v27;
          v46 = 0;
          v47 = 0;
          while ( v44 != v45 || *((_WORD *)v43 + 1) != (_WORD)v29 )
          {
            v43 += *(unsigned __int8 *)(v18 + 85);
            v44 = *v43;
            if ( !*v43 )
              goto LABEL_127;
          }
          if ( *(_BYTE *)(v18 + 84) )
          {
            v48 = (unsigned __int16 *)(v43 + 4);
            do
            {
              if ( v47 >= a5 )
                break;
              v49 = *v48;
              if ( *v48 == 0xF000 )
                break;
              v50 = &a4[v47];
              if ( *(_WORD *)(v16 + 74) )
              {
                v51 = ComposeDeadKeys(
                        (struct tagKL *)v16,
                        *(struct DEADKEY **)(v18 + 16),
                        v49,
                        v50,
                        a5 - v47,
                        v22,
                        *a7 & 0x8000);
                if ( v51 > 0 )
                  v47 += v51;
              }
              else
              {
                *v50 = v49;
                ++v47;
              }
              ++v46;
              v22 = a6;
              ++v48;
            }
            while ( v46 < *(unsigned __int8 *)(v18 + 84) );
            if ( v47 )
              *a7 |= 0x8000000u;
          }
          return (unsigned int)v47;
        }
      }
    }
LABEL_127:
    ApiSetEditionMessageBeep();
    return 0LL;
  }
LABEL_34:
  v32 = *(struct DEADKEY **)(v18 + 16);
  if ( !v32 || !*(_WORD *)(v16 + 74) )
  {
    v33 = *(_WORD *)&v27[2 * v31 + 2];
LABEL_36:
    *a4 = v33;
    return 1LL;
  }
  result = ComposeDeadKeys((struct tagKL *)v16, v32, *(_WORD *)&v27[2 * v31 + 2], a4, a5, a6, *a7 & 0x8000);
  if ( (_DWORD)result )
    *a7 |= 0x8000000u;
  return result;
}
