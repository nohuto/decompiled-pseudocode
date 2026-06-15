/*
 * XREFs of ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x140031E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140032A48 (WPP_SF_q.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CAE8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetFrequencyForOffload(
        CSystemAudioDeviceSharedBase *this,
        unsigned __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v9 = *(_OWORD *)((char *)this + 248);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 41) + 56LL))(
         *((_QWORD *)this + 41),
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        (__int64)&WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids,
        v4);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetFrequencyForOffload", 0x1BCu, v5);
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids, *a2);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v10);
  return v5;
}
