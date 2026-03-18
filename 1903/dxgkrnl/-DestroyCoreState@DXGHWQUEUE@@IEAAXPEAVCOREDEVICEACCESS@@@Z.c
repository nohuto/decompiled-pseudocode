/*
 * XREFs of ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0247258
 * Callers:
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120EC8 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0246C8C (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247404 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppp @ 0x1C0042D08 (McTemplateK0ppp.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00F1BF8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01F8ECC (-DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGHWQUEUE::DestroyCoreState(DXGHWQUEUE *this, PERESOURCE **a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rax
  bool v10; // zf
  char v11; // si
  void *v12; // rdx
  DXGDEVICESYNCOBJECT *v13; // rcx

  v2 = *((_QWORD *)this + 2);
  v5 = *(_QWORD *)(v2 + 16);
  if ( !*(_DWORD *)(v5 + 72) )
  {
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 104));
    v2 = *((_QWORD *)this + 2);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 70LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 16LL) + 185LL) )
  {
    *((_BYTE *)this + 80) = 1;
  }
  else if ( !*((_BYTE *)this + 80) )
  {
    v10 = *((_QWORD *)this + 5) == 0LL;
    *((_BYTE *)this + 80) = 1;
    if ( !v10 )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 520LL)
                                                 + 8LL)
                                     + 304LL))(*((_QWORD *)this + 5));
      if ( v11 )
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)a2);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 520LL)
                                                 + 8LL)
                                     + 264LL))(*((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    v12 = (void *)*((_QWORD *)this + 4);
    if ( v12 )
    {
      ADAPTER_RENDER::DdiDestroyHwQueue(*(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), v12, v8);
      *((_QWORD *)this + 4) = 0LL;
    }
    v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 6);
    if ( v13 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v13);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp((__int64)v13, &EventDestroyHwQueue, v8, *((_QWORD *)this + 2), 0LL, this);
    }
  }
}
