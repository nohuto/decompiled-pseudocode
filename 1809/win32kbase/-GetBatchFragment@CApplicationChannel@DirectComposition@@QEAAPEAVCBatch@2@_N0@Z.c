/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000F704
 * Callers:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000E928 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000EB2C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000EDE0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C000F3E0 (NtDCompositionSubmitDWMBatch.c)
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000CFE0 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C000DCC0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000FB74 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C0010504 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C005A6D8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C005B9E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C005C014 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C005C1D4 (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005C610 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00751E4 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C0075434 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C0082180 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  char v4; // r13
  __int64 v5; // rcx
  DirectComposition::CBatchSharedMemoryPool *v6; // r15
  unsigned int v7; // edx
  PSLIST_ENTRY v8; // r14
  DirectComposition::CBatchSharedMemoryPool *v9; // rdi
  __int64 v10; // rax
  DirectComposition::CBatchSharedMemoryPool *v11; // rbx
  int v12; // r10d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  DirectComposition::CBatchSharedMemoryPool **v15; // rax
  __int64 v16; // rax
  struct _ERESOURCE *v17; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r12
  DirectComposition::CApplicationChannel *v23; // r13
  struct _SLIST_ENTRY *Next; // rbp
  __int64 *v25; // rbx
  DirectComposition::CEvent *v26; // rcx
  unsigned int v27; // edx
  DirectComposition::CBatchSharedMemoryPool *v28; // rcx
  DirectComposition::CBatchSharedMemoryPool *v29; // rax
  int v30; // edi
  __int64 *v31; // rdi
  DirectComposition::CBatchSharedMemoryPool *v32; // rcx
  DirectComposition::CAnimationMarshaler *v33; // rbx
  struct _SLIST_ENTRY *v34; // rdi
  DirectComposition::CAnimationMarshaler *v35; // rcx
  DirectComposition::CEvent *v36; // rbx
  unsigned __int64 v37[11]; // [rsp+20h] [rbp-58h] BYREF
  struct DirectComposition::CBatch *v38; // [rsp+80h] [rbp+8h] BYREF
  char v39; // [rsp+88h] [rbp+10h]
  char v40; // [rsp+90h] [rbp+18h]
  DirectComposition::CBatchSharedMemoryPool *v41; // [rsp+98h] [rbp+20h] BYREF

  v40 = a3;
  v39 = a2;
  v41 = 0LL;
  v4 = a3;
  v5 = *((_QWORD *)this + 27);
  v6 = 0LL;
  v38 = 0LL;
  KeResetEvent(*(PRKEVENT *)(v5 + 8));
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 12);
  if ( v8 )
  {
    do
    {
      --*((_DWORD *)this + 57);
      v19 = *((_QWORD *)&v8[4].Next + 1);
      if ( v19 > *((_QWORD *)this + 29) )
      {
        *((_BYTE *)this + 240) |= 2u;
        *((_QWORD *)this + 29) = v19;
      }
      if ( *((_QWORD *)&v8[2].Next + 1) )
      {
        DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable((struct DirectComposition::CBatch *)v8);
        *((_QWORD *)&v8[2].Next + 1) = 0LL;
      }
      v20 = *((_QWORD *)&v8[8].Next + 1);
      v21 = *(_QWORD *)(v20 + 32) + *((_QWORD *)&v8[9].Next + 1) + 40LL;
      *(_QWORD *)(v20 + 32) = v21;
      if ( !*(_BYTE *)(v20 + 64) && *(_QWORD *)(v20 + 40) == v21 )
        DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v20);
      LOBYTE(v8[2].Next) &= 0xF2u;
      v22 = *((_QWORD *)&v8[4].Next + 1);
      v23 = (DirectComposition::CApplicationChannel *)*((_QWORD *)&v8->Next + 1);
      *((_QWORD *)&v8[8].Next + 1) = 0LL;
      v8[9].Next = 0LL;
      LODWORD(v8[3].Next) = 0;
      *((_QWORD *)&v8[3].Next + 1) = 0LL;
      *((_QWORD *)&v8[9].Next + 1) = 0LL;
      Next = v8[5].Next;
      if ( Next )
      {
        do
        {
          v33 = (DirectComposition::CAnimationMarshaler *)Next->Next;
          v34 = (struct _SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
          v35 = (DirectComposition::CAnimationMarshaler *)Next->Next;
          *((_QWORD *)&Next->Next + 1) = 0LL;
          DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v35, v22);
          DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)Next);
          DirectComposition::CApplicationChannel::ReleaseResource(
            v23,
            (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v33 + 16) & -(__int64)(v33 != 0LL)));
          Next = v34;
        }
        while ( v34 );
      }
      v25 = (__int64 *)*((_QWORD *)&v8[5].Next + 1);
      v8[5].Next = 0LL;
      if ( v25 )
      {
        do
        {
          v31 = (__int64 *)*v25;
          if ( *((_DWORD *)v25 + 2) )
          {
            DirectComposition::CConnection::ReleaseSystemResource(
              *(_QWORD *)(*((_QWORD *)&v8->Next + 1) + 40LL),
              *((_DWORD *)v25 + 2));
            *((_DWORD *)v25 + 2) = 0;
          }
          Win32FreePool(v25);
          *((_QWORD *)&v8[5].Next + 1) = v31;
          v25 = v31;
        }
        while ( v31 );
      }
      v26 = (DirectComposition::CEvent *)*((_QWORD *)&v8[6].Next + 1);
      if ( v26 )
      {
        do
        {
          v36 = *(DirectComposition::CEvent **)v26;
          DirectComposition::CEvent::`scalar deleting destructor'(v26, v7);
          *((_QWORD *)&v8[6].Next + 1) = v36;
          v26 = v36;
        }
        while ( v36 );
      }
      v27 = (unsigned int)v8[7].Next;
      if ( v27 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(*((_QWORD *)&v8->Next + 1) + 40LL),
          v27);
        LODWORD(v8[7].Next) = 0;
      }
      v8->Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = v8;
      v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 12);
    }
    while ( v8 );
    v6 = v41;
    v4 = v40;
  }
  if ( *((_QWORD *)this + 21) )
  {
    v6 = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = 0LL;
LABEL_16:
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      if ( v39 )
      {
        *((_DWORD *)v6 + 4) = ++*((_DWORD *)this + 94);
        ++*((_DWORD *)this + 57);
        *((_BYTE *)this + 240) |= 8u;
        v17 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
        if ( v17 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v17, 1u);
          if ( ++*((_DWORD *)this + 56) == 1 )
            KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL));
          ExReleaseResourceLite(*((PERESOURCE *)this + 46));
          KeLeaveCriticalRegion();
        }
      }
    }
    return v6;
  }
  v9 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    v11 = *(DirectComposition::CBatchSharedMemoryPool **)v9;
    v12 = 0;
    v37[0] = 0LL;
    v41 = 0LL;
    v13 = v10 + 40;
    while ( v11 != v9 )
    {
      if ( !*((_BYTE *)v11 + 64) )
      {
        v14 = *((_QWORD *)v11 + 5);
        if ( v13 <= 4096 - v14 )
        {
          *((_BYTE *)v11 + 64) = 1;
          v15 = (DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v11 + 1);
          if ( v15 == (DirectComposition::CBatchSharedMemoryPool **)v9 )
            goto LABEL_9;
          v28 = *(DirectComposition::CBatchSharedMemoryPool **)v11;
          if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v11 + 8LL) == v11 && *v15 == v11 )
          {
            *v15 = v28;
            *((_QWORD *)v28 + 1) = v15;
            v29 = *(DirectComposition::CBatchSharedMemoryPool **)v9;
            if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v9 + 8LL) == v9 )
            {
              *(_QWORD *)v11 = v29;
              *((_QWORD *)v11 + 1) = v9;
              *((_QWORD *)v29 + 1) = v11;
              goto LABEL_40;
            }
          }
LABEL_67:
          __fastfail(3u);
        }
      }
      v11 = *(DirectComposition::CBatchSharedMemoryPool **)v11;
    }
    if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                (DirectComposition::CApplicationChannel *)((char *)this + 600),
                *((_BYTE *)this + 624),
                &v41) >= 0 )
    {
      v11 = v41;
      DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v41, v13, v37);
      v32 = *(DirectComposition::CBatchSharedMemoryPool **)v9;
      if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v9 + 8LL) != v9 )
        goto LABEL_67;
      v14 = v37[0];
      *(_QWORD *)v11 = v32;
      *((_QWORD *)v11 + 1) = v9;
      *((_QWORD *)v32 + 1) = v11;
LABEL_40:
      *(_QWORD *)v9 = v11;
      if ( v12 >= 0 )
        break;
    }
    if ( !v4 )
      return v6;
    DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0, 0);
  }
LABEL_9:
  if ( v11 )
  {
    v16 = *((_QWORD *)v11 + 5);
    if ( (unsigned __int64)(4096 - v16) >= 0x28 )
      *((_QWORD *)v11 + 5) = v16 + 40;
    v6 = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 23);
    if ( v6 )
    {
      *((_QWORD *)this + 23) = *(_QWORD *)v6;
    }
    else
    {
      do
      {
        v30 = DirectComposition::CApplicationChannel::CreateBatch(this, &v38);
        if ( v30 < 0
          && *((int *)this + 57) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0, 0) )
        {
          v6 = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 23);
          v30 = 0;
          v38 = v6;
          *((_QWORD *)this + 23) = *(_QWORD *)v6;
        }
        else
        {
          v6 = v38;
        }
      }
      while ( v4 && v30 < 0 );
    }
    if ( v6 )
    {
      *((_QWORD *)v6 + 17) = v11;
      *((_QWORD *)v6 + 18) = v14;
    }
    else
    {
      *((_BYTE *)v11 + 64) = 0;
    }
    goto LABEL_16;
  }
  return v6;
}
