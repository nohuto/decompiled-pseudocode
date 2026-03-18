/*
 * XREFs of ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C003BB88
 * Callers:
 *     imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1C0039280 (imp_WdfChildListAddOrUpdateChildDescriptionAsPresent.c)
 *     imp_WdfFdoAddStaticChild @ 0x1C003A880 (imp_WdfFdoAddStaticChild.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0003714 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0003764 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C003BAA4 (--0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C003BB24 (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003C098 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003C410 (-DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C003C468 (-DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C003CD20 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003D410 (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003D478 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 */

__int64 __fastcall FxChildList::Add(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription,
        unsigned int *a4)
{
  unsigned __int64 *p_m_ListLock; // r12
  int v8; // ebp
  KIRQL v9; // r13
  FxDeviceDescriptionEntry *v10; // rax
  unsigned __int64 v11; // rcx
  FxDeviceDescriptionEntry *v12; // rbx
  FxChildListModificationState m_ModificationState; // eax
  FxDeviceDescriptionEntry *v14; // rax
  FxDeviceDescriptionEntry *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  _LIST_ENTRY *v18; // rdx
  _LIST_ENTRY *v19; // rax
  __int64 v20; // rbx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v22; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-38h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v8 = -1073741823;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v10 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, IdentificationDescription);
  v12 = v10;
  if ( v10 )
  {
    m_ModificationState = v10->m_ModificationState;
    if ( m_ModificationState != ModificationInsert )
    {
      if ( (unsigned int)(m_ModificationState - 2) > 1 )
        goto LABEL_25;
LABEL_10:
      v15 = (FxDeviceDescriptionEntry *)FxDeviceDescriptionEntry::operator new(
                                          v11,
                                          this->m_Globals,
                                          this->m_TotalDescriptionSize);
      if ( v15 )
      {
        FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
          v15,
          this,
          this->m_IdentificationDescriptionSize,
          this->m_AddressDescriptionSize);
        v17 = v16;
      }
      else
      {
        v17 = 0LL;
      }
      if ( !v17 )
      {
        v8 = -1073741670;
        goto LABEL_25;
      }
      v8 = FxChildList::DuplicateId(
             this,
             *(_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER **)(v17 + 24),
             IdentificationDescription);
      if ( v8 < 0 )
        goto LABEL_21;
      if ( this->m_AddressDescriptionSize )
        v8 = FxChildList::DuplicateAddress(
               this,
               *(_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER **)(v17 + 32),
               AddressDescription);
      if ( v8 < 0 )
      {
LABEL_21:
        Blink = freeHead.Blink;
        if ( freeHead.Blink->Flink == &freeHead )
        {
          *(_QWORD *)(v17 + 8) = freeHead.Blink;
          *(_QWORD *)v17 = &freeHead;
          Blink->Flink = (_LIST_ENTRY *)v17;
          freeHead.Blink = (_LIST_ENTRY *)v17;
          goto LABEL_25;
        }
      }
      else
      {
        *(_BYTE *)(v17 + 80) = 1;
        v18 = this->m_ModificationListHead.Blink;
        v19 = (_LIST_ENTRY *)(v17 + 40);
        if ( v18->Flink == &this->m_ModificationListHead )
        {
          v19->Flink = &this->m_ModificationListHead;
          *(_QWORD *)(v17 + 48) = v18;
          v18->Flink = v19;
          this->m_ModificationListHead.Blink = v19;
          if ( this->m_StaticList )
          {
            v20 = *(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL);
            FxObject::MarkNoDeleteDDI((FxObject *)v20, ObjectLock);
            *(_QWORD *)(*(_QWORD *)(v20 + 648) + 1624LL) = v17;
            *(_BYTE *)(*(_QWORD *)(v20 + 648) + 1698LL) = 1;
          }
          goto LABEL_25;
        }
      }
      __fastfail(3u);
    }
  }
  else
  {
    v14 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, IdentificationDescription);
    v12 = v14;
    if ( !v14 || (unsigned int)(v14->m_DescriptionState - 1) > 1 )
      goto LABEL_10;
  }
  if ( this->m_AddressDescriptionSize )
    FxChildList::CopyAddress(this, v12->m_AddressDescription, AddressDescription);
  v12->m_FoundInLastScan = 1;
  v8 = 0x40000000;
LABEL_25:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v9);
  FxChildList::DrainFreeListHead(this, &freeHead, v22);
  return (unsigned int)v8;
}
