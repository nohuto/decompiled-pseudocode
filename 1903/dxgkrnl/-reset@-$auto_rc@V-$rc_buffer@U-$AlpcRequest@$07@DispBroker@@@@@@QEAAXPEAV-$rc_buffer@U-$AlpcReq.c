/*
 * XREFs of ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B3BC
 * Callers:
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ @ 0x1C004680C (-CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ.c)
 *     DxgkDispMgrCreate @ 0x1C00C5BE0 (DxgkDispMgrCreate.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C79FC (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00CA810 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C01417BC (--1DXGSESSIONDATA@@QEAA@XZ.c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02342B4 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234584 (DxgkIddHandleSetDisplayConfig.c)
 *     ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C028C478 (--1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ.c)
 *     ??R?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C028C524 (--R-$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGER.c)
 *     ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1C028CCC4 (-GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV-$auto_rc@VDXGDISPLAYMANAGEROBJ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(
        ReferenceCounted **a1,
        __int64 a2,
        __int64 a3)
{
  ReferenceCounted *v5; // rcx
  unsigned __int64 result; // rax

  v5 = *a1;
  if ( v5 && (ReferenceCounted *)a2 != v5 )
    result = ReferenceCounted::Release(v5, a2, a3);
  *a1 = (ReferenceCounted *)a2;
  return result;
}
