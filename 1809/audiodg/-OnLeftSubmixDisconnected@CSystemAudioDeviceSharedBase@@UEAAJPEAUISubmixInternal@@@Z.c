/*
 * XREFs of ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140018360
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140037E7C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_DDD @ 0x140037EB0 (WPP_SF_DDD.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::OnLeftSubmixDisconnected(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  __int64 v4; // r9
  int v5; // eax
  int v6; // edi
  int v7; // eax
  unsigned int v9; // edx
  int v10; // [rsp+20h] [rbp-29h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-19h] BYREF
  char v12; // [rsp+38h] [rbp-11h]
  __int128 v13; // [rsp+40h] [rbp-9h]
  __int128 v14; // [rsp+50h] [rbp+7h] BYREF
  __int128 v15; // [rsp+60h] [rbp+17h]
  __int128 v16; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v15 = *(_OWORD *)((char *)this - 56);
  v16 = v15;
  EtwEventActivityIdControl(4LL, &v16);
  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 120);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (*(unsigned __int8 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 136LL))(a2) )
    (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *, struct ISubmixInternal *))(*(_QWORD *)this + 104LL))(
      this,
      a2);
  v4 = (unsigned int)(*((_DWORD *)this + 10) - 1);
  *((_DWORD *)this + 10) = v4;
  v5 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids, v4);
    v5 = *((_DWORD *)this + 10);
  }
  if ( !v5 && *((_DWORD *)this + 8) )
  {
    v13 = *(_OWORD *)((char *)this - 56);
    v14 = v13;
    EtwEventActivityIdControl(4LL, &v14);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 120LL))(*((_QWORD *)this + 3));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0 )
    {
      v9 = 2;
      if ( v6 >= 0 )
        v9 = 4;
      if ( *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= v9 )
      {
        v10 = 0;
        WPP_SF_DDD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          34LL,
          &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids,
          *((unsigned int *)this + 8));
      }
    }
    if ( v6 < 0 )
      v7 = *((_DWORD *)this + 8);
    else
      v7 = 0;
    *((_DWORD *)this + 8) = v7;
    EtwEventActivityIdControl(4LL, &v14);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x36D,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
        (const char *)(unsigned int)v6,
        v10);
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v16);
  return 0LL;
}
