/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140032640
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140012C78 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032A10 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  int v4; // r9d
  int v5; // eax
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+28h] [rbp-40h]
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = *(_OWORD *)((char *)this - 56);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *))(*(_QWORD *)this + 104LL))(
      this,
      a2);
  v4 = *((_DWORD *)this + 10) - 1;
  *((_DWORD *)this + 10) = v4;
  v5 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids, v4);
    v5 = *((_DWORD *)this + 10);
  }
  if ( !v5 )
  {
    if ( *((_DWORD *)this + 8) )
    {
      v6 = CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)this - 304, 0);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x363,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
          (const char *)(unsigned int)v6,
          (int)lpCriticalSection);
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v11);
  return 0LL;
}
