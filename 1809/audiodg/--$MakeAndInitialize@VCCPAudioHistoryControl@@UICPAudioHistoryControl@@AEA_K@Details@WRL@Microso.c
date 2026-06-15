/*
 * XREFs of ??$MakeAndInitialize@VCCPAudioHistoryControl@@UICPAudioHistoryControl@@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEA_K@Z @ 0x140053BA0
 * Callers:
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_K0@Z @ 0x1400424D0 (-Add@CAudioHistoryBufferManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??0CCPAudioHistoryControl@@QEAA@XZ @ 0x140053D70 (--0CCPAudioHistoryControl@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJ_K@Z @ 0x14005435C (-RuntimeClassInitialize@CCPAudioHistoryControl@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryControl,ICPAudioHistoryControl,unsigned __int64 &>(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  CCPAudioHistoryControl *v4; // rax
  int v5; // edi
  CCPAudioHistoryControl *v6; // rbx

  *a1 = 0LL;
  v4 = (CCPAudioHistoryControl *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CCPAudioHistoryControl::CCPAudioHistoryControl(v4);
    v5 = CCPAudioHistoryControl::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CCPAudioHistoryControl *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_e14eb825_78cf_46fa_9c77_3b7330248ba0,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(CCPAudioHistoryControl *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
