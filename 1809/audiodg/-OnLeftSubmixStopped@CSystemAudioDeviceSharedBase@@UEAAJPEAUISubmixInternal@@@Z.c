/*
 * XREFs of ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140005C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     WPP_SF_DDD @ 0x140037EB0 (WPP_SF_DDD.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixStopped(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  int v4; // r14d
  __int64 v5; // r9
  int v6; // eax
  int v7; // ebx
  unsigned int v9; // edx
  int v10; // [rsp+20h] [rbp-39h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-29h] BYREF
  char v12; // [rsp+38h] [rbp-21h]
  __int128 v13; // [rsp+40h] [rbp-19h]
  __int128 v14; // [rsp+50h] [rbp-9h] BYREF
  __int128 v15; // [rsp+60h] [rbp+7h]
  __int128 v16; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v15 = *(_OWORD *)((char *)this - 56);
  v16 = v15;
  EtwEventActivityIdControl(4LL, &v16);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 128LL))(a2)
    && !*((_DWORD *)this + 12) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids, a2);
    }
LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 1;
  v5 = (unsigned int)(*((_DWORD *)this + 11) - 1);
  *((_DWORD *)this + 11) = v5;
  v6 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids, v5);
    v6 = *((_DWORD *)this + 11);
  }
  if ( v6 )
    goto LABEL_10;
  v13 = *(_OWORD *)((char *)this - 56);
  v14 = v13;
  EtwEventActivityIdControl(4LL, &v14);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 128LL))(*((_QWORD *)this + 3));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
  {
    v9 = 2;
    if ( v7 >= 0 )
      v9 = 4;
    if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v9 )
    {
      v10 = 1;
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        34LL,
        &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids,
        *((unsigned int *)this + 8));
    }
  }
  if ( v7 < 0 )
    v4 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v4;
  EtwEventActivityIdControl(4LL, &v14);
  if ( v7 >= 0 )
  {
LABEL_10:
    if ( v12 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34A,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
    (const char *)(unsigned int)v7,
    v10);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_13:
  EtwEventActivityIdControl(4LL, &v16);
  return (unsigned int)v7;
}
