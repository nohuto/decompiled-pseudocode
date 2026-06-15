/*
 * XREFs of ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140012C78 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z @ 0x140012D98 (-SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140032A98 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  __int64 v4; // r9
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11 = *(_OWORD *)((char *)this - 56);
  v12 = v11;
  EtwEventActivityIdControl(4LL, &v12);
  if ( !CSystemAudioDeviceSharedBase::SubmixInfluencesSaDeviceState(
          (CSystemAudioDeviceSharedBase *)((char *)this - 304),
          a2) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids, a2);
    }
    goto LABEL_8;
  }
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (unsigned int)(*((_DWORD *)this + 11) - 1);
  *((_DWORD *)this + 11) = v4;
  v5 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids, v4);
    v5 = *((_DWORD *)this + 11);
  }
  if ( v5 || (v6 = CSystemAudioDeviceSharedBase::SetGraphState((char *)this - 304, 1LL), v7 = v6, v6 >= 0) )
  {
    if ( v10 )
      LeaveCriticalSection(lpCriticalSection);
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x340,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v6,
    (int)lpCriticalSection);
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_9:
  EtwEventActivityIdControl(4LL, &v12);
  return v7;
}
