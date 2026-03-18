/*
 * XREFs of ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000B874
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000AC94 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C000AE40 (NtDCompositionSubmitDWMBatch.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000B4F0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C006D990 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C006DCE0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C006E1D8 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C006F5CC (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C0094EC0 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C01A34C8 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000BD18 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C000CB24 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000CE24 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C006EBC8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C006F7C0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C008B750 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C0091AC0 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::ProcessReturnedBatches(union _SLIST_HEADER *this)
{
  char v2; // r15
  PSLIST_ENTRY v3; // rsi
  ULONGLONG v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r12
  DirectComposition::CApplicationChannel *v9; // r13
  struct _SLIST_ENTRY *Next; // r14
  __int64 *v11; // rbx
  DirectComposition::CEvent *v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rdi
  DirectComposition::CAnimationMarshaler *v15; // rbx
  struct _SLIST_ENTRY *v16; // rdi
  DirectComposition::CAnimationMarshaler *v17; // rcx
  DirectComposition::CEvent *v18; // rbx

  v2 = 0;
  KeResetEvent(*(PRKEVENT *)(this[13].Region + 8));
  v3 = ExpInterlockedPopEntrySList(this + 12);
  if ( v3 )
  {
    do
    {
      --*((_DWORD *)&this[14].HeaderX64 + 1);
      v5 = *((_QWORD *)&v3[4].Next + 1);
      if ( v5 > this[14].Region )
      {
        LOBYTE(this[15].Alignment) |= 2u;
        this[14].Region = v5;
      }
      if ( *((_QWORD *)&v3[2].Next + 1) )
      {
        DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable((struct DirectComposition::CBatch *)v3);
        *((_QWORD *)&v3[2].Next + 1) = 0LL;
      }
      v6 = *((_QWORD *)&v3[8].Next + 1);
      v7 = *(_QWORD *)(v6 + 32) + *((_QWORD *)&v3[9].Next + 1) + 40LL;
      *(_QWORD *)(v6 + 32) = v7;
      if ( !*(_BYTE *)(v6 + 64) && *(_QWORD *)(v6 + 40) == v7 )
      {
        *(_QWORD *)(v6 + 32) = 0LL;
        *(_QWORD *)(v6 + 40) = 0LL;
        if ( *(_QWORD *)(v6 + 48) )
          DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView((DirectComposition::CBatchSharedMemoryPool *)v6);
      }
      LOBYTE(v3[2].Next) &= 0xF2u;
      v8 = *((_QWORD *)&v3[4].Next + 1);
      v9 = (DirectComposition::CApplicationChannel *)*((_QWORD *)&v3->Next + 1);
      *((_QWORD *)&v3[8].Next + 1) = 0LL;
      v3[9].Next = 0LL;
      LODWORD(v3[3].Next) = 0;
      *((_QWORD *)&v3[3].Next + 1) = 0LL;
      *((_QWORD *)&v3[9].Next + 1) = 0LL;
      Next = v3[5].Next;
      if ( Next )
      {
        do
        {
          v15 = (DirectComposition::CAnimationMarshaler *)Next->Next;
          v16 = (struct _SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
          v17 = (DirectComposition::CAnimationMarshaler *)Next->Next;
          *((_QWORD *)&Next->Next + 1) = 0LL;
          DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v17, v8);
          DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)Next);
          DirectComposition::CApplicationChannel::ReleaseResource(
            v9,
            (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v15 + 16) & -(__int64)(v15 != 0LL)));
          Next = v16;
        }
        while ( v16 );
      }
      v11 = (__int64 *)*((_QWORD *)&v3[5].Next + 1);
      v3[5].Next = 0LL;
      if ( v11 )
      {
        do
        {
          v14 = (__int64 *)*v11;
          if ( *((_DWORD *)v11 + 2) )
          {
            DirectComposition::CConnection::ReleaseSystemResource(
              *(_QWORD *)(*((_QWORD *)&v3->Next + 1) + 40LL),
              *((unsigned int *)v11 + 2));
            *((_DWORD *)v11 + 2) = 0;
          }
          Win32FreePool(v11);
          *((_QWORD *)&v3[5].Next + 1) = v14;
          v11 = v14;
        }
        while ( v14 );
      }
      v12 = (DirectComposition::CEvent *)*((_QWORD *)&v3[6].Next + 1);
      if ( v12 )
      {
        do
        {
          v18 = *(DirectComposition::CEvent **)v12;
          DirectComposition::CEvent::`scalar deleting destructor'(v12, v6);
          *((_QWORD *)&v3[6].Next + 1) = v18;
          v12 = v18;
        }
        while ( v18 );
      }
      v13 = (unsigned int)v3[7].Next;
      if ( v13 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(*((_QWORD *)&v3->Next + 1) + 40LL),
          v13);
        LODWORD(v3[7].Next) = 0;
      }
      v3->Next = (struct _SLIST_ENTRY *)this[11].Region;
      this[11].Region = (ULONGLONG)v3;
      v3 = ExpInterlockedPopEntrySList(this + 12);
    }
    while ( v3 );
    return 1;
  }
  return v2;
}
