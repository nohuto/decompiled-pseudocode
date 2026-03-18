/*
 * XREFs of ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C026A510
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F4FA4 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C022560C (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SetHostHandle(DXGSYNCOBJECT *this, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx

  if ( (*((_BYTE *)this + 196) & 1) != 0 )
  {
    v8 = operator new[](0x18uLL, 0x4B677844u, PagedPool);
    if ( v8 )
    {
      v8[2] = 0LL;
      v8[1] = 0LL;
      *v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
    {
      v11 = WdLogNewEntry5_WdLowResource(v7, v6, v9, v10);
      *(_QWORD *)(v11 + 24) = 5299LL;
      WdLogEvent5_WdLowResource(v11);
      return 3221225495LL;
    }
    *((_DWORD *)v8 + 4) = a2;
    *((_DWORD *)v8 + 5) = a3;
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v13 = (_QWORD *)((char *)this + 96);
    v14 = *((_QWORD *)this + 12);
    if ( *(DXGSYNCOBJECT **)(v14 + 8) != (DXGSYNCOBJECT *)((char *)this + 96) )
      __fastfail(3u);
    *v8 = v14;
    v8[1] = v13;
    *(_QWORD *)(v14 + 8) = v8;
    *v13 = v8;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
  }
  else
  {
    *((_DWORD *)this + 22) = a3;
  }
  return 0LL;
}
