/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE608
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE2D4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C01FFA58 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FF18 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq @ 0x1C0039008 (McTemplateK0ppqpttq.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00DC7E8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA1E4 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00EEAFC (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00EED80 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00EF06C (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0070 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00F029C (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(ADAPTER_RENDER **this, struct COREDEVICEACCESS *a2)
{
  unsigned int i; // esi
  __int64 v5; // rbx
  ReferenceCounted *v6; // rcx
  DXGPAGINGQUEUE *j; // rbx
  DXGDEVICESYNCOBJECT *k; // rbx
  DXGCONTEXT *m; // rbx
  ADAPTER_RENDER *v10; // rdx
  ADAPTER_RENDER *v11; // rsi
  __int64 v12; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v14; // rcx
  ADAPTER_RENDER *v15; // rcx
  DXGPROCESS *v16; // rcx
  ADAPTER_RENDER *v17; // rax
  struct _MDL *v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+58h] [rbp-30h]
  int v24; // [rsp+5Ch] [rbp-2Ch]
  int v25; // [rsp+60h] [rbp-28h]
  int v26; // [rsp+68h] [rbp-20h]
  __int64 v27; // [rsp+90h] [rbp+8h] BYREF

  DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, a2, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 434); this[v5 + 192] = 0LL )
  {
    v5 = i;
    v6 = this[i + 176];
    if ( v6 )
    {
      ReferenceCounted::Release(v6);
      this[i + 176] = 0LL;
    }
    operator delete(this[i++ + 192]);
  }
  for ( j = this[49]; j != (DXGPAGINGQUEUE *)(this + 49) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, a2);
  for ( k = this[51]; k != (DXGDEVICESYNCOBJECT *)(this + 51) && k; k = *(DXGDEVICESYNCOBJECT **)k )
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  if ( this[221] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 65) + 8LL) + 616LL))();
    this[221] = 0LL;
  }
  for ( m = this[45]; m != (DXGCONTEXT *)(this + 45) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (PERESOURCE **)a2);
  v10 = this[59];
  if ( v10 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(this[2], v10);
    this[59] = 0LL;
  }
  v11 = this[81];
  if ( v11 )
  {
    v12 = *((_QWORD *)this[2] + 68);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v27, Current);
    (*(void (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(v12 + 8) + 400LL))(v11);
    if ( v27 )
    {
      v14 = v27 + 144;
      *(_QWORD *)(v27 + 152) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
    }
    this[81] = 0LL;
  }
  if ( this[82] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 65) + 8LL) + 120LL))();
    this[82] = 0LL;
  }
  v15 = this[216];
  if ( v15 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *((ADAPTER_DISPLAY **)v15 + 315),
      (int (*)(struct OUTPUTDUPL_MGR *, void *))&SwapChainObOpenProcedure,
      this);
  if ( *((_BYTE *)this + 1750) )
  {
    DXGPROCESS::CloseAdapter(this[5], this[2]);
    *((_BYTE *)this + 1750) = 0;
  }
  if ( *((_DWORD *)this + 84) )
  {
    v16 = this[5];
    v22 = 0LL;
    HostProcess = DXGPROCESS::GetHostProcess(v16);
    v26 = *((_DWORD *)this + 84);
    v17 = this[2];
    v24 = 0;
    v25 = 1;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
      (DXG_VMBUS_CHANNEL_BASE *)(*((_QWORD *)v17 + 2) + 4152LL),
      (struct DXGKVMB_COMMAND_BASE *)&v22,
      0x20u,
      0LL,
      0LL,
      v18);
    *((_DWORD *)this + 84) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v21 = *((_DWORD *)this + 83);
      v20 = *((unsigned __int8 *)this + 1746);
      v19 = *((unsigned __int8 *)this + 1745);
      LODWORD(v18) = *((_DWORD *)this + 82);
      McTemplateK0ppqpttq(
        *((unsigned __int8 *)this + 1746),
        &EventDestroyDevice,
        (const GUID *)this[2],
        *((_QWORD *)this[5] + 8),
        *((_QWORD *)this[2] + 2),
        v18,
        this,
        v19,
        v20,
        v21);
    }
  }
}
