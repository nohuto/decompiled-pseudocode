/*
 * XREFs of ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x14004D940
 * Callers:
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14004D8E4 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14004D9F4 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x14004E040 (--_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CEC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140011FE8 (-AERTFree@@YAXPEAX0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140040A90 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??1CCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140053AE0 (--1CCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 */

void __fastcall CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(CCrossProcessBaseEndpoint *this, int a2, int a3)
{
  void *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rax
  int v7; // r8d

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  v4 = (void *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    AERTDestroyZoneHeap(v4, a2, a3);
    *((_QWORD *)this + 18) = 0LL;
  }
  v5 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 9) = 0LL;
  v6 = (void *)AERTGetDLLRTHeap();
  AERTFree(*((void **)this + 10), v6, v7);
  *((_QWORD *)this + 10) = 0LL;
  CCrossProcessEndpointTraceLogger::~CCrossProcessEndpointTraceLogger((CCrossProcessBaseEndpoint *)((char *)this + 200));
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
