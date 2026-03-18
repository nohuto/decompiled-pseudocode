/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0121538
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0121B54 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0230240 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq @ 0x1C003F244 (McTemplateK0ppqpttq.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00F1BF8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120E0C (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0120EC8 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0121764 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0121868 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C0121D98 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C0122734 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(ADAPTER_RENDER **this, struct COREDEVICEACCESS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int i; // esi
  __int64 v7; // rdi
  ReferenceCounted *v8; // rcx
  DXGPAGINGQUEUE *j; // rdi
  DXGDEVICESYNCOBJECT *k; // rdi
  DXGCONTEXT *m; // rdi
  ADAPTER_RENDER *v12; // rdx
  ADAPTER_RENDER *v13; // rcx
  DXGPROCESS *v14; // rcx
  ADAPTER_RENDER *v15; // rax
  struct _MDL *v16; // [rsp+28h] [rbp-50h]
  unsigned int v17; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  unsigned int HostProcess; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+5Ch] [rbp-1Ch]
  int v21; // [rsp+60h] [rbp-18h]
  int v22; // [rsp+68h] [rbp-10h]

  DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, a2, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 434); this[v7 + 192] = 0LL )
  {
    v7 = i;
    v8 = this[i + 176];
    if ( v8 )
    {
      ReferenceCounted::Release(v8, v4, v5);
      this[i + 176] = 0LL;
    }
    operator delete(this[i++ + 192]);
  }
  for ( j = this[49]; j != (DXGPAGINGQUEUE *)(this + 49) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, (PERESOURCE **)a2);
  for ( k = this[51]; k != (DXGDEVICESYNCOBJECT *)(this + 51) && k; k = *(DXGDEVICESYNCOBJECT **)k )
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  if ( this[221] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 65) + 8LL) + 616LL))();
    this[221] = 0LL;
  }
  for ( m = this[45]; m != (DXGCONTEXT *)(this + 45) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (PERESOURCE **)a2);
  v12 = this[59];
  if ( v12 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(this[2], v12);
    this[59] = 0LL;
  }
  if ( this[81] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 68) + 8LL) + 400LL))();
    this[81] = 0LL;
  }
  if ( this[82] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 65) + 8LL) + 120LL))();
    this[82] = 0LL;
  }
  v13 = this[216];
  if ( v13 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *((ADAPTER_DISPLAY **)v13 + 319),
      (int (*)(struct OUTPUTDUPL_MGR *, void *))&SwapChainObOpenProcedure,
      this);
  if ( *((_BYTE *)this + 1750) )
  {
    DXGPROCESS::CloseAdapter(this[5], this[2]);
    *((_BYTE *)this + 1750) = 0;
  }
  if ( *((_DWORD *)this + 84) )
  {
    v14 = this[5];
    v18 = 0LL;
    HostProcess = DXGPROCESS::GetHostProcess(v14);
    v22 = *((_DWORD *)this + 84);
    v15 = this[2];
    v20 = 0;
    v21 = 1;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
      (DXG_VMBUS_CHANNEL_BASE *)(*((_QWORD *)v15 + 2) + 4144LL),
      (struct DXGKVMB_COMMAND_BASE *)&v18,
      0x20u,
      0LL,
      0LL,
      v16);
    *((_DWORD *)this + 84) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v17 = *((_DWORD *)this + 83);
      LODWORD(v16) = *((_DWORD *)this + 82);
      McTemplateK0ppqpttq(
        *((unsigned __int8 *)this + 1745),
        &EventDestroyDevice,
        (const GUID *)v17,
        *((_QWORD *)this[5] + 8),
        *((_QWORD *)this[2] + 2),
        v16,
        this,
        *((unsigned __int8 *)this + 1745),
        *((unsigned __int8 *)this + 1746),
        v17);
    }
  }
}
