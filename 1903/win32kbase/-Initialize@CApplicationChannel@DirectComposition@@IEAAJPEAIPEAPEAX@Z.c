/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00560BC
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0055F60 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C00A14C8 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00A24DC (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00563EC (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005647C (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?CreateChannelHandle@CConnection@DirectComposition@@AEAAJPEAVCChannel@2@PEAI@Z @ 0x1C00564BC (-CreateChannelHandle@CConnection@DirectComposition@@AEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C0056554 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C00566D0 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C0056820 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0056EA0 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  NTSTATUS Batch; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  PVOID *v16; // rsi
  __int64 v17; // rax
  int v18; // eax
  enum _EVENT_TYPE v19; // ecx
  DirectComposition::CBatchSharedMemoryPoolSet *v20; // rsi
  unsigned __int64 v21; // rdx
  struct _ERESOURCE *v22; // rbx
  DirectComposition::CConnection *v23; // rbp
  __int64 v25; // [rsp+50h] [rbp-48h] BYREF
  __int64 v26; // [rsp+58h] [rbp-40h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v27; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+A0h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp+20h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 174) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess(v10, v9);
    *((_QWORD *)this + 85) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v13 = (void *)*((_QWORD *)this + 85);
    *((_QWORD *)this + 86) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v13, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v14 = *((_DWORD *)this + 178);
  if ( v14 )
  {
    if ( Batch < 0 )
      goto LABEL_31;
    v15 = (v14 + 4095) & 0xFFFFF000;
    *((_DWORD *)this + 178) = v15;
    if ( !v15 )
      Batch = -1073741801;
    if ( Batch < 0 )
      goto LABEL_31;
    v16 = (PVOID *)((char *)this + 704);
    v25 = v15;
    Batch = MmCreateSection((char *)this + 704, 6LL, 0LL, &v25, 4, 138412032, 0LL, 0LL);
    if ( Batch < 0 )
      goto LABEL_31;
    Batch = MmMapViewInSessionSpace(*v16, (PVOID *)this + 90, &ViewSize);
    if ( Batch < 0 )
      goto LABEL_31;
    v17 = *((unsigned int *)this + 178);
    v26 = 0LL;
    Batch = MmMapViewOfSection(
              *v16,
              *((_QWORD *)this + 85),
              (char *)this + 728,
              0LL,
              v17,
              &v26,
              &ViewSize,
              2,
              0x400000,
              4);
  }
  if ( Batch < 0
    || (v18 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this),
        Batch = DirectComposition::CEvent::Create(v19, v18 != 3, (struct DirectComposition::CEvent **)this + 27),
        Batch < 0) )
  {
LABEL_31:
    v20 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
    goto LABEL_14;
  }
  v20 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
  Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
            (DirectComposition::CApplicationChannel *)((char *)this + 600),
            2uLL);
LABEL_14:
  if ( Batch >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      v20,
      v7,
      (struct DirectComposition::CBatchSharedMemoryPool **)this + 79,
      (unsigned __int64 *)this + 80);
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(v20, v21, &v27, (unsigned __int64 *)this + 81);
    Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 23);
    if ( Batch >= 0 )
    {
      Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 22);
      if ( Batch >= 0 )
      {
        v22 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v22, 1u);
        v23 = (DirectComposition::CConnection *)*((_QWORD *)this + 5);
        Batch = DirectComposition::CConnection::CreateChannelHandle(v23, this, &v28);
        if ( Batch >= 0 )
        {
          if ( !*((_DWORD *)v23 + 37) )
            Batch = -1073741300;
          *((_DWORD *)this + 7) = v28;
        }
        if ( Batch < 0 )
        {
          if ( Batch == -1073741300 )
          {
            *((_DWORD *)this + 6) = 3;
            Batch = 0;
          }
        }
        else
        {
          DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
            v20,
            *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
          *((_DWORD *)this + 6) = 0;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
        KeLeaveCriticalRegion();
        if ( Batch >= 0 )
        {
          if ( a2 )
            *a2 = *((_DWORD *)this + 178);
          if ( a3 )
            *a3 = (void *)*((_QWORD *)this + 91);
        }
      }
    }
  }
  return (unsigned int)Batch;
}
