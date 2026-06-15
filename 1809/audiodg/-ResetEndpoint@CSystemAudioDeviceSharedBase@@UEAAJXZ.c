/*
 * XREFs of ?ResetEndpoint@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140037D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetEndpoint(CSystemAudioDeviceSharedBase *this)
{
  int v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+28h] [rbp-40h]
  __int128 v6; // [rsp+30h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  v6 = *(_OWORD *)((char *)this + 248);
  v7 = v6;
  EtwEventActivityIdControl(4LL, &v7);
  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 104LL))(*((_QWORD *)this + 41));
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids,
        v2);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::ResetEndpoint", 0x216u, v2);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v7);
  return (unsigned int)v2;
}
