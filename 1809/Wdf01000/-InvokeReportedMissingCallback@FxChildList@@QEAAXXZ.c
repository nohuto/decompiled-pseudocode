/*
 * XREFs of ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C000F618
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C000F3C0 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049A8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049F8 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall FxChildList::InvokeReportedMissingCallback(FxChildList *this)
{
  unsigned __int64 *p_m_ListLock; // rsi
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v5; // al
  KIRQL v6; // bl
  unsigned __int8 v7; // r8
  FxChildList *v8; // rbp
  _LIST_ENTRY *v9; // rcx
  __int16 v10; // dx
  _LIST_ENTRY *v11; // rax
  unsigned __int64 v12; // rcx
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-28h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListLockedForEnum;
  KeReleaseSpinLock(p_m_ListLock, v3);
  Flink = this->m_DescriptionListHead.Flink;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      v8 = (FxChildList *)Flink->Flink;
      if ( BYTE3(Flink[5].Flink) == 1 )
      {
        v9 = Flink[4].Flink;
        v10 = WORD1(v9->Blink);
        v11 = v9[40].Blink[105].Flink;
        if ( v11 )
        {
          v12 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !v10 )
            v12 = 0LL;
          ((void (__fastcall *)(unsigned __int64))v11)(v12);
        }
        BYTE3(Flink[5].Flink) = 2;
      }
      Flink = (_LIST_ENTRY *)v8;
    }
    while ( v8 != (FxChildList *)&this->m_DescriptionListHead );
  }
  v5 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
  this->m_State = ListUnlocked;
  v6 = v5;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead, v7);
}
