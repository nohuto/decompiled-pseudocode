/*
 * XREFs of ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005C144
 * Callers:
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C005C09C (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 * Callees:
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C005C1D4 (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C005C610 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        unsigned __int64 a2,
        struct DirectComposition::CBatchSharedMemoryPool **a3,
        unsigned __int64 *a4)
{
  DirectComposition::CBatchSharedMemoryPoolSet *v8; // rcx
  int v9; // r10d
  DirectComposition::CBatchSharedMemoryPoolSet *v10; // rax
  unsigned __int64 v11; // rax
  DirectComposition::CBatchSharedMemoryPoolSet *v13; // rdx
  DirectComposition::CBatchSharedMemoryPoolSet *v14; // rax
  DirectComposition::CBatchSharedMemoryPoolSet *v15; // rdx
  unsigned __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v17; // [rsp+40h] [rbp+8h] BYREF

  v16[0] = 0LL;
  v17 = 0LL;
  do
  {
    v8 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
    if ( v8 == this )
      goto LABEL_12;
  }
  while ( !DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v8, a2, v16) );
  v17 = this;
  if ( !this )
  {
LABEL_12:
    v9 = DirectComposition::CBatchSharedMemoryPool::Create(this, *((_BYTE *)this + 24), &v17);
    if ( v9 < 0 )
      return (unsigned int)v9;
    DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v17, a2, v16);
    v15 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
    if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) == this )
    {
      *(_QWORD *)this = v15;
      *((_QWORD *)this + 1) = this;
      *((_QWORD *)v15 + 1) = this;
LABEL_15:
      *(_QWORD *)this = this;
      if ( v9 < 0 )
        return (unsigned int)v9;
      goto LABEL_6;
    }
LABEL_17:
    __fastfail(3u);
  }
  v10 = (DirectComposition::CBatchSharedMemoryPoolSet *)*((_QWORD *)this + 1);
  if ( v10 != this )
  {
    v13 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
    if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) == this
      && *(DirectComposition::CBatchSharedMemoryPoolSet **)v10 == this )
    {
      *(_QWORD *)v10 = v13;
      *((_QWORD *)v13 + 1) = v10;
      v14 = *(DirectComposition::CBatchSharedMemoryPoolSet **)this;
      if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) == this )
      {
        *(_QWORD *)this = v14;
        *((_QWORD *)this + 1) = this;
        *((_QWORD *)v14 + 1) = this;
        goto LABEL_15;
      }
    }
    goto LABEL_17;
  }
LABEL_6:
  v11 = v16[0];
  *a3 = this;
  *a4 = v11;
  return (unsigned int)v9;
}
