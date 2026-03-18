/*
 * XREFs of ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C005BCB8
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C0001D60 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002390 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C00038F0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C0007880 (--1FxObject@@UEAA@XZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009F30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C0088F20 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C005D93C (--1FxTagTracker@@QEAA@XZ.c)
 */

FxTagTracker *__fastcall FxTagTracker::`scalar deleting destructor'(FxTagTracker *this)
{
  FxTagTracker::~FxTagTracker(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
