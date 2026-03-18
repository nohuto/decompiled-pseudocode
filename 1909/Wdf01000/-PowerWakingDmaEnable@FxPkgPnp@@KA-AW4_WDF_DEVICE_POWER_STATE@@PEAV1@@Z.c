/*
 * XREFs of ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000CE54 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00105C0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0011470 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019AA0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C0019E90 (-PowerUp@FxDmaEnabler@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnable(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  char v4; // bl
  FxSpinLockTransactionedList *m_DmaEnablerList; // rcx
  FxEnumerationInfo *m_EnumInfo; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxWaitLockTransactionedList_vtbl *v8; // rax
  __int64 v9; // r8
  _LIST_ENTRY *Flink; // rbx
  FxEnumerationInfo *v11; // rcx
  _LIST_ENTRY *p_m_ListHead; // rax
  FxTransactionedList *p_m_ChildListList; // r8
  _LIST_ENTRY *v14; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned __int64 v16; // rcx
  _LIST_ENTRY *v17; // rax
  FxTransactionedEntry *v19; // rdi
  FxTransactionedEntry *NextEntryLocked; // rax
  FxSpinLockTransactionedList *v21; // r8
  unsigned __int8 v22; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  m_DmaEnablerList = This->m_DmaEnablerList;
  if ( m_DmaEnablerList )
  {
    FxTransactionedList::LockForEnum(m_DmaEnablerList, This->m_Globals);
    v19 = 0LL;
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(This->m_DmaEnablerList, v19);
      v19 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      if ( FxDmaEnabler::PowerUp((FxDmaEnabler *)NextEntryLocked->m_TransactionedObject) < 0 )
      {
        v21 = This->m_DmaEnablerList;
        v4 = 0;
        break;
      }
    }
    FxTransactionedList::UnlockFromEnum(v21, This->m_Globals);
    if ( !v4 )
      return 827LL;
  }
  m_EnumInfo = This->m_EnumInfo;
  if ( m_EnumInfo )
  {
    m_Globals = This->m_Globals;
    m_EnumInfo->m_ChildListList.AcquireLock(&m_EnumInfo->m_ChildListList, m_Globals, &v22);
    v8 = m_EnumInfo->m_ChildListList.__vftable;
    v9 = v22;
    ++m_EnumInfo->m_ChildListList.m_ListLockedRecursionCount;
    v8->ReleaseLock(&m_EnumInfo->m_ChildListList, m_Globals, v9);
    Flink = 0LL;
    while ( 1 )
    {
      v11 = This->m_EnumInfo;
      p_m_ListHead = &v11->m_ChildListList.m_ListHead;
      if ( Flink )
        p_m_ListHead = Flink;
      p_m_ChildListList = &v11->m_ChildListList;
      v14 = &v11->m_ChildListList.m_ListHead;
      Flink = p_m_ListHead->Flink;
      if ( p_m_ListHead->Flink == v14 )
      {
LABEL_15:
        Flink = 0LL;
      }
      else
      {
        while ( LODWORD(Flink[2].Flink) != 1 )
        {
          Flink = Flink->Flink;
          if ( Flink == v14 )
            goto LABEL_15;
        }
      }
      if ( !Flink )
        break;
      Blink = Flink[2].Blink;
      v16 = 0LL;
      if ( WORD1(Blink->Blink) )
        v16 = (unsigned __int64)Flink[2].Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
      v17 = Blink[12].Flink;
      if ( v17 )
        ((void (__fastcall *)(unsigned __int64, _LIST_ENTRY *, FxTransactionedList *))v17)(
          v16,
          Blink,
          p_m_ChildListList);
    }
    FxTransactionedList::UnlockFromEnum(p_m_ChildListList, This->m_Globals);
  }
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolPowerUpHwStarted, a3);
  return 867LL;
}
