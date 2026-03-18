/*
 * XREFs of xxxInternalToUnicode @ 0x1C0065320
 * Callers:
 *     xxxToUnicodeEx @ 0x1C0065210 (xxxToUnicodeEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     InternalVkKeyScanEx @ 0x1C0064EA0 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C0065680 (HKLtoPKL.c)
 *     GetModifierBits @ 0x1C00656F0 (GetModifierBits.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0152B9C (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C0161114 (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionMessageBeep @ 0x1C0162754 (ApiSetEditionMessageBeep.c)
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
  __int64 v17; // r12
  unsigned __int16 v18; // bx
  int v19; // r15d
  unsigned __int16 ModifierBits; // ax
  char v21; // r11
  unsigned __int16 v22; // dx
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 result; // rax
  char *v26; // rbx
  unsigned __int8 v27; // r9
  __int64 v28; // r9
  __int16 v29; // ax
  __int64 v30; // rbp
  struct DEADKEY *v31; // rdx
  __int16 v32; // ax
  int v33; // ecx
  __int64 v34; // rcx
  unsigned int v35; // eax
  int v36; // edx
  char v37; // al
  int v38; // ecx
  char v39; // al
  char v40; // al
  unsigned __int16 v41; // r8
  char *v42; // rcx
  char v43; // al
  char v44; // dl
  int v45; // ebp
  int v46; // ebx
  unsigned __int16 *v47; // rdi
  unsigned __int16 v48; // dx
  unsigned __int16 *v49; // r9
  int v50; // eax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = a7;
  v13 = a2 & 0x8000;
  v14 = ThreadWin32Thread;
  *a7 = v13;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  if ( a8 || (v16 = *(_QWORD *)(ThreadWin32Thread + 440)) == 0 )
  {
    v15 = HKLtoPKL(ThreadWin32Thread, a8);
    v16 = v15;
    if ( !v15 )
      return 0LL;
    v12 = a7;
    v17 = *(_QWORD *)(*(_QWORD *)(v15 + 48) + 32LL);
  }
  else
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 32LL);
  }
  v18 = word_1C01CE130;
  v19 = a2 & 0x1FF;
  if ( v13 )
  {
    if ( a1 != 18 )
    {
      if ( a1 == (unsigned __int16)word_1C01CE134 )
        word_1C01CE134 = 0;
      goto LABEL_6;
    }
    if ( !word_1C01CE130 )
    {
      if ( byte_1C01CE132 )
        byte_1C01CE132 = 0;
      goto LABEL_6;
    }
    if ( byte_1C01CE132 == 3 )
      goto LABEL_61;
    if ( byte_1C01CE132 )
    {
      v34 = *(unsigned __int16 *)(v16 + 72);
    }
    else
    {
      if ( (*(_DWORD *)(v14 + 488) & 8) != 0 )
      {
        *v12 = v13 | 0x4000000;
LABEL_61:
        *a4 = v18;
LABEL_74:
        gfInNumpadHexInput &= ~2u;
        result = 1LL;
        word_1C01CE134 = 0;
        byte_1C01CE132 = 0;
        word_1C01CE130 = 0;
        return result;
      }
      v34 = NlsOemCodePage;
    }
    v35 = (unsigned __int16)v34;
    if ( (unsigned __int16)(v34 - 932) <= 0x12u && (v36 = 393233, LOWORD(v35) = v34 - 932, _bittest(&v36, v35)) )
    {
      if ( (word_1C01CE130 & 0xFF00) != 0 )
      {
        v18 = _byteswap_ushort(word_1C01CE130);
        word_1C01CE130 = v18;
      }
      else if ( ((_WORD)v34 != 932 || (unsigned __int16)(word_1C01CE130 - 161) > 0x3Eu)
             && (unsigned __int16)(word_1C01CE130 - 128) <= 0x7Fu )
      {
        v34 = 1252LL;
      }
    }
    else
    {
      HIBYTE(word_1C01CE130) = 0;
      v18 = word_1C01CE130;
    }
    *a4 = ApiSetEditionClientCharToWchar(v34, v18, 932LL, 0LL);
    goto LABEL_74;
  }
LABEL_6:
  if ( (v13 & 0x8000) != 0 && (a6 & 2) == 0 )
    return 0LL;
  ModifierBits = GetModifierBits(*(_QWORD *)v17, a3, v12, 0LL);
  v21 = a6;
  v22 = ModifierBits;
  if ( !v13 && (ModifierBits & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
    {
LABEL_56:
      word_1C01CE134 = 0;
      v22 &= ~4u;
      byte_1C01CE132 = 0;
      gfInNumpadHexInput &= ~2u;
      word_1C01CE130 = 0;
      goto LABEL_9;
    }
    if ( !gfEnableHexNumpad )
    {
LABEL_52:
      if ( (unsigned int)(v19 - 71) <= 0xB )
      {
        v38 = *((unsigned __int8 *)&aVkNumpad + (unsigned int)(v19 - 71));
        if ( v38 == 255 )
          goto LABEL_56;
        v33 = v38 - 96;
        goto LABEL_55;
      }
      if ( (gfInNumpadHexInput & 2) != 0 )
      {
        if ( (unsigned int)(a1 - 65) <= 5 )
        {
          v33 = a1 - 55;
          goto LABEL_55;
        }
        if ( (unsigned int)(a1 - 48) <= 9 )
        {
          v33 = a1 - 48;
          goto LABEL_55;
        }
      }
      v33 = -1;
LABEL_55:
      if ( v33 < 0 )
        goto LABEL_56;
      if ( (unsigned __int16)word_1C01CE134 == a1 )
        return 0LL;
      if ( (unsigned __int8)(byte_1C01CE132 - 2) > 1u )
      {
        word_1C01CE130 = v33 + 10 * v18;
        if ( !word_1C01CE130 )
        {
          v39 = byte_1C01CE132;
          if ( !v33 )
            v39 = 1;
          byte_1C01CE132 = v39;
        }
      }
      else
      {
        word_1C01CE130 = v33 + 16 * v18;
      }
LABEL_95:
      word_1C01CE134 = a1;
      goto LABEL_9;
    }
    if ( v19 == 83 )
    {
      v37 = gfInNumpadHexInput;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_56;
      byte_1C01CE132 = 2;
    }
    else
    {
      if ( v19 != 78 )
        goto LABEL_52;
      v37 = gfInNumpadHexInput;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_56;
      byte_1C01CE132 = 3;
    }
    gfInNumpadHexInput = v37 | 2;
    goto LABEL_95;
  }
LABEL_9:
  if ( a1 == 8 && (*(_DWORD *)(v17 + 80) & 4) != 0 )
  {
    v23 = a3;
    v40 = *(_BYTE *)(a3 + 40);
    if ( (v40 & 1) != 0 )
    {
      v32 = 8206;
      goto LABEL_36;
    }
    if ( (v40 & 4) != 0 )
    {
      v32 = 8207;
      goto LABEL_36;
    }
  }
  else
  {
    if ( (_WORD)a1 == 231 && !(_BYTE)v19 )
    {
      *a4 = *((_WORD *)gptiCurrent + 437);
      return 1LL;
    }
    v23 = a3;
  }
  v24 = *(_QWORD *)(v17 + 8);
  if ( !v24 )
    return 0LL;
LABEL_16:
  v26 = *(char **)v24;
  if ( !*(_QWORD *)v24 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v26 )
    {
      v24 += 16LL;
      goto LABEL_16;
    }
    if ( *v26 == (_BYTE)a1 )
      break;
    v26 += *(unsigned __int8 *)(v24 + 9);
  }
  v27 = v26[1];
  if ( (v27 & 8) != 0 && (*(_BYTE *)(v23 + 5) & 8) != 0 )
  {
    v22 |= 8u;
  }
  else if ( (((v22 & 0xFFFE) == 0) & v27) != 0 && (*(_BYTE *)(v23 + 5) & 2) != 0
         || (v27 & 4) != 0 && (v22 & 6) == 6 && (*(_BYTE *)(v23 + 5) & 2) != 0 )
  {
    v22 ^= 1u;
  }
  if ( (v27 & 2) != 0 && (v22 & 0xFFFE) == 0 && (*(_BYTE *)(v23 + 5) & 2) != 0 )
    v26 += *(unsigned __int8 *)(v24 + 9);
  if ( v22 > *(_WORD *)(*(_QWORD *)v17 + 8LL) )
    return 0LL;
  _mm_lfence();
  v28 = *(unsigned __int8 *)(v22 + *(_QWORD *)v17 + 10LL);
  if ( (_DWORD)v28 == 15 )
    return 0LL;
  if ( (unsigned __int16)v28 >= *(unsigned __int8 *)(v24 + 8)
    || (v29 = *(_WORD *)&v26[2 * v28 + 2], v30 = *(unsigned __int8 *)(v22 + *(_QWORD *)v17 + 10LL), v29 == -4096) )
  {
    if ( ((v22 - 2) & 0xFFF6) == 0 )
    {
      if ( (unsigned int)(a1 - 65) <= 0x19 )
      {
        *a4 = a1 & 0x1F;
        return 1LL;
      }
      if ( (unsigned int)(a1 - 65377) <= 0x30 )
      {
        v32 = InternalVkKeyScanEx(a1, (_QWORD *)v17) & 0x1F;
        goto LABEL_36;
      }
    }
    return 0LL;
  }
  if ( v29 == -4095 )
  {
    v26 += *(unsigned __int8 *)(v24 + 9);
    if ( !*(_WORD *)(v16 + 74) || (GetAppCompatFlags2(1024LL) & 0x8000) != 0 )
    {
      v41 = *(_WORD *)&v26[2 * v30 + 2];
      *a4 = v41;
      if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
        *(_WORD *)(v16 + 74) = v41;
      return 0xFFFFFFFFLL;
    }
    goto LABEL_34;
  }
  if ( v29 == -4094 )
  {
    if ( *(_WORD *)(v17 + 82) )
    {
      v42 = *(char **)(v17 + 88);
      if ( v42 )
      {
        v43 = *v42;
        if ( *v42 )
        {
          v44 = *v26;
          v45 = 0;
          v46 = 0;
          while ( v43 != v44 || *((_WORD *)v42 + 1) != (_WORD)v28 )
          {
            v42 += *(unsigned __int8 *)(v17 + 85);
            v43 = *v42;
            if ( !*v42 )
              goto LABEL_127;
          }
          if ( *(_BYTE *)(v17 + 84) )
          {
            v47 = (unsigned __int16 *)(v42 + 4);
            do
            {
              if ( v46 >= a5 )
                break;
              v48 = *v47;
              if ( *v47 == 0xF000 )
                break;
              v49 = &a4[v46];
              if ( *(_WORD *)(v16 + 74) )
              {
                v50 = ComposeDeadKeys(
                        (struct tagKL *)v16,
                        *(struct DEADKEY **)(v17 + 16),
                        v48,
                        v49,
                        a5 - v46,
                        v21,
                        *a7 & 0x8000);
                if ( v50 > 0 )
                  v46 += v50;
              }
              else
              {
                *v49 = v48;
                ++v46;
              }
              ++v45;
              v21 = a6;
              ++v47;
            }
            while ( v45 < *(unsigned __int8 *)(v17 + 84) );
            if ( v46 )
              *a7 |= 0x8000000u;
          }
          return (unsigned int)v46;
        }
      }
    }
LABEL_127:
    ApiSetEditionMessageBeep();
    return 0LL;
  }
LABEL_34:
  v31 = *(struct DEADKEY **)(v17 + 16);
  if ( !v31 || !*(_WORD *)(v16 + 74) )
  {
    v32 = *(_WORD *)&v26[2 * v30 + 2];
LABEL_36:
    *a4 = v32;
    return 1LL;
  }
  result = ComposeDeadKeys((struct tagKL *)v16, v31, *(_WORD *)&v26[2 * v30 + 2], a4, a5, a6, *a7 & 0x8000);
  if ( (_DWORD)result )
    *a7 |= 0x8000000u;
  return result;
}
