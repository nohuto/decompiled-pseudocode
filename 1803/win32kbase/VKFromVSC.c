/*
 * XREFs of VKFromVSC @ 0x1C00667A0
 * Callers:
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012FB40 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FD50 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     GetModifierBits @ 0x1C005BC90 (GetModifierBits.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C00668D4 (ApiSetEditionGetActiveHKL.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, char a2)
{
  __int16 v4; // bx
  unsigned __int8 v5; // cl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // ax
  unsigned __int8 v10; // cl
  unsigned __int16 ModifierBits; // ax
  __int64 v12; // rcx
  int *v13; // rdx
  int v14; // ecx

  *((_WORD *)a1 + 1) = 255;
  v4 = 255;
  if ( (*(_DWORD *)gpsi & 4) != 0 && (ApiSetEditionGetActiveHKL() & 0x3FF) == 0x12 )
  {
    v10 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      a2 = -32;
      v5 = v10 | 0x80;
    }
    else
    {
      v5 = v10 & 0x7F;
    }
    *a1 = v5;
  }
  else
  {
    *a1 &= ~0x80u;
    v5 = *a1;
  }
  if ( gptiForeground && (v6 = *((_QWORD *)gptiForeground + 54)) != 0 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL);
  else
    v7 = gpKbdTbl;
  if ( !a2 )
  {
    if ( v5 < *(_BYTE *)(v7 + 56) )
    {
      v4 = *(_WORD *)(*(_QWORD *)(v7 + 48) + 2LL * v5);
      if ( v4 )
        goto LABEL_19;
    }
    goto LABEL_26;
  }
  if ( a2 == -32 )
  {
    v4 = 511;
    if ( v5 == 42 || v5 == 54 )
      goto LABEL_33;
    v8 = *(_QWORD *)(v7 + 64);
    goto LABEL_12;
  }
  if ( a2 != -31 )
  {
LABEL_26:
    LOBYTE(v9) = -1;
    return v9;
  }
  v8 = *(_QWORD *)(v7 + 72);
LABEL_12:
  if ( v8 )
  {
    while ( *(_WORD *)(v8 + 2) )
    {
      if ( *(_BYTE *)v8 == v5 )
      {
        v4 = *(_WORD *)(v8 + 2);
        break;
      }
      v8 += 4LL;
    }
  }
LABEL_19:
  if ( dword_1C01A2A60 )
  {
    dword_1C01A2A60 = 0;
LABEL_33:
    LOBYTE(v9) = 0;
    return v9;
  }
  if ( v4 == 19 )
  {
    *a1 = 69;
    dword_1C01A2A60 = 1;
  }
  if ( (v4 & 0x200) != 0
    && (ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_VK_STANDARD, (__int64)gafRawKeyState),
        ModifierBits <= (unsigned __int16)word_1C019ECE8)
    && (_mm_lfence(), v12 = *((unsigned __int8 *)&Modifiers_VK_STANDARD + ModifierBits + 10), (_DWORD)v12 != 15)
    && (v13 = (int *)*((_QWORD *)gapulCvt_VK + v12)) != 0LL
    && (v14 = *v13) != 0 )
  {
    while ( (_BYTE)v14 != (_BYTE)v4 )
    {
      LOBYTE(v14) = *++v13;
      if ( !*v13 )
        goto LABEL_23;
    }
    v9 = *((_WORD *)v13 + 1);
    *((_WORD *)a1 + 1) = v9;
  }
  else
  {
LABEL_23:
    *((_WORD *)a1 + 1) = v4;
    LOBYTE(v9) = v4;
  }
  return v9;
}
