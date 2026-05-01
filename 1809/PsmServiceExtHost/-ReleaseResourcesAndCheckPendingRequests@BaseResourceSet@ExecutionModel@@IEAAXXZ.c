/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180018D90
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800028D0 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800064BC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180018A10 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800632B0 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180058D48 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  ExecutionModel::BaseResourceSet *v7; // rcx
  __int64 v8; // rsi
  _QWORD *i; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v1 = *((_DWORD *)this + 350);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 0;
      v4 = 1LL;
      v5 = 0LL;
      do
      {
        v6 = *(_QWORD *)((char *)this + v5 + 200);
        if ( v6 )
        {
          if ( (v4 & *((_QWORD *)this + 174)) == 0 )
          {
            if ( v3 == 2 )
              ExecutionModel::ResourceManager::ReplenishIoCounterPool(
                *((ExecutionModel::ResourceManager **)this + 3),
                *(_QWORD *)((char *)this + v5 + 200));
            else
              *(_QWORD *)(*((_QWORD *)this + 23) + v5 + 200) += v6;
          }
          *(_QWORD *)((char *)this + v5 + 200) = 0LL;
        }
        ++v3;
        v4 = __ROL8__(v4, 1);
        v5 += 24LL;
      }
      while ( v3 < 50 );
    }
    *((_DWORD *)this + 350) = 0;
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
    v7 = this;
    v8 = *((_QWORD *)this + 23) + 160LL;
    for ( i = *(_QWORD **)v8; i != (_QWORD *)v8; i = v10 )
    {
      v10 = (_QWORD *)*i;
      if ( (ExecutionModel::BaseResourceSet *)i[2] == v7 )
      {
        v13 = (_QWORD *)i[1];
        *v13 = v10;
        v10[1] = v13;
        v14 = i[2];
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        operator delete(i);
        --*(_QWORD *)(v8 + 16);
        v7 = this;
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
    v11 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      v12 = *(_DWORD *)(v11 + 184);
      if ( (v12 & 3) == 0 )
      {
        *(_DWORD *)(v11 + 184) = v12 | 1;
        TpPostWork(*(_QWORD *)(v11 + 168));
      }
    }
    else if ( (*(_BYTE *)(v11 + 184) & 2) == 0 )
    {
      TpPostWork(*(_QWORD *)(v11 + 176));
    }
  }
}
