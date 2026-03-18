/*
 * XREFs of ?BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C00012D4
 * Callers:
 *     imp_WdfFdoLockStaticChildListForIteration @ 0x1C0001240 (imp_WdfFdoLockStaticChildListForIteration.c)
 *     imp_WdfChildListBeginIteration @ 0x1C00393F0 (imp_WdfChildListBeginIteration.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 */

void __fastcall FxChildList::BeginIteration(FxChildList *this, _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  unsigned __int64 *p_m_ListLock; // rsi
  KIRQL v5; // bp
  unsigned int _a2; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx

  p_m_ListLock = &this->m_ListLock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Iterator->Reserved[0] = &this->m_DescriptionListHead;
  if ( (Iterator->Flags & 4) != 0 )
    Iterator->Reserved[1] = (void *)1;
  KeClearEvent(&this->m_ScanEvent.m_Event);
  _a2 = this->m_ScanCount + 1;
  this->m_ScanCount = _a2;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 5u, 0xCu, 0x11u, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
}
