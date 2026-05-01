/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18001B610
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18000701C (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18001B410 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003D798 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800703A0 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180065918 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  ExecutionModel::BaseResourceSet *v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v1 = *((_DWORD *)this + 320);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 0;
      v4 = 1LL;
      v5 = 0LL;
      do
      {
        v6 = *(_QWORD *)((char *)this + v5 + 80);
        if ( v6 )
        {
          if ( (v4 & *((_QWORD *)this + 159)) == 0 )
          {
            if ( v3 == 2 )
              ExecutionModel::ResourceManager::ReplenishIoCounterPool(
                *((ExecutionModel::ResourceManager **)this + 3),
                *(_QWORD *)((char *)this + v5 + 80));
            else
              *(_QWORD *)(*((_QWORD *)this + 8) + v5 + 80) += v6;
          }
          *(_QWORD *)((char *)this + v5 + 80) = 0LL;
        }
        ++v3;
        v4 = __ROL8__(v4, 1);
        v5 += 24LL;
      }
      while ( v3 < 50 );
    }
    *((_DWORD *)this + 320) = 0;
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
    v7 = *((_QWORD *)this + 8);
    v8 = *(_QWORD **)(v7 + 40);
    v9 = (_QWORD *)(v7 + 40);
    v10 = this;
    while ( v8 != v9 )
    {
      v11 = (_QWORD *)*v8;
      if ( (ExecutionModel::BaseResourceSet *)v8[2] == v10 )
      {
        v14 = (_QWORD *)v8[1];
        *v14 = v11;
        v11[1] = v14;
        v15 = v8[2];
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        operator delete(v8);
        --v9[2];
        v10 = this;
      }
      v8 = v11;
    }
    if ( v10 )
      (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v10 + 16LL))(v10);
    v12 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) == 1 )
    {
      v13 = *(_DWORD *)(v12 + 160);
      if ( (v13 & 3) == 0 )
      {
        *(_DWORD *)(v12 + 160) = v13 | 1;
        TpPostWork(*(_QWORD *)(v12 + 144));
      }
    }
    else if ( (*(_BYTE *)(v12 + 160) & 2) == 0 )
    {
      TpPostWork(*(_QWORD *)(v12 + 152));
    }
  }
}
