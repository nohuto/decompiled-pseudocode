/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000DBD4
 * Callers:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000C67C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000E430 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000E7B4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000E9DC (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1C000EC94 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00563EC (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C0096690 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        PERESOURCE *this,
        char a2,
        char a3)
{
  struct DirectComposition::CBatch *v3; // rdi
  struct DirectComposition::CBatch *v7; // rax
  __int64 v8; // rax
  DirectComposition::CBatchSharedMemoryPool *v9; // rsi
  struct _ERESOURCE *v10; // rsi
  int v12; // ebp
  unsigned __int64 v13[7]; // [rsp+20h] [rbp-38h] BYREF
  struct DirectComposition::CBatch *v14; // [rsp+60h] [rbp+8h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v15; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v15 = 0LL;
  v13[0] = 0LL;
  v14 = 0LL;
  DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v7 = (struct DirectComposition::CBatch *)this[21];
  if ( v7 )
  {
    this[21] = 0LL;
    v3 = v7;
  }
  else
  {
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(PERESOURCE *))&(*this)->ActiveEntries)(this);
      if ( (int)DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
                  (DirectComposition::CBatchSharedMemoryPoolSet *)(this + 75),
                  v8 + 40,
                  &v15,
                  v13) >= 0
        || !a3 )
      {
        break;
      }
      DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        (DirectComposition::CApplicationChannel *)this,
        0,
        0);
    }
    v9 = v15;
    if ( !v15 )
      return v3;
    DirectComposition::CBatchSharedMemoryPool::UseSpace(v15, 0x28uLL);
    v3 = (struct DirectComposition::CBatch *)this[23];
    if ( v3 )
    {
      this[23] = *(PERESOURCE *)v3;
    }
    else
    {
      do
      {
        v12 = DirectComposition::CApplicationChannel::CreateBatch((DirectComposition::CApplicationChannel *)this, &v14);
        if ( v12 < 0
          && *((int *)this + 57) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
               (DirectComposition::CApplicationChannel *)this,
               0,
               0) )
        {
          v3 = (struct DirectComposition::CBatch *)this[23];
          v12 = 0;
          v14 = v3;
          this[23] = *(PERESOURCE *)v3;
        }
        else
        {
          v3 = v14;
        }
      }
      while ( a3 && v12 < 0 );
    }
    if ( v3 )
    {
      *((_QWORD *)v3 + 18) = v13[0];
      *((_QWORD *)v3 + 17) = v9;
    }
    else
    {
      *((_BYTE *)v9 + 64) = 0;
    }
  }
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    if ( a2 )
    {
      *((_DWORD *)v3 + 4) = ++*((_DWORD *)this + 94);
      ++*((_DWORD *)this + 57);
      *((_BYTE *)this + 240) |= 8u;
      v10 = this[46];
      if ( v10 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v10, 1u);
        if ( ++*((_DWORD *)this + 56) == 1 )
          KeResetEvent((PRKEVENT)this[45]->SystemResourcesList.Blink);
        ExReleaseResourceLite(this[46]);
        KeLeaveCriticalRegion();
      }
    }
  }
  return v3;
}
