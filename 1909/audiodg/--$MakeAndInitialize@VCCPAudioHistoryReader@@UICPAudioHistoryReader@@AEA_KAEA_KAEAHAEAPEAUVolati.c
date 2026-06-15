/*
 * XREFs of ??$MakeAndInitialize@VCCPAudioHistoryReader@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAHAEAPEAUVolatileControlData@@AEAPEAUSharedMessageQueueItem@@AEAI55@Z @ 0x140017CFC
 * Callers:
 *     ?GetAudioHistoryReader@CCPAudioHistoryControl@@UEAAJ_K0HPEAPEAUICPAudioHistoryReader@@@Z @ 0x1400519B0 (-GetAudioHistoryReader@CCPAudioHistoryControl@@UEAAJ_K0HPEAPEAUICPAudioHistoryReader@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0HPEAUVolatileControlData@@PEAUSharedMessageQueueItem@@III@Z @ 0x140017E10 (-RuntimeClassInitialize@CCPAudioHistoryReader@@QEAAJ_K0HPEAUVolatileControlData@@PEAUSharedMessa.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14002923C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CCPAudioHistoryReader@@QEAA@XZ @ 0x140051868 (--0CCPAudioHistoryReader@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryReader,ICPAudioHistoryReader,unsigned __int64 &,unsigned __int64 &,int &,VolatileControlData * &,SharedMessageQueueItem * &,unsigned int &,unsigned int &,unsigned int &>(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        int *a4,
        struct VolatileControlData **a5,
        struct SharedMessageQueueItem **a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned int *a9)
{
  CCPAudioHistoryReader *v13; // rax
  int v14; // edi
  CCPAudioHistoryReader *v15; // rbx
  int v16; // r9d
  unsigned __int64 v17; // r8
  CCPAudioHistoryReader *v19; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = (CCPAudioHistoryReader *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v13;
  if ( v13 )
  {
    v15 = CCPAudioHistoryReader::CCPAudioHistoryReader(v13);
    v16 = *a4;
    v17 = *a3;
    v19 = 0LL;
    v14 = CCPAudioHistoryReader::RuntimeClassInitialize(v15, *a2, v17, v16, *a5, *a6, *a7, *a8, *a9);
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
    v14 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v19);
  return (unsigned int)v14;
}
