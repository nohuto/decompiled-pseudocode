/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140004670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000234C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400045F4 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004644 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400049D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004E94 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x1400196A4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140037E7C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  char v5; // r15
  int StreamingResourceManagerInternal; // eax
  struct IAudioStreamingResourceRegistration *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // eax
  ULONGLONG Ptr; // rcx
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rcx
  CPipeInstance **Next; // rax
  int v21; // eax
  __int64 v22; // rcx
  const GUID *v23; // r9
  int cData; // [rsp+28h] [rbp-29h]
  int cDataa; // [rsp+28h] [rbp-29h]
  struct IAudioStreamingResourceRegistration *v27; // [rsp+38h] [rbp-19h] BYREF
  __int64 v28; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR lpCriticalSection[2]; // [rsp+48h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v27 = 0LL;
    v5 = 1;
    StreamingResourceManagerInternal = CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v27);
    if ( StreamingResourceManagerInternal < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x33B,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)StreamingResourceManagerInternal,
        cData);
    v7 = v27;
    if ( v27 )
    {
      v8 = *(_QWORD *)v27;
      v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 56LL))((char *)this + 16);
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *, __int64))(v8 + 72))(v7, v9);
    }
    v10 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                     + 32LL);
    lpCriticalSection[0].Ptr = 0LL;
    v11 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, EVENT_DATA_DESCRIPTOR *))*v10)(
            *v10,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            lpCriticalSection);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x350,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v11,
        cData);
    Ptr = lpCriticalSection[0].Ptr;
    if ( lpCriticalSection[0].Ptr )
    {
      if ( v7 )
      {
        v27 = 0LL;
        v13 = (**(__int64 (__fastcall ***)(ULONGLONG, GUID *, struct IAudioStreamingResourceRegistration **))lpCriticalSection[0].Ptr)(
                lpCriticalSection[0].Ptr,
                &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                &v27);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4E0,
            (unsigned int)"internal\\sdk\\inc\\wil\\com.h",
            (const char *)(unsigned int)v13,
            cData);
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x357,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)v14,
            cDataa);
        }
        if ( v27 )
        {
          v15 = (*(__int64 (__fastcall **)(struct IAudioStreamingResourceRegistration *, struct IAudioStreamingResourceRegistration *, char *))(*(_QWORD *)v7 + 56LL))(
                  v7,
                  v27,
                  (char *)this + 376);
          if ( v15 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x35B,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
              (const char *)(unsigned int)v15,
              cData);
          if ( v27 )
            (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v27 + 16LL))(v27);
        }
        Ptr = lpCriticalSection[0].Ptr;
      }
      if ( Ptr )
        (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    v16 = *((_QWORD *)this + 19);
    v28 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *, struct ISaDeviceCallback *, struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v16 + 32LL))(
            v16,
            &v28,
            a2,
            v7);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x363,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v17,
        cData);
    }
    else
    {
      LOBYTE(lpCriticalSection[0].Size) = 0;
      lpCriticalSection[0].Ptr = (ULONGLONG)this + 216;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
      v27 = (struct IAudioStreamingResourceRegistration *)*((_QWORD *)this + 21);
      if ( v27 )
      {
        while ( 1 )
        {
          Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                                     v19,
                                     (_QWORD **)&v27);
          v21 = CPipeInstance::Start(*Next);
          v18 = v21;
          if ( v21 < 0 )
            break;
          if ( !v27 )
            goto LABEL_24;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36B,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v21,
          cData);
        if ( LOBYTE(lpCriticalSection[0].Size) )
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection[0].Ptr);
      }
      else
      {
LABEL_24:
        if ( LOBYTE(lpCriticalSection[0].Size) )
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection[0].Ptr);
        v5 = 0;
        if ( !*((_BYTE *)this + 80) )
        {
          QueryPerformanceCounter((LARGE_INTEGER *)this + 12);
          *((_BYTE *)this + 80) = 1;
        }
        v22 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                            v19,
                            lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v22 > 4u
          && (*(_BYTE *)(v22 + 16) & 1) != 0
          && (*(_QWORD *)(v22 + 24) & 1LL) == *(_QWORD *)(v22 + 24) )
        {
          TlgWrite((TraceLoggingHProvider)v22, &unk_140072132, (LPCGUID)this + 22, v23, 2u, lpCriticalSection);
        }
        v18 = 0;
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 )
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 120LL))(this);
  }
  else
  {
    v18 = -2005139437;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x335,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL,
      cData);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v18;
}
