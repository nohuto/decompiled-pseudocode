/*
 * XREFs of ??1SpeechRuntimeListener@@QEAA@XZ @ 0x180098620
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800952EC (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800957C8 (--1-$unique_ptr@VSpeechRuntimeListener@@U-$default_delete@VSpeechRuntimeListener@@@std@@@std@@QE.c)
 *     ??1SpectrumListener@@UEAA@XZ @ 0x1800957F8 (--1SpectrumListener@@UEAA@XZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800961D8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpeechRuntimeListener::~SpeechRuntimeListener(SpeechRuntimeListener *this)
{
  __int64 *v2; // rsi

  v2 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)*v2 + 48LL))(
      *v2,
      L"System\\SpeechRuntimeListener",
      1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this, *((_QWORD *)this + 3));
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this);
}
