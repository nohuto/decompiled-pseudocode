/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140010120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002CCC (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003A68 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004030 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400040F8 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x1400104B4 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     atexit @ 0x140016148 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140029E0C (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032A10 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Start(GUID *this, struct ISaDeviceCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *Data4; // r15
  char v5; // r12
  int StreamingResourceManagerInternal; // eax
  struct IAudioStreamingResourceRegistration *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  CPipeInstance **Next; // rax
  int v20; // eax
  const struct _TlgProvider_t *v21; // rcx
  const struct _TlgProvider_t *v22; // rcx
  const GUID *v23; // r9
  UINT32 cData; // [rsp+20h] [rbp-60h]
  UINT32 cDataa; // [rsp+20h] [rbp-60h]
  LPVOID Context; // [rsp+30h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-48h] BYREF
  char v29; // [rsp+40h] [rbp-40h]
  struct IAudioStreamingResourceRegistration *v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  Data4 = (struct _RTL_CRITICAL_SECTION *)this[16].Data4;
  EnterCriticalSection((LPCRITICAL_SECTION)this[16].Data4);
  if ( this[16].Data1 )
  {
    v30 = 0LL;
    v5 = 1;
    StreamingResourceManagerInternal = CAudioDeviceGraph::GetStreamingResourceManagerInternal(
                                         (CAudioDeviceGraph *)this,
                                         &v30);
    if ( StreamingResourceManagerInternal < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x34F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)StreamingResourceManagerInternal,
        cData);
    v7 = v30;
    if ( v30 )
    {
      v8 = *(_QWORD *)v30;
      v9 = (*(__int64 (__fastcall **)(GUID *))(*(_QWORD *)&this[1].Data1 + 56LL))(this + 1);
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *, __int64))(v8 + 72))(v7, v9);
    }
    v10 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*(_QWORD *)&this[10].Data1 + 16LL)
                     + 32LL);
    Context = 0LL;
    v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, LPVOID *))*v10)(
            *v10,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            &Context);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x364,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v11,
        cData);
    if ( Context && v7 )
    {
      lpCriticalSection = 0LL;
      v12 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, LPCRITICAL_SECTION *))Context)(
              Context,
              &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
              &lpCriticalSection);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C8,
          (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
          (const char *)(unsigned int)v12,
          cData);
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36B,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)v13,
          cDataa);
      }
      if ( lpCriticalSection )
      {
        v14 = (*(__int64 (__fastcall **)(struct IAudioStreamingResourceRegistration *, LPCRITICAL_SECTION, unsigned __int8 *))(*(_QWORD *)v7 + 56LL))(
                v7,
                lpCriticalSection,
                this[23].Data4);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x36F,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v14,
            cData);
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&Context);
    v15 = *(_QWORD *)this[9].Data4;
    v31 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, struct ISaDeviceCallback *, struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v15 + 32LL))(
            v15,
            &v31,
            a2,
            v7);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x377,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v16,
        cData);
    }
    else
    {
      v29 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)this[13].Data4;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      Context = *(LPVOID *)this[10].Data4;
      if ( Context )
      {
        while ( 1 )
        {
          Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                     v18,
                                     (_QWORD **)&Context);
          v20 = CPipeInstance::Start(*Next);
          v17 = v20;
          if ( v20 < 0 )
            break;
          if ( !Context )
            goto LABEL_20;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37F,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v20,
          cData);
        if ( v29 )
          LeaveCriticalSection(lpCriticalSection);
      }
      else
      {
LABEL_20:
        if ( v29 )
          LeaveCriticalSection(lpCriticalSection);
        v5 = 0;
        CAudioDeviceGraph::DurationTracker::Start((CAudioDeviceGraph::DurationTracker *)&this[5]);
        Context = 0LL;
        if ( InitOnceBeginInitialize(
               &`AudioDgTelemetryProvider::Instance'::`2'::wrapper,
               0,
               (PBOOL)&lpCriticalSection,
               &Context)
          && (_DWORD)lpCriticalSection )
        {
          pData.Ptr = (ULONGLONG)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
          Context = &qword_140086EE8;
          qword_140086EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
          qword_140086F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
          pData.Size = 0;
          wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&pData);
        }
        v21 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
        if ( *(_DWORD *)v21 > 4u && TlgKeywordOn(v21, 1uLL) )
          TlgWrite(v22, &unk_14006FC5C, this + 22, v23, 2u, &pData);
        v17 = 0;
      }
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v30);
    if ( v5 )
      (*(void (__fastcall **)(GUID *))(*(_QWORD *)&this->Data1 + 120LL))(this);
  }
  else
  {
    v17 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x349,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      cData);
  }
  if ( Data4 )
    LeaveCriticalSection(Data4);
  return v17;
}
