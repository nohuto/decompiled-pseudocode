/*
 * XREFs of ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x1400378C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?EnableMMCSS@CSystemAudioDeviceSharedBase@@IEAAJXZ @ 0x140037154 (-EnableMMCSS@CSystemAudioDeviceSharedBase@@IEAAJXZ.c)
 *     WPP_SF_ii @ 0x140037F40 (WPP_SF_ii.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetPositionForOffload(
        CSystemAudioDeviceSharedBase *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h] BYREF
  char v10; // [rsp+38h] [rbp-50h]
  __int128 v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF

  v11 = *(_OWORD *)((char *)this + 248);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CSystemAudioDeviceSharedBase::EnableMMCSS(this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 41) + 48LL))(
         *((_QWORD *)this + 41),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x15u,
        (__int64)&WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids,
        v6);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetPositionForOffload", 0x197u, v7);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ii(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids, *a2, *a3);
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v12);
  return v7;
}
