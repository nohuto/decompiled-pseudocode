/*
 * XREFs of ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C003DB3C
 * Callers:
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D6A0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049A8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049F8 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C003DD30 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007E428 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxChildList::NotifyDeviceRemove(FxChildList *this, int *ChildCount)
{
  const void *_a1; // r8
  bool v5; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  _LIST_ENTRY *v8; // rbx
  KIRQL v9; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // rsi
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *Flink; // rdx
  const void *_a2; // rcx
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-28h] BYREF

  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v5 = this->m_ObjectSize == 0;
  m_Globals = this->m_Globals;
  if ( v5 )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xCu, 0x32u, WPP_FxChildList_cpp_Traceguids, _a1);
  v7 = this->m_Globals;
  freeHead.Blink = &freeHead;
  v8 = 0LL;
  freeHead.Flink = &freeHead;
  FxVerifierCheckIrqlLevel(v7, 0);
  FxChildList::NotifyDeviceSurpriseRemove(this);
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  this->m_State = ListLockedForParentRemove;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  while ( 1 )
  {
    for ( i = p_m_DescriptionListHead->Flink; i != p_m_DescriptionListHead; i = i->Flink )
    {
      v8 = i;
      if ( !BYTE1(i[5].Flink) )
        break;
    }
    if ( i == p_m_DescriptionListHead )
      break;
    Flink = v8[4].Flink;
    _a2 = (const void *)((unsigned __int64)Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(Flink->Blink) )
      _a2 = 0LL;
    WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x33u, WPP_FxChildList_cpp_Traceguids, v8, _a2, Flink[10].Flink);
    v14 = v8->Flink;
    if ( v8->Flink->Blink != v8 || (Blink = v8->Blink, Blink->Flink != v8) )
      __fastfail(3u);
    Blink->Flink = v14;
    v14->Blink = Blink;
    v8->Blink = v8;
    v8->Flink = v8;
    KeReleaseSpinLock(&this->m_ListLock, v9);
    BYTE3(v8[4].Flink[13].Blink) = 1;
    _InterlockedIncrement(ChildCount);
    FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v8[4].Flink[40].Blink, PnpEventParentRemoved, v16);
    v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  }
  this->m_State = ListUnlocked;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(&this->m_ListLock, v9);
  FxChildList::DrainFreeListHead(this, &freeHead, v17);
}
