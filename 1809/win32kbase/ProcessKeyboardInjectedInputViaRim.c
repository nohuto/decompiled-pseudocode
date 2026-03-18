/*
 * XREFs of ProcessKeyboardInjectedInputViaRim @ 0x1C01522F0
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C014C5A4 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     ApiSetEditionIsGpqForegroundInaccessibleExplicit @ 0x1C0036C4C (ApiSetEditionIsGpqForegroundInaccessibleExplicit.c)
 *     VKFromVSC @ 0x1C00838B0 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInputViaRim(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int16 v6; // cx
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // al
  __int16 v9; // dx
  __int16 v10; // ax
  __int16 v11; // dx
  __int16 v12; // ax
  char v13; // al
  __int64 v14; // r9
  int v15; // eax
  _QWORD v16[4]; // [rsp+30h] [rbp-30h] BYREF

  v2 = a2 + 392;
  result = ApiSetEditionIsGpqForegroundInaccessibleExplicit(
             1u,
             (__int64)gptiCurrent,
             *(_QWORD *)(a2 + 392),
             *(_DWORD *)(a2 + 400));
  if ( !(_DWORD)result )
  {
    memset(v16, 0, sizeof(v16));
    v6 = *(_WORD *)(a1 + 4);
    v7 = 0;
    v16[1] = *(_QWORD *)a2;
    if ( (v6 & 0x60) != 0 )
    {
      v9 = WORD1(v16[0]);
    }
    else
    {
      LOBYTE(v16[0]) = *(_BYTE *)(a1 + 2);
      v8 = VKFromVSC((unsigned __int8 *)v16, (v6 & 2) != 0 ? 0xE0 : 0);
      v6 = *(_WORD *)(a1 + 4);
      v7 = v8;
      v9 = v8;
      WORD1(v16[0]) = v8;
    }
    if ( (v6 & 0x40) != 0 )
    {
      v10 = *(_WORD *)(a1 + 2);
      v7 = *(_BYTE *)(a1 + 2);
      switch ( v10 )
      {
        case 16:
          v7 = -95;
          break;
        case 17:
          v7 = ((v6 & 2) != 0) | 0xA2;
          break;
        case 18:
          v7 = ((v6 & 2) != 0) | 0xA4;
          break;
      }
      v9 = v7 | 0x2000;
      *(_WORD *)(a1 + 2) = 0;
      v6 ^= 0x40u;
      WORD1(v16[0]) = v9;
      *(_WORD *)(a1 + 4) = v6;
    }
    if ( (v6 & 1) != 0 )
    {
      v9 |= 0x8000u;
      WORD1(v16[0]) = v9;
    }
    if ( (v6 & 0x20) != 0 )
    {
      LOWORD(v16[0]) = *(_WORD *)(a1 + 2);
      v11 = ((v6 & 1) << 15) | 0x10E7 | v9;
    }
    else
    {
      if ( (v6 & 2) != 0 )
      {
        v12 = 256;
      }
      else
      {
        if ( (unsigned __int8)(v7 - 96) > 9u && v7 != 110 )
        {
          v13 = ausNumPadCvt[0];
          LODWORD(v14) = 0;
          if ( !ausNumPadCvt[0] )
          {
LABEL_28:
            v15 = *(_DWORD *)(a1 + 8);
            *(_DWORD *)(a1 + 8) = 0;
            v16[2] = *(_QWORD *)a1;
            HIDWORD(v16[0]) = v15;
            LODWORD(v16[3]) = 0;
            return xxxProcessKeyEvent((unsigned __int16 *)v16, 0LL, 1u, 0, v2);
          }
          while ( v7 != v13 )
          {
            v14 = (unsigned int)(v14 + 1);
            v13 = ausNumPadCvt[v14];
            if ( !ausNumPadCvt[v14] )
              goto LABEL_28;
          }
        }
        v12 = 2048;
      }
      v11 = v12 | v9;
    }
    WORD1(v16[0]) = v11;
    goto LABEL_28;
  }
  return result;
}
