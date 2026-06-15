/*
 * XREFs of ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800EDEFC
 * Callers:
 *     ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x1800EDEDC (-UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6B8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6BF8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z @ 0x1800EA1A8 (--_GAuxiliaryInputDescriptor@@QEAAPEAXI@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EA36C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup(
        CAudioResourceManager *this,
        const struct Microsoft::WRL::WeakRef *a2)
{
  const WCHAR *v3; // rsi
  LPVOID v4; // rbx
  int v5; // eax
  char v6; // al
  void *v7; // r8
  __int64 cData; // r11
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  TraceLoggingHProvider v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+40h] [rbp-41h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19[3]; // [rsp+60h] [rbp-21h] BYREF
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
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(v19);
      v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, const WCHAR *, __int64 *))(*(_QWORD *)g_DeviceGraphStore
                                                                                            + 24LL))(
              g_DeviceGraphStore,
              v3,
              v19);
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v19[0] + 112LL))(v19[0], &lpCriticalSection);
        *(_QWORD *)fPending = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v14 + 200LL))(v14, fPending);
        if ( *(_QWORD *)fPending )
        {
          v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                  g_DeviceGraphManager,
                  v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 288LL))(v14);
          v4 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
          if ( v4 )
          {
            *(_QWORD *)v4 = 0LL;
            *(_DWORD *)v4 = 0;
            *((_QWORD *)v4 + 1) = 0LL;
          }
          else
          {
            v4 = 0LL;
          }
          v19[2] = (__int64)v4;
          if ( (*(int (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v14 + 272LL))(v14, v4) >= 0 && *(_DWORD *)v4 == 1 )
          {
            v5 = CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
                   this,
                   &v14,
                   *((const unsigned __int16 **)v4 + 1));
            if ( v5 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x9B0,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                (const char *)(unsigned int)v5);
          }
          if ( v4 )
            AuxiliaryInputDescriptor::`scalar deleting destructor'((LPVOID *)v4);
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 216LL))(v14);
          v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
                  g_DeviceGraphManager,
                  v14,
                  *(_QWORD *)fPending,
                  v6 == 0,
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
        lpCriticalSection = (LPCRITICAL_SECTION)qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v7);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **(_DWORD **)&lpCriticalSection->LockCount > 4u )
      {
        TlgCreateWsz(&pDesc, v3);
        v22 = &v15;
        v23 = cData;
        TlgWrite(v11, &unk_1801741C2, v9, v10, cData, &pData);
      }
      Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(v19);
    }
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
