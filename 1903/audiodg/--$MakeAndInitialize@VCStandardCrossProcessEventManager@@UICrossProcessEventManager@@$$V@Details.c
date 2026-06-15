/*
 * XREFs of ??$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEventManager@@@Z @ 0x140003450
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000C8B0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CStandardCrossProcessEventManager,ICrossProcessEventManager,>(
        _QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v4; // rcx
  unsigned int v5; // edi

  *a1 = 0LL;
  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v4 = Microsoft::WRL::Details::ModuleBase::module_;
    v2[3] = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICrossProcessEventManager>::`vftable';
    if ( v4 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v4 + 8LL))(v4);
    *(_QWORD *)v3 = &CStandardCrossProcessEventManager::`vftable';
    v5 = ((__int64 (__fastcall *)(_DWORD *, GUID *, _QWORD *))CStandardCrossProcessEventManager::`vftable')(
           v3,
           &GUID_c4e70434_407d_416b_94be_9717b79065fb,
           a1);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
