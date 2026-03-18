/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C00AF794
 * Callers:
 *     xxxSendInput @ 0x1C00AE874 (xxxSendInput.c)
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsGpqForegroundAccessible @ 0x1C00AFFBC (IsGpqForegroundAccessible.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // r15d
  char v7; // di
  __int16 v8; // si
  __int64 v9; // rdx
  __int16 v10; // cx
  __int16 v11; // dx
  __int64 v12; // r8
  __int16 v14; // cx
  __int16 v15; // ax
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int16 v20; // [rsp+30h] [rbp-41h] BYREF
  __int16 v21; // [rsp+32h] [rbp-3Fh]
  int v22; // [rsp+34h] [rbp-3Dh]
  __int64 v23; // [rsp+38h] [rbp-39h]
  __int16 v24; // [rsp+40h] [rbp-31h]
  __int16 v25; // [rsp+42h] [rbp-2Fh]
  __int16 v26; // [rsp+44h] [rbp-2Dh]
  __int16 v27; // [rsp+46h] [rbp-2Bh]
  int v28; // [rsp+48h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-1h] BYREF

  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput, a2, a3, a4) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)) )
  {
    if ( !(unsigned int)IsGpqForegroundAccessible(1LL) )
    {
      MSGLUA_GPQFOREGROUND();
      return 1LL;
    }
    if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 0x4000uLL) )
    {
      TlgCreateSz(&pDesc, "SendInput");
      TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D3422, 0LL, 0LL, 3u, &pData);
    }
    LOBYTE(v20) = v8;
    v9 = 256LL;
    v23 = 0LL;
    if ( (v7 & 8) != 0 )
    {
      LOBYTE(v9) = (v7 & 1) != 0 ? 0xE0 : 0;
      a1 = VKFromVSC(&v20, v9, gafRawKeyState);
      v10 = a1;
      v21 = a1;
    }
    else
    {
      switch ( a1 )
      {
        case 0x10u:
          a1 = ((v8 & 0x7F) == 54) - 96;
          break;
        case 0x11u:
          a1 = v7 & 1 | 0xA2;
          break;
        case 0x12u:
          a1 = v7 & 1 | 0xA4;
          break;
      }
      v10 = a1 | 0x2000;
      v21 = v10;
      if ( a1 == 0xA1 )
      {
        v10 |= 0x100u;
        v21 = v10;
      }
    }
    if ( (v7 & 2) != 0 )
    {
      v10 |= 0x8000u;
      v21 = v10;
    }
    if ( (v7 & 4) != 0 )
    {
      v15 = 4096;
      v20 = v8;
    }
    else
    {
      if ( (v7 & 1) != 0 )
      {
        v14 = v10 | 0x100;
LABEL_29:
        v21 = v14;
        goto LABEL_23;
      }
      if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
      {
        if ( !ausNumPadCvt[0] )
        {
LABEL_23:
          v25 = (unsigned __int8)v8;
          v26 = (v7 & 2) != 0;
          if ( (v7 & 1) != 0 )
            v26 = ((v7 & 2) != 0) | 2;
          v24 = -2;
          v27 = 0;
          v28 = a5;
          gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
          v22 = v6;
          xxxProcessKeyEvent(&v20, a5, 1LL, 0LL, 0LL);
          return 1LL;
        }
        LOBYTE(v11) = ausNumPadCvt[0];
        v12 = 0LL;
        while ( a1 != (_BYTE)v11 )
        {
          v11 = ausNumPadCvt[++v12];
          if ( !v11 )
            goto LABEL_23;
        }
      }
      v15 = 2048;
    }
    v14 = v15 | v10;
    goto LABEL_29;
  }
  v16 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v16, v17, v18, v19);
  return 0LL;
}
