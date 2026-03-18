/*
 * XREFs of xxxInternalKeyEventDirect @ 0x1C001F0D0
 * Callers:
 *     xxxSendInput @ 0x1C001E64C (xxxSendInput.c)
 * Callees:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001F58C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C0114088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalKeyEventDirect(unsigned __int8 a1, __int16 a2, char a3, int a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int16 v13; // cx
  __int64 v14; // r9
  _WORD *v15; // r8
  __int16 v17; // cx
  __int16 v18; // ax
  ULONG v19; // eax
  _QWORD v20[4]; // [rsp+30h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-1h] BYREF

  memset(v20, 0, sizeof(v20));
  if ( *(_QWORD *)(gptiCurrent + 448LL) == grpdeskRitInput
    && (PsGetCurrentProcess(grpdeskRitInput, v9, v10, v11) == gpepCSRSS
     || RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)) )
  {
    if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1) )
    {
      MSGLUA_GPQFOREGROUND();
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (unsigned int)&WPP_5eca3a59c5c7347e5113861ec95a8a2f_Traceguids,
          2,
          20,
          11,
          (__int64)&WPP_5eca3a59c5c7347e5113861ec95a8a2f_Traceguids);
      return 1LL;
    }
    if ( dword_1C03202C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x4000uLL) )
    {
      TlgCreateSz(&pDesc, "SendInput");
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E4C14, 0LL, 0LL, 3u, &pData);
    }
    LOBYTE(v20[0]) = a2;
    v20[1] = 0LL;
    if ( (a3 & 8) != 0 )
    {
      LOBYTE(v12) = (a3 & 1) != 0 ? 0xE0 : 0;
      a1 = VKFromVSC(v20, v12, gafRawKeyState);
      v13 = a1;
      WORD1(v20[0]) = a1;
    }
    else
    {
      switch ( a1 )
      {
        case 0x10u:
          a1 = ((a2 & 0x7F) == 54) - 96;
          break;
        case 0x11u:
          a1 = a3 & 1 | 0xA2;
          break;
        case 0x12u:
          a1 = a3 & 1 | 0xA4;
          break;
      }
      v13 = a1 | 0x2000;
      WORD1(v20[0]) = v13;
      if ( a1 == 0xA1 )
      {
        v13 |= 0x100u;
        WORD1(v20[0]) = v13;
      }
    }
    if ( (a3 & 2) != 0 )
    {
      v13 |= 0x8000u;
      WORD1(v20[0]) = v13;
    }
    if ( (a3 & 4) != 0 )
    {
      v18 = 4096;
      LOWORD(v20[0]) = a2;
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        v17 = v13 | 0x100;
LABEL_29:
        WORD1(v20[0]) = v17;
        goto LABEL_23;
      }
      if ( (unsigned __int8)(a1 - 96) > 9u && a1 != 110 )
      {
        if ( !ausNumPadCvt )
        {
LABEL_23:
          WORD1(v20[2]) = (unsigned __int8)a2;
          WORD2(v20[2]) = (a3 & 2) != 0;
          if ( (a3 & 1) != 0 )
            WORD2(v20[2]) = ((a3 & 2) != 0) | 2;
          LOWORD(v20[2]) = -2;
          HIWORD(v20[2]) = 0;
          LODWORD(v20[3]) = a5;
          gppiInputProvider = *(_QWORD *)(gptiCurrent + 416LL);
          HIDWORD(v20[0]) = a4;
          ((void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD, _QWORD, _QWORD))xxxProcessKeyEvent)(
            v20,
            a5,
            1LL,
            0LL,
            0LL,
            0LL);
          return 1LL;
        }
        v14 = 0LL;
        v15 = (_WORD *)ausNumPadCvt;
        while ( a1 != *(_BYTE *)v15 )
        {
          ++v14;
          v15 = (_WORD *)((char *)&ausNumPadCvt + 2 * v14);
          if ( !*v15 )
            goto LABEL_23;
        }
      }
      v18 = 2048;
    }
    v17 = v18 | v13;
    goto LABEL_29;
  }
  v19 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v19);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_5eca3a59c5c7347e5113861ec95a8a2f_Traceguids,
      2,
      20,
      10,
      (__int64)&WPP_5eca3a59c5c7347e5113861ec95a8a2f_Traceguids);
  return 0LL;
}
