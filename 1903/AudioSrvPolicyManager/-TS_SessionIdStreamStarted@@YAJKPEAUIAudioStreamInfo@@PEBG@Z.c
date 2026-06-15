/*
 * XREFs of ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x180027150
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x1800281C0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TS_SessionIdStreamStarted(DWORD a1, struct IAudioStreamInfo *a2, const unsigned __int16 *a3)
{
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // eax
  struct TSSession *v8; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v8 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, a1);
  }
  v6 = TsSessionFromSessionId(a1, 1, 0LL, &v8);
  if ( v6 )
  {
    v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 <= 0 )
      v4 = v6;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, v4);
    }
    AudPolicyLogError("TS_SessionIdStreamStarted", 2759, v4);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4;
}
