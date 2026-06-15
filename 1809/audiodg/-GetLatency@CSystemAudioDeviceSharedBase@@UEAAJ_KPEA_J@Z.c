/*
 * XREFs of ?GetLatency@CSystemAudioDeviceSharedBase@@UEAAJ_KPEA_J@Z @ 0x1400377B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetLatency(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        __int64 *a3)
{
  int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-58h] BYREF
  char v9; // [rsp+28h] [rbp-50h]
  __int128 v10; // [rsp+30h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF

  v10 = *(_OWORD *)((char *)this + 248);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 41) + 64LL))(
         *((_QWORD *)this + 41),
         a2,
         a3);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids,
        v6);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetLatency", 0x1E9u, v6);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v6;
}
