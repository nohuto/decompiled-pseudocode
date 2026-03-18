/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C005D7AC
 * Callers:
 *     xxxSendInput @ 0x1C005D570 (xxxSendInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsGpqForegroundAccessible @ 0x1C005DF64 (IsGpqForegroundAccessible.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int16 v8; // si
  __int64 v9; // rdx
  __int16 v10; // cx
  __int16 v11; // dx
  __int64 v12; // r8
  __int16 v14; // cx
  __int16 v15; // ax
  ULONG v16; // eax
  __int64 v17; // rdx
  __int16 v18; // [rsp+30h] [rbp-30h] BYREF
  __int16 v19; // [rsp+32h] [rbp-2Eh]
  int v20; // [rsp+34h] [rbp-2Ch]
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int16 v22; // [rsp+40h] [rbp-20h]
  __int16 v23; // [rsp+42h] [rbp-1Eh]
  __int16 v24; // [rsp+44h] [rbp-1Ch]
  __int16 v25; // [rsp+46h] [rbp-1Ah]
  int v26; // [rsp+48h] [rbp-18h]

  v8 = a2;
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput, a2) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 880LL), 0x20u)) )
  {
    if ( !(unsigned int)IsGpqForegroundAccessible(1LL) )
    {
      MSGLUA_GPQFOREGROUND();
      return 1LL;
    }
    LOBYTE(v18) = v8;
    v9 = 256LL;
    v21 = 0LL;
    if ( (a3 & 8) != 0 )
    {
      LOBYTE(v9) = (a3 & 1) != 0 ? 0xE0 : 0;
      a1 = VKFromVSC(&v18, v9, *(_QWORD *)gafRawKeyState);
      v10 = a1;
      v19 = a1;
    }
    else
    {
      switch ( a1 )
      {
        case 0x10u:
          a1 = ((v8 & 0x7F) == 54) - 96;
          break;
        case 0x11u:
          a1 = a3 & 1 | 0xA2;
          break;
        case 0x12u:
          a1 = a3 & 1 | 0xA4;
          break;
      }
      v10 = a1 | 0x2000;
      v19 = v10;
      if ( a1 == 0xA1 )
      {
        v10 |= 0x100u;
        v19 = v10;
      }
    }
    if ( (a3 & 2) != 0 )
    {
      v10 |= 0x8000u;
      v19 = v10;
    }
    if ( (a3 & 4) != 0 )
    {
      v15 = 4096;
      v18 = v8;
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        v14 = v10 | 0x100;
LABEL_29:
        v19 = v14;
        goto LABEL_22;
      }
      if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
      {
        if ( !ausNumPadCvt[0] )
        {
LABEL_22:
          v23 = (unsigned __int8)v8;
          v24 = (a3 & 2) != 0;
          if ( (a3 & 1) != 0 )
            v24 = ((a3 & 2) != 0) | 2;
          v22 = -2;
          v25 = 0;
          v26 = a5;
          gppiInputProvider = *(_QWORD *)(gptiCurrent + 416LL);
          v20 = a4;
          xxxProcessKeyEvent(&v18, a5, 1LL, 0LL, 0LL);
          return 1LL;
        }
        LOBYTE(v11) = ausNumPadCvt[0];
        v12 = 0LL;
        while ( a1 != (_BYTE)v11 )
        {
          v11 = ausNumPadCvt[++v12];
          if ( !v11 )
            goto LABEL_22;
        }
      }
      v15 = 2048;
    }
    v14 = v15 | v10;
    goto LABEL_29;
  }
  v16 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v16, v17);
  return 0LL;
}
