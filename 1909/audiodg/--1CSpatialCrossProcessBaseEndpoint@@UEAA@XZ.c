/*
 * XREFs of ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140057B48
 * Callers:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140057CB4 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140057D40 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140058120 (--_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001368C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A60 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140058F54 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x14005958C (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(
        CSpatialCrossProcessBaseEndpoint *this)
{
  __int64 *v2; // rdi
  int v3; // edx
  int v4; // r8d
  void *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdx

  *(_QWORD *)this = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessBaseEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  v2 = (__int64 *)((char *)this + 392);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 49);
  v5 = (void *)*((_QWORD *)this + 15);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5, v3, v4);
    *((_QWORD *)this + 15) = 0LL;
  }
  v6 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (void *)*((_QWORD *)this + 113);
  if ( v7 )
    operator delete(v7);
  *((_QWORD *)this + 113) = 0LL;
  v8 = (void *)*((_QWORD *)this + 22);
  if ( v8 )
  {
    CoTaskMemFree(v8);
    *((_QWORD *)this + 22) = 0LL;
  }
  CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger((CSpatialCrossProcessBaseEndpoint *)((char *)this + 400));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 43);
  if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v9);
  }
  v10 = (volatile signed __int32 *)(*((_QWORD *)this + 23) - 24LL);
  if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 11);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
