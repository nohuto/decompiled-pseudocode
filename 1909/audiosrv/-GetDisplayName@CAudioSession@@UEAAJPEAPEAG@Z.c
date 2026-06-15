/*
 * XREFs of ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     MIDL_user_allocate @ 0x1800471A0 (MIDL_user_allocate.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180054D80 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetDisplayName(const wchar_t **this, unsigned __int16 **a2)
{
  size_t v4; // rsi
  unsigned __int16 *v5; // rax
  int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      this[40]);
  }
  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 44);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 2LL * (*((_DWORD *)this[40] - 4) + 1);
  v5 = (unsigned __int16 *)MIDL_user_allocate(v4);
  *a2 = v5;
  if ( v5 )
  {
    v6 = StringCbCopyW((char *)v5, v4, (char *)this[40]);
    if ( v6 >= 0 )
      goto LABEL_10;
    operator delete(*a2);
    *a2 = 0LL;
  }
  else
  {
    v6 = -2147024882;
  }
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetDisplayName", 162, v6);
LABEL_10:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
