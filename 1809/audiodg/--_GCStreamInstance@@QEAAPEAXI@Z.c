/*
 * XREFs of ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140034BB0
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400102E0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010920 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x14003FC00 (--1-$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003FCB0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400402B0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14001000C (--1CPipeInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

CStreamInstance *__fastcall CStreamInstance::`scalar deleting destructor'(CStreamInstance *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rdi

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v2 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    CPipeInstance::~CPipeInstance(*(LPVOID **)this);
    operator delete(v5);
  }
  *(_QWORD *)this = 0LL;
  operator delete(this);
  return this;
}
