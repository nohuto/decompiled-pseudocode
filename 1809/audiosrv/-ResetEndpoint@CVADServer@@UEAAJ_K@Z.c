/*
 * XREFs of ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x1800DABB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 */

__int64 __fastcall CVADServer::ResetEndpoint(CVADServer *this, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 46) || !*((_QWORD *)this + 21) )
  {
    v6 = -2004287487;
LABEL_11:
    if ( v6 >= 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v4 = (_QWORD *)*((_QWORD *)this + 24);
  v5 = v4[6];
  if ( a2 == v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 88LL))(v4);
    goto LABEL_11;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x24u,
      (__int64)&WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
      a2,
      v5);
  }
  v6 = -2147024809;
LABEL_12:
  AudSrvTraceLoggingErrorHelper("CVADServer::ResetEndpoint", 2070, v6);
LABEL_13:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
