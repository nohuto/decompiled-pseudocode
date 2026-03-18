/*
 * XREFs of ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C000488C
 * Callers:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C0001370 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     imp_WdfChildListEndScan @ 0x1C001A5B0 (imp_WdfChildListEndScan.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049A8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049F8 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000C99C (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003D9AC (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C003DA00 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     WPP_IFR_SF_qll @ 0x1C003E998 (WPP_IFR_SF_qll.c)
 */

void __fastcall FxChildList::EndScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // r15
  unsigned __int8 v4; // dl
  unsigned __int16 v5; // r9
  KIRQL v6; // r12
  unsigned int _a2; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *i; // rdi
  const void *_a1; // rdx
  FxChildList *v12; // rbp
  _LIST_ENTRY **p_Blink; // rsi
  _FX_DRIVER_GLOBALS *v14; // rcx
  _FX_DRIVER_GLOBALS *v15; // rcx
  _LIST_ENTRY *v16; // r8
  const void *v17; // rdx
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v20; // rax
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY **v22; // rdx
  _LIST_ENTRY *v23; // rcx
  _LIST_ENTRY *v24; // r8
  _FX_DRIVER_GLOBALS *v25; // rcx
  const void *v26; // rdx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-38h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  _a2 = this->m_ScanCount - 1;
  this->m_ScanCount = _a2;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 5u, 0xCu, 0xCu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
    _a2 = this->m_ScanCount;
  }
  if ( !_a2 )
  {
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v12 = (FxChildList *)Flink->Flink;
        p_Blink = &Flink[-3].Blink;
        v14 = this->m_Globals;
        if ( v14->FxVerboseOn )
          WPP_IFR_SF_qll(
            v14,
            v4,
            _a2,
            v5,
            traceGuid,
            &Flink[-3].Blink,
            *((_DWORD *)p_Blink + 14),
            *((_DWORD *)p_Blink + 4));
        if ( !*((_BYTE *)p_Blink + 80) )
        {
          if ( *((_DWORD *)p_Blink + 14) == 1 )
          {
            FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)&Flink[-3].Blink);
          }
          else if ( *((_DWORD *)p_Blink + 14) == 4 )
          {
            v15 = this->m_Globals;
            if ( v15->FxVerboseOn )
            {
              v16 = p_Blink[8];
              v17 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v16->Blink) )
                v17 = 0LL;
              WPP_IFR_SF_qq(v15, 5u, 0xCu, 0xEu, WPP_FxChildList_cpp_Traceguids, v17, v16[9].Flink);
            }
            *((_DWORD *)p_Blink + 14) = 3;
            v18 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
LABEL_43:
              __fastfail(3u);
            Blink->Flink = v18;
            v18->Blink = Blink;
            Flink->Blink = Flink;
            Flink->Flink = Flink;
          }
        }
        Flink = (_LIST_ENTRY *)v12;
      }
      while ( v12 != (FxChildList *)&this->m_ModificationListHead );
    }
    for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    {
      v20 = i;
      if ( BYTE2(i[5].Flink) )
      {
        v21 = i->Flink;
        v22 = &i->Blink;
        i = i->Blink;
        if ( v20->Flink->Blink != v20 )
          goto LABEL_43;
        if ( i->Flink != v20 )
          goto LABEL_43;
        i->Flink = v21;
        v21->Blink = i;
        v23 = freeHead.Blink;
        if ( freeHead.Blink->Flink != &freeHead )
          goto LABEL_43;
        *v22 = freeHead.Blink;
        v20->Flink = &freeHead;
        v23->Flink = v20;
        freeHead.Blink = v20;
      }
      else if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 && !LOBYTE(i[5].Flink) )
      {
        v24 = i[4].Flink;
        v25 = this->m_Globals;
        if ( v24 )
        {
          if ( v25->FxVerboseOn )
          {
            v26 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v24->Blink) )
              v26 = 0LL;
            WPP_IFR_SF_qq(v25, 5u, 0xCu, 0xFu, WPP_FxChildList_cpp_Traceguids, v26, v24[9].Flink);
          }
        }
        else if ( v25->FxVerboseOn )
        {
          WPP_IFR_SF_q(v25, 5u, 0xCu, 0x10u, WPP_FxChildList_cpp_Traceguids, i);
        }
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
      }
    }
    FxChildList::ProcessModificationsLocked(this, &freeHead);
    if ( this->m_InvalidationNeeded )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
      if ( SafePhysicalDevice )
      {
        this->m_InvalidationNeeded = 0;
        IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
      }
    }
    KeSetEvent(&this->m_ScanEvent.m_Event, 0, 0);
  }
  KeReleaseSpinLock(p_m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead);
}
