/*
 * XREFs of ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0049644
 * Callers:
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C0049558 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsByValue@?$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z @ 0x1C0049628 (-ContainsByValue@-$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C014847C (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C028C848 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C028CF38 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C028D0A8 (-ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C028D258 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1C028C500 (--9DXGTARGETENTRY@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DXGTARGETENTRY>::FindByValue(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 == a1 + 24 )
    return 0LL;
  v2 = v1 - 8;
  while ( v2 )
  {
    if ( !(unsigned __int8)DXGTARGETENTRY::operator!=(v2) )
      break;
    v5 = *(_QWORD *)(v2 + 8);
    v2 = v5 - 8;
    if ( v5 == v4 )
      v2 = v3;
  }
  return v2;
}
