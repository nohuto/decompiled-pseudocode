/*
 * XREFs of ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C0235B68
 * Callers:
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01F55F8 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SetHostHandle(DXGSYNCOBJECT *this, int a2, int a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx

  if ( (*((_BYTE *)this + 172) & 1) != 0 )
  {
    v7 = operator new(0x18uLL, 0x4B677844u, PagedPool);
    if ( v7 )
    {
      v7[2] = 0LL;
      v7[1] = 0LL;
      *v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v8 + 24) = 5317LL;
      WdLogEvent5_WdLowResource(v8);
      return 3221225495LL;
    }
    *((_DWORD *)v7 + 4) = a2;
    *((_DWORD *)v7 + 5) = a3;
    DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
    v10 = (_QWORD *)((char *)this + 96);
    v11 = *((_QWORD *)this + 12);
    if ( *(DXGSYNCOBJECT **)(v11 + 8) != (DXGSYNCOBJECT *)((char *)this + 96) )
      __fastfail(3u);
    *v7 = v11;
    v7[1] = v10;
    *(_QWORD *)(v11 + 8) = v7;
    *v10 = v7;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
  }
  else
  {
    *((_DWORD *)this + 22) = a3;
  }
  return 0LL;
}
