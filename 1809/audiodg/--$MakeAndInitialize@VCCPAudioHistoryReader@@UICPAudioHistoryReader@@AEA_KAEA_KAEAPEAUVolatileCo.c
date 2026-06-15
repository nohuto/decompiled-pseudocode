/*
 * XREFs of ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI444@Z @ 0x140053C68
 * Callers:
 *     ?GetAudioHistoryReader@CCPAudioHistoryControl@@UEAAJ_K0PEAPEAUICPAudioHistoryReader@@@Z @ 0x140053F20 (-GetAudioHistoryReader@CCPAudioHistoryControl@@UEAAJ_K0PEAPEAUICPAudioHistoryReader@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??0CCPAudioHistoryReader@@QEAA@XZ @ 0x140053DE0 (--0CCPAudioHistoryReader@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0PEAUVolatileControlData@@PEAUSharedMessageQueueItem@@IIII@Z @ 0x14005446C (-RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0PEAUVolatileControlData@@PEAUSharedMessag.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryReader,ICPAudioHistoryReader,unsigned __int64 &,unsigned __int64 &,VolatileControlData * &,SharedMessageQueueItem * &,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        struct VolatileControlData **a4,
        struct SharedMessageQueueItem **a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned int *a9)
{
  CCPAudioHistoryReader *v13; // rax
  int v14; // edi
  CCPAudioHistoryReader *v15; // rbx

  *a1 = 0LL;
  v13 = (CCPAudioHistoryReader *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    v15 = CCPAudioHistoryReader::CCPAudioHistoryReader(v13);
    v14 = CCPAudioHistoryReader::RuntimeClassInitialize(v15, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9);
    if ( v14 >= 0 )
      v14 = (**(__int64 (__fastcall ***)(CCPAudioHistoryReader *, GUID *, _QWORD *))v15)(
              v15,
              &GUID_2f112202_919d_48ae_b337_2b9271fe98aa,
              a1);
    if ( v15 )
      (*(void (__fastcall **)(CCPAudioHistoryReader *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
