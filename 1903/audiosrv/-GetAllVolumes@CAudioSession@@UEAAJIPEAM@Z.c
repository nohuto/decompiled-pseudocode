/*
 * XREFs of ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800CE060
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetAllVolumes(const wchar_t **this, unsigned int a2, float *a3)
{
  __int64 v4; // rbp
  unsigned int v6; // edi
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v6 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      this[91]);
  }
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 101);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (_DWORD)v4 == *((_DWORD *)this + 240) )
  {
    if ( (_DWORD)v4 )
    {
      v7 = v4;
      v8 = (char *)this[121] - (char *)a3;
      do
      {
        *a3 = *(float *)((char *)a3 + v8);
        ++a3;
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    v6 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetAllVolumes", 1210, -2147024809);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
