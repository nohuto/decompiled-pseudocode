/*
 * XREFs of ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C028C848
 * Callers:
 *     ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C028CD2C (-GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z.c)
 *     DxgkDispMgrIsTargetOwned @ 0x1C028D460 (DxgkDispMgrIsTargetOwned.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C0049644 (-FindByValue@-$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z.c)
 */

bool __fastcall DXGDISPLAYMANAGEROBJECT::ContainsTarget(struct DXGFASTMUTEX *const *this, struct _LUID a2, int a3)
{
  bool v6; // bl
  _BYTE v8[16]; // [rsp+20h] [rbp-48h] BYREF
  void **v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-30h]
  struct _LUID v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+50h] [rbp-18h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v11 = a2;
  v12 = a3;
  v9 = &SetElement::`vftable';
  v10 = 0LL;
  v6 = Set<DXGTARGETENTRY>::FindByValue((__int64)(this + 5)) != 0;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
