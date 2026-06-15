/*
 * XREFs of ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x1800414D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioDevicePropertyReader *__fastcall SpatialAudioDevicePropertyReader::`vector deleting destructor'(
        SpatialAudioDevicePropertyReader *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  HANDLE v12; // rax

  *(_QWORD *)this = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 106) = 0;
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    _aligned_free(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    _aligned_free(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 63);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v6);
  *((_QWORD *)this + 63) = 0LL;
  v8 = *((_QWORD *)this + 52);
  if ( v8 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 51);
  if ( v9 )
  {
    *((_QWORD *)this + 51) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 50);
  if ( v10 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  *((_DWORD *)this + 11) = -1073741823;
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( (a2 & 1) != 0 )
  {
    v12 = GetProcessHeap();
    HeapFree(v12, 0, this);
  }
  return this;
}
