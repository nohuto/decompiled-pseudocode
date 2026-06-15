/*
 * XREFs of ??$MakeAndInitialize@VCVirtualAudioStream@@UIVirtualAudioStream@@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010394C
 * Callers:
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x180103E14 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??0CVirtualAudioStream@@QEAA@XZ @ 0x180103B6C (--0CVirtualAudioStream@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010410C (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualAudioStream,IVirtualAudioStream,IAudioProcess * &,enum _AUDIO_STREAM_EXTENDED_CATEGORY,unsigned short const * &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 &>(
        _QWORD *a1,
        struct IAudioProcess **a2,
        unsigned int *a3,
        const unsigned __int16 **a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a5)
{
  CVirtualAudioStream *v9; // rax
  int v10; // edi
  CVirtualAudioStream *v11; // rbx

  *a1 = 0LL;
  v9 = (CVirtualAudioStream *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = CVirtualAudioStream::CVirtualAudioStream(v9);
    v10 = CVirtualAudioStream::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
      v10 = (**(__int64 (__fastcall ***)(CVirtualAudioStream *, GUID *, _QWORD *))v11)(
              v11,
              &GUID_0e6e0ae3_9576_4824_b42b_09c3b2d9275a,
              a1);
    if ( v11 )
      (*(void (__fastcall **)(CVirtualAudioStream *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
