/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002CCC (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x14000ECA4 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x14000F790 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14001415C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     atexit @ 0x140016148 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140029E0C (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x14002BF00 (WPP_SF_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032A10 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140035BD8 (-Stop@CPipeInstance@@QEAAJXZ.c)
 */

__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  unsigned int v2; // edi
  struct IAudioStreamingResourceRegistration *v3; // rbx
  int v4; // r14d
  _UNKNOWN **v5; // rcx
  CPipeInstance *v6; // rdi
  int v7; // eax
  int v8; // edi
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rdx
  void *v12; // r8
  LPCGUID v13; // r9
  TraceLoggingHProvider v14; // r10
  LPVOID Context; // [rsp+38h] [rbp-99h] BYREF
  struct IAudioStreamingResourceRegistration *v17; // [rsp+40h] [rbp-91h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-89h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-81h] BYREF
  int v20; // [rsp+58h] [rbp-79h]
  __int64 v21; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp-69h] BYREF
  char v23; // [rsp+70h] [rbp-61h] BYREF
  char v24; // [rsp+78h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-29h] BYREF
  _BYTE *v27; // [rsp+B8h] [rbp-19h]
  __int64 v28; // [rsp+C0h] [rbp-11h]
  char *v29; // [rsp+C8h] [rbp-9h]
  __int64 v30; // [rsp+D0h] [rbp-1h]
  char *v31; // [rsp+D8h] [rbp+7h]
  __int64 v32; // [rsp+E0h] [rbp+Fh]
  __int64 *v33; // [rsp+E8h] [rbp+17h]
  __int64 v34; // [rsp+F0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v17 = 0LL;
    CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v17);
    v3 = v17;
    if ( *((_QWORD *)this + 47) && v17 )
    {
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v17 + 64LL))(v17);
      *((_QWORD *)this + 47) = 0LL;
    }
    LOBYTE(v20) = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
    v4 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    Context = (LPVOID)*((_QWORD *)this + 21);
    if ( Context )
    {
      do
      {
        v6 = (CPipeInstance *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                 (__int64)v5,
                                 (_QWORD **)&Context);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
        }
        v7 = CPipeInstance::Stop(v6);
        v8 = v7;
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3C6,
            (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v7);
        v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
          v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
        }
        if ( v8 < 0 )
          v4 = v8;
      }
      while ( Context );
      v3 = v17;
    }
    else
    {
      v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    if ( (_BYTE)v20 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x20000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
      WPP_SF_((__int64)v5[2], 0x21u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_b2662dbb94f23b55810f055fd8f68975_Traceguids);
    }
    v2 = -2005139433;
    if ( v9 < 0 )
    {
      v4 = v9;
      if ( v9 != -2005139433 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D9,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v9);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
    if ( v3 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v3 + 80LL))(v3);
    if ( v4 != -2005139433 )
    {
      if ( v4 >= 0 )
      {
        CAudioDeviceGraph::DurationTracker::Stop((__int64)this + 80, (__int64)v22);
        v10 = *((_QWORD *)this + 19);
        v21 = 0LL;
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 104LL))(v10, &v21);
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
          && fPending[0] )
        {
          lpCriticalSection = (LPCRITICAL_SECTION)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
          Context = &qword_140086EE8;
          qword_140086EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
          qword_140086F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
          v20 = 0;
          wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(
            (unsigned int *)&lpCriticalSection,
            v11,
            v12);
        }
        if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000001uLL) )
        {
          TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 49));
          v28 = 4LL;
          v29 = &v23;
          v27 = v22;
          v31 = &v24;
          v33 = &v21;
          v30 = 8LL;
          v32 = 8LL;
          v34 = 8LL;
          TlgWrite(v14, &unk_14006FA54, (LPCGUID)this + 22, v13, 7u, &pData);
        }
        v2 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E5,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v4);
        v2 = v4;
      }
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v17);
  }
  else
  {
    v2 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AF,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
  }
  if ( this != (CAudioDeviceGraph *)-264LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  return v2;
}
