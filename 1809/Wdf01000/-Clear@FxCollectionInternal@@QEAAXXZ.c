/*
 * XREFs of ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0063B4C
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0051A94 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C00633FC (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1C0063AC0 (--1FxCollection@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C0063BB0 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 */

void __fastcall FxCollectionInternal::Clear(FxCollectionInternal *this)
{
  _LIST_ENTRY *p_m_ListHead; // rbx

  p_m_ListHead = &this->m_ListHead;
  while ( p_m_ListHead->Flink != p_m_ListHead )
    FxCollectionInternal::Remove(this, 0);
}
