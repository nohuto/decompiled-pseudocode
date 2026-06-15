/*
 * XREFs of ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEA_K0@Z @ 0x140037220
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetClientReleaseEvent(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v8; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  char v11; // [rsp+38h] [rbp-60h]
  __int128 v12; // [rsp+40h] [rbp-58h]
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF

  v12 = *(_OWORD *)((char *)this + 248);
  v13 = v12;
  EtwEventActivityIdControl(4LL, &v13);
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 41)
                                                                                         + 32LL))(
         *((_QWORD *)this + 41),
         a2,
         a3,
         a4);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids,
        v8);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetClientReleaseEvent", 0xE0u, v8);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v13);
  return (unsigned int)v8;
}
