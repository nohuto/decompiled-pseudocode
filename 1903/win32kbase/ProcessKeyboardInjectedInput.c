/*
 * XREFs of ProcessKeyboardInjectedInput @ 0x1C0185764
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0115520 (NtMITSynthesizeKeyboardInput.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C0185930 (ProcessKeyboardInjectedInputViaRim.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C0186AF0 (VKFromVSC.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInput(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int8 v6; // r8
  __int16 v7; // cx
  unsigned __int8 v8; // al
  __int16 v9; // dx
  __int16 v10; // ax
  __int16 v11; // dx
  __int16 v12; // ax
  __int64 v13; // rcx
  __int16 *v14; // rax
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int128 v19; // [rsp+40h] [rbp-20h]

  v17 = 0LL;
  v4 = (__int64)a2;
  v6 = 0;
  v19 = 0LL;
  if ( a2 )
    v18 = *a2;
  else
    v18 = 0LL;
  v7 = *(_WORD *)(a1 + 4);
  if ( (v7 & 0x60) != 0 )
  {
    v9 = WORD1(v17);
  }
  else
  {
    LOBYTE(v17) = *(_BYTE *)(a1 + 2);
    LOBYTE(a2) = (v7 & 2) != 0 ? 0xE0 : 0;
    v8 = VKFromVSC(&v17, a2, gafRawKeyState);
    v7 = *(_WORD *)(a1 + 4);
    v6 = v8;
    v9 = v8;
    WORD1(v17) = v8;
  }
  if ( (v7 & 0x40) != 0 )
  {
    v10 = *(_WORD *)(a1 + 2);
    v6 = *(_BYTE *)(a1 + 2);
    switch ( v10 )
    {
      case 16:
        v6 = -95;
        break;
      case 17:
        v6 = ((v7 & 2) != 0) | 0xA2;
        break;
      case 18:
        v6 = ((v7 & 2) != 0) | 0xA4;
        break;
    }
    v9 = v6 | 0x2000;
    *(_WORD *)(a1 + 2) = 0;
    WORD1(v17) = v9;
    v7 &= ~0x40u;
    *(_WORD *)(a1 + 4) = v7;
  }
  if ( (v7 & 1) != 0 )
  {
    v9 |= 0x8000u;
    WORD1(v17) = v9;
  }
  if ( (v7 & 0x20) != 0 )
  {
    LOWORD(v17) = *(_WORD *)(a1 + 2);
    v11 = ((v7 & 1) << 15) | 0x10E7 | v9;
LABEL_30:
    WORD1(v17) = v11;
    goto LABEL_31;
  }
  if ( (v7 & 2) != 0 )
  {
    v12 = 256;
LABEL_29:
    v11 = v12 | v9;
    goto LABEL_30;
  }
  if ( (unsigned __int8)(v6 - 96) <= 9u || v6 == 110 )
  {
LABEL_28:
    v12 = 2048;
    goto LABEL_29;
  }
  LODWORD(v13) = 0;
  if ( ausNumPadCvt[0] )
  {
    v14 = ausNumPadCvt;
    while ( v6 != *(_BYTE *)v14 )
    {
      v13 = (unsigned int)(v13 + 1);
      v14 = &ausNumPadCvt[v13];
      if ( !*v14 )
        goto LABEL_31;
    }
    goto LABEL_28;
  }
LABEL_31:
  v15 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)&v19 = *(_QWORD *)a1;
  HIDWORD(v17) = v15;
  DWORD2(v19) = 0;
  return xxxProcessKeyEvent((unsigned int)&v17, 0, 1, 0, v4, a3);
}
