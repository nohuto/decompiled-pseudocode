/*
 * XREFs of ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14001A8A4 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x140037EB0 (WPP_SF_DDD.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStarted(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  __int64 v4; // r9
  int v5; // eax
  char *v6; // rdi
  int v7; // ebx
  int v8; // r15d
  unsigned int v10; // edx
  int v11; // [rsp+20h] [rbp-39h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-29h] BYREF
  char v13; // [rsp+38h] [rbp-21h]
  __int128 v14; // [rsp+40h] [rbp-19h]
  __int128 v15; // [rsp+50h] [rbp-9h] BYREF
  __int128 v16; // [rsp+60h] [rbp+7h]
  __int128 v17; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v16 = *(_OWORD *)((char *)this - 56);
  v17 = v16;
  EtwEventActivityIdControl(4LL, &v17);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 128LL))(a2)
    && !*((_DWORD *)this + 12) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids, a2);
    }
LABEL_14:
    v7 = 0;
    goto LABEL_15;
  }
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = (unsigned int)(*((_DWORD *)this + 11) + 1);
  *((_DWORD *)this + 11) = v4;
  v5 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids, v4);
    v5 = *((_DWORD *)this + 11);
  }
  if ( v5 != 1 )
    goto LABEL_12;
  v6 = (char *)this - 304;
  if ( *((_DWORD *)this + 8) )
  {
    v7 = CSystemAudioDeviceSharedBase::SetGraphState((char *)this - 304, 2LL);
  }
  else
  {
    v14 = *(_OWORD *)(v6 + 248);
    v15 = v14;
    EtwEventActivityIdControl(4LL, &v15);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v6 + 41) + 112LL))(
           *((_QWORD *)v6 + 41),
           (unsigned __int64)(v6 + 296) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64));
    v8 = 3;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
    {
      v10 = 2;
      if ( v7 >= 0 )
        v10 = 4;
      if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v10 )
      {
        v11 = 3;
        WPP_SF_DDD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          34LL,
          &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids,
          *((unsigned int *)v6 + 84));
      }
    }
    if ( v7 < 0 )
      v8 = *((_DWORD *)v6 + 84);
    *((_DWORD *)v6 + 84) = v8;
    EtwEventActivityIdControl(4LL, &v15);
  }
  if ( v7 >= 0 )
  {
LABEL_12:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x329,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v7,
    v11);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_15:
  EtwEventActivityIdControl(4LL, &v17);
  return (unsigned int)v7;
}
