/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00BFD84
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00BFB70 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C0107630 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00BFE14 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00BFE9C (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE **__fastcall Ndis::BindStack::BuildProtocolLink(
        __int64 a1,
        NDIS_BIND_LINK_BASE **a2,
        NDIS_BIND_LINK_BASE *a3)
{
  NDIS_BIND_LINK_BASE *PoolWithTag; // rax
  NDIS_BIND_LINK_BASE *v6; // rbx

  PoolWithTag = (NDIS_BIND_LINK_BASE *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4C745042u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x58uLL);
    NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE(v6);
    v6[1].BindState.Miniport = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( &v6[1] != a3 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(&v6[1], a3->BindState.Miniport);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
