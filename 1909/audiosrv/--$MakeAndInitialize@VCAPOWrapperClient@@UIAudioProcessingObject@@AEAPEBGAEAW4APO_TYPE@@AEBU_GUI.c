/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002A110
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002A5B0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002A9D0 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
        _QWORD *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  LPCRITICAL_SECTION v10; // rdi
  struct CAudioThreadPool *v11; // r15
  HANDLE OwningThread; // rdx
  unsigned int v13; // r15d
  __int64 v14; // r12
  HRESULT Instance; // edi
  const GUID *v16; // r8
  const GUID *v17; // r9
  HRESULT v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-B8h]
  _DWORD *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  _DWORD *v24; // [rsp+60h] [rbp-A0h]
  _DWORD *v25; // [rsp+68h] [rbp-98h]
  LPCRITICAL_SECTION v26; // [rsp+70h] [rbp-90h]
  LPCRITICAL_SECTION v27; // [rsp+78h] [rbp-88h]
  GUID v28; // [rsp+80h] [rbp-80h] BYREF
  GUID ActivityId; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  const char *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  HRESULT *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]

  v23 = -2LL;
  *a1 = 0LL;
  v8 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v21 = v8;
  v24 = v8;
  if ( !v8 )
    return 2147942414LL;
  v25 = v8;
  v8[13] = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `IAPOWrapperClient'};
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v8 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v8 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v8 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)v8 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAPOPreferredFormatSupport>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &CAPOWrapperClient::`vftable'{for `IAPOWrapperClient'};
  *((_QWORD *)v9 + 1) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v9 + 2) = &CAPOWrapperClient::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v9 + 3) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v9 + 4) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)v9 + 5) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v9 + 7) = 0LL;
  *((_QWORD *)v9 + 8) = 0LL;
  v9[18] = 0;
  v10 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v26 = v10;
  if ( ++LODWORD(v10[1].DebugInfo) == 1 )
  {
    v11 = ThreadPool;
    EnterCriticalSection(v10);
    v27 = v10;
    OwningThread = v10[3].OwningThread;
    if ( OwningThread )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v11 + 24LL))(
        v11,
        OwningThread,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, __int64))(*(_QWORD *)v11 + 32LL))(
        v11,
        v10[3].OwningThread,
        1LL);
    }
    LeaveCriticalSection(v10);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v10);
  }
  LeaveCriticalSection(v10);
  v22 = v9;
  v21 = 0LL;
  v13 = *a3;
  v14 = *a2;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EventActivityIdControl(1u, &ActivityId);
  Instance = CoCreateInstance(
               &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
               0LL,
               0x17u,
               &GUID_69fed9b6_5405_48b8_3db0_4ca492fc3677,
               (LPVOID *)v9 + 7);
  v19 = Instance;
  if ( Instance >= 0 )
  {
    v28 = ActivityId;
    Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64, _DWORD *))(**((_QWORD **)v9 + 7)
                                                                                             + 24LL))(
                 *((_QWORD *)v9 + 7),
                 &v28,
                 v14,
                 v13,
                 a4,
                 v9 + 16);
    v19 = Instance;
    if ( Instance >= 0 )
      goto LABEL_10;
  }
  if ( (unsigned int)dword_1801B54B8 > 2 )
  {
    v31 = "CAPOWrapperClient::RuntimeClassInitialize";
    v32 = 42LL;
    v20 = 44;
    v33 = &v20;
    v34 = 4LL;
    v35 = &v19;
    v36 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B54B8, &unk_18017BD9D, v16, v17, 5u, &pData);
    Instance = v19;
  }
  if ( Instance >= 0 )
LABEL_10:
    Instance = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v9)(
                 v9,
                 &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
                 a1);
  if ( v9 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)Instance;
}
