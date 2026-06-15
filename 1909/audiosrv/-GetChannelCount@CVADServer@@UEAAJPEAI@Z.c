/*
 * XREFs of ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180046EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::GetChannelCount(CVADServer *this, unsigned int *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, this);
  }
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 24);
  if ( v4 && *((_DWORD *)this + 46) )
  {
    v5 = 0;
    *a2 = *(_DWORD *)(v4 + 84);
  }
  else
  {
    v5 = -2004287487;
    AudSrvTraceLoggingErrorHelper("CVADServer::GetChannelCount", 2410, -2004287487);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
