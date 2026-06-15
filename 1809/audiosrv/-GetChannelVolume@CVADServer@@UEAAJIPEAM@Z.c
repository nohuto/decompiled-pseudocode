/*
 * XREFs of ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x1800D9860
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qd @ 0x1800B5944 (WPP_SF_qd.c)
 */

__int64 __fastcall CVADServer::GetChannelVolume(CVADServer *this, unsigned int a2, float *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  unsigned int v7; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Fu,
      (__int64)&WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
      this,
      a2);
  }
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 24);
  if ( v6 && *((_DWORD *)this + 46) )
  {
    if ( (unsigned int)v4 < *(_DWORD *)(v6 + 84) )
    {
      v7 = 0;
      *a3 = *(float *)(*(_QWORD *)(v6 + 104) + 4 * v4);
      goto LABEL_12;
    }
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      851LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
  }
  else
  {
    v7 = -2004287487;
  }
  AudSrvTraceLoggingErrorHelper("CVADServer::GetChannelVolume", 2477, v7);
LABEL_12:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
