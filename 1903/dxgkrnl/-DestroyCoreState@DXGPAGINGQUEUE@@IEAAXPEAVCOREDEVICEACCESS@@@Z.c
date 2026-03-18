/*
 * XREFs of ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120E0C
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C011F9F4 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120D00 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0121538 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00F1BF8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z @ 0x1C026CF14 (-UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAXI@Z.c)
 */

void __fastcall DXGPAGINGQUEUE::DestroyCoreState(DXGPAGINGQUEUE *this, PERESOURCE **a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  DXGDEVICESYNCOBJECT *v8; // rcx
  __int64 v9; // rax

  v2 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v2 + 72) )
  {
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 104));
    v2 = *((_QWORD *)this + 2);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v2 + 16) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v9 + 24) = 66LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( !*((_BYTE *)this + 72) )
  {
    v7 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 72) = 1;
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL)
                                     + 896LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL));
      *((_QWORD *)this + 4) = 0LL;
    }
    v8 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
    if ( v8 )
    {
      if ( *((_QWORD *)this + 7) )
      {
        DXGDEVICESYNCOBJECT::UnmapGpuVaForPagingProcess(v8, *((_DWORD *)this + 12));
        *((_QWORD *)this + 7) = 0LL;
        v8 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
      }
      DXGDEVICESYNCOBJECT::DestroyCoreState(v8);
    }
  }
}
