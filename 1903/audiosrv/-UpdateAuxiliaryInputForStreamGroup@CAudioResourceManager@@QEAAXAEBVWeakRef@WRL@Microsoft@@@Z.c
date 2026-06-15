/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800F9AF4
 * Callers:
 *     ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800F9AD4 (-UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D53DC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D5448 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800F5F5C (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800F617C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2)
{
  const WCHAR *v3; // rsi
  LPVOID *v4; // rax
  LPVOID *v5; // rbx
  int v6; // eax
  char v7; // al
  void *v8; // r8
  __int64 cData; // r10
  LPCGUID v10; // r8
  TraceLoggingHProvider v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+40h] [rbp-41h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v19[3]; // [rsp+60h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+17h] BYREF
  int *v22; // [rsp+A8h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v19[1] = -2LL;
  v17 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v17) >= 0 && v17 )
  {
    v14 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v17, &v14) >= 0 )
    {
      v3 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14);
      v19[0] = 0LL;
      v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, const WCHAR *, _QWORD *))(*(_QWORD *)g_DeviceGraphStore
                                                                                           + 24LL))(
              g_DeviceGraphStore,
              v3,
              v19);
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(*(_QWORD *)v19[0] + 112LL))(v19[0], &lpCriticalSection);
        *(_QWORD *)fPending = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v14 + 200LL))(v14, fPending);
        if ( *(_QWORD *)fPending )
        {
          (*(void (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
            g_DeviceGraphManager,
            v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 288LL))(v14);
          v4 = (LPVOID *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
          v5 = v4;
          if ( v4 )
          {
            *v4 = 0LL;
            v4[1] = 0LL;
          }
          else
          {
            v5 = 0LL;
          }
          v19[2] = v5;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 272LL))(v14, v5) >= 0 && *(_DWORD *)v5 == 1 )
          {
            v6 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
                   this,
                   &v14,
                   (const unsigned __int16 *)v5[1]);
            if ( v6 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x9D8,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v6);
          }
          if ( v5 )
            AuxiliaryInputDescriptor::`scalar deleting destructor'(v5);
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 216LL))(v14);
          v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                  g_DeviceGraphManager,
                  v14,
                  *(_QWORD *)fPending,
                  v7 == 0,
                  0LL);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)fPending);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
      lpCriticalSection = 0LL;
      if ( InitOnceBeginInitialize(
             &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
             0,
             fPending,
             (LPVOID *)&lpCriticalSection)
        && fPending[0] )
      {
        lpCriticalSection = (LPCRITICAL_SECTION)&qword_1801B8588;
        qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v8);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
      }
      if ( **(_DWORD **)&lpCriticalSection->LockCount > 4u )
      {
        TlgCreateWsz(&pDesc, v3);
        v22 = &v15;
        v23 = cData;
        TlgWrite(v11, &unk_18017919A, v10, (LPCGUID)v11, cData, &pData);
      }
      v12 = v19[0];
      if ( v19[0] )
      {
        v19[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v14);
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
