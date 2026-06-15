/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002A610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     WPP_SF_sd @ 0x180025FF0 (WPP_SF_sd.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180028878 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180028978 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x1800292A8 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18002947C (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x1800295FC (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x1800296BC (-TsSessionIdLogoff@@YAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TS_SessionChanged(unsigned int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  DWORD dwSessionId; // ebx
  const char *v3; // r9
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  struct TSSession *v6; // [rsp+58h] [rbp+10h] BYREF
  void *v7; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+68h] [rbp+20h]

  dwSessionId = a2->dwSessionId;
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
LABEL_23:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v3 = "WTS_REMOTE_DISCONNECT";
        if ( a1 == 2 )
          v3 = "WTS_CONSOLE_DISCONNECT";
        WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, a1, v3, a2->dwSessionId);
      }
      v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      v8 = v4;
      if ( !(unsigned int)TsSessionFromSessionId(dwSessionId, 0, &v7, &v6) && *((_DWORD *)v6 + 1) )
        TsSessionUpdateAudioProtocol(v6, v7, 0xFFFF);
      if ( v4 )
        LeaveCriticalSection(v4);
      return;
    }
    if ( a1 != 3 )
    {
      if ( a1 != 4 )
      {
        switch ( a1 )
        {
          case 5u:
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x2Du,
                &WPP_d9c0975e425e34466e12797867bc6fac_Traceguids,
                dwSessionId);
            }
            TsSessionIdLogon(dwSessionId);
            break;
          case 6u:
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x2Eu,
                &WPP_d9c0975e425e34466e12797867bc6fac_Traceguids,
                dwSessionId);
            }
            TsSessionIdLogoff(dwSessionId);
            break;
          case 0xBu:
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x2Cu,
                &WPP_d9c0975e425e34466e12797867bc6fac_Traceguids,
                dwSessionId);
            }
            TsSessionIdTerminate(dwSessionId);
            break;
        }
        return;
      }
      goto LABEL_23;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = "WTS_REMOTE_CONNECT";
    if ( a1 == 1 )
      v5 = "WTS_CONSOLE_CONNECT";
    WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, a1, v5, a2->dwSessionId);
  }
  TsSessionIdConnect(dwSessionId);
}
