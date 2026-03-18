/*
 * XREFs of ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800E80F0
 * Callers:
 *     ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x1800E8030 (--_GCHwndRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180176470 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800D8614 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800E8070 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     PubSebUnregisterRpc @ 0x1800E8E10 (PubSebUnregisterRpc.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0zqq @ 0x18015BC38 (McTemplateU0zqq.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180220AB8 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CHwndRenderTarget::~CHwndRenderTarget(CHwndRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v4; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v5; // rcx
  char updated; // al
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  CHwndRenderTarget::ResetMoveOptimizationNodes(this);
  CHwndRenderTarget::ReleaseResources(this);
  v2 = *((_QWORD *)this + 106);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 109);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 863) )
    {
      if ( *((_BYTE *)this + 864) && *((_QWORD *)this + 110) )
      {
        PubSebiUpdateLevelEventRpc(*((struct _SEB_RPC_PUBLISH_DATA **)this + 110), 0);
        v4 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 109);
      }
      updated = PubSebiUpdateLevelEventRpc(v4, 0);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0zqq(v8, v7, v9, 0, updated);
      v4 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 109);
      *((_BYTE *)this + 863) = 0;
    }
    PubSebUnregisterRpc(v4);
    *((_QWORD *)this + 109) = 0LL;
  }
  v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 110);
  if ( v5 )
  {
    PubSebUnregisterRpc(v5);
    *((_QWORD *)this + 110) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 97);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 88);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 68);
  CRenderTarget::~CRenderTarget((struct CResource **)this);
}
