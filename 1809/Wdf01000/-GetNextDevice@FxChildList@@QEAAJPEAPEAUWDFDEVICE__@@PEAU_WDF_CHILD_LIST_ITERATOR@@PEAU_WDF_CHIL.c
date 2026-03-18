/*
 * XREFs of ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C003D448
 * Callers:
 *     imp_WdfChildListRetrieveNextDevice @ 0x1C003A830 (imp_WdfChildListRetrieveNextDevice.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C003AD4C (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003CE28 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x1C003DB04 (-MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z.c)
 */

__int64 __fastcall FxChildList::GetNextDevice(
        FxChildList *this,
        WDFDEVICE__ **Device,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  WDFDEVICE__ **v7; // r13
  FxDeviceDescriptionEntry *v8; // r15
  unsigned int v9; // ebp
  const void *_a1; // rcx
  FxChildList *v11; // rsi
  _LIST_ENTRY *p_m_DescriptionListHead; // rcx
  _LIST_ENTRY *i; // rax
  FxDeviceDescriptionEntry *Flink; // rsi
  __int64 v15; // r9
  unsigned __int8 (__fastcall *EvtChildListIdentificationDescriptionCompare)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r10
  unsigned __int64 v17; // rcx
  FxDevice *m_Pdo; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v20; // esi
  unsigned __int64 v21; // rcx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  unsigned int v24; // eax
  char v25; // r13
  _LIST_ENTRY *v26; // rsi
  unsigned int v27; // r15d
  unsigned __int8 (__fastcall *v28)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r9
  unsigned __int64 v29; // rcx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v30; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v31; // rdx
  unsigned int v33; // [rsp+40h] [rbp-48h]
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-40h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]

  SpinLock = &this->m_ListLock;
  v7 = Device;
  v8 = 0LL;
  v9 = -2147483622;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
  {
    v9 = -1073741436;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxChildList_cpp_Traceguids, _a1, 0xC0000184);
    goto $Done_10;
  }
  v11 = (FxChildList *)Iterator->Reserved[0];
  if ( v11 )
  {
    if ( this->m_Globals->FxVerifierOn )
    {
      p_m_DescriptionListHead = &this->m_DescriptionListHead;
      if ( v11 != (FxChildList *)&this->m_DescriptionListHead )
      {
        for ( i = p_m_DescriptionListHead->Flink; ; i = i->Flink )
        {
          if ( i == p_m_DescriptionListHead )
          {
            v9 = -1073741811;
            goto $Done_10;
          }
          if ( v11 == (FxChildList *)i )
            break;
        }
      }
    }
    Flink = (FxDeviceDescriptionEntry *)v11->__vftable;
    LOBYTE(v15) = 0;
    if ( Flink != (FxDeviceDescriptionEntry *)&this->m_DescriptionListHead )
    {
      do
      {
        v8 = Flink;
        if ( FxDeviceDescriptionEntry::MatchStateToFlags(Flink, Iterator->Flags) )
        {
          LOBYTE(v15) = 1;
          if ( !Info )
            break;
          EvtChildListIdentificationDescriptionCompare = Info->EvtChildListIdentificationDescriptionCompare;
          if ( !EvtChildListIdentificationDescriptionCompare )
            break;
          v17 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !this->m_ObjectSize )
            v17 = 0LL;
          LOBYTE(v15) = ((__int64 (__fastcall *)(unsigned __int64, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, __int64))EvtChildListIdentificationDescriptionCompare)(
                          v17,
                          Info->IdentificationDescription,
                          Flink->m_IdentificationDescription,
                          v15);
          if ( (_BYTE)v15 )
            break;
        }
        Flink = (FxDeviceDescriptionEntry *)Flink->m_DescriptionLink.Flink;
      }
      while ( Flink != (FxDeviceDescriptionEntry *)&this->m_DescriptionListHead );
      v7 = Device;
    }
    if ( (_BYTE)v15 )
    {
      Iterator->Reserved[0] = Flink;
      m_Pdo = v8->m_Pdo;
      if ( m_Pdo )
      {
        m_ObjectSize = m_Pdo->m_ObjectSize;
        v20 = WdfChildListRetrieveDeviceSuccess;
        v21 = (unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !m_ObjectSize )
          v21 = 0LL;
        *v7 = (WDFDEVICE__ *)v21;
      }
      else
      {
        v20 = WdfChildListRetrieveDeviceNotYetCreated;
      }
      if ( Info )
      {
        IdentificationDescription = Info->IdentificationDescription;
        if ( IdentificationDescription )
          FxChildList::CopyId(this, IdentificationDescription, v8->m_IdentificationDescription);
        AddressDescription = Info->AddressDescription;
        if ( AddressDescription )
          FxChildList::CopyAddress(this, AddressDescription, v8->m_AddressDescription);
        Info->Status = v20;
      }
      v9 = 0;
    }
    else
    {
      Iterator->Reserved[0] = 0LL;
    }
  }
  if ( (Iterator->Flags & 4) != 0 )
  {
    v24 = (unsigned int)Iterator->Reserved[1];
    v33 = v24;
    if ( v24 )
    {
      v25 = 0;
      v26 = this->m_ModificationListHead.Flink;
      v27 = 1;
      if ( v26 == &this->m_ModificationListHead )
        goto LABEL_57;
      while ( 1 )
      {
        if ( LODWORD(v26[1].Flink) == 1 && ++v27 > v24 )
        {
          v25 = 1;
          if ( !Info )
            goto LABEL_49;
          v28 = Info->EvtChildListIdentificationDescriptionCompare;
          if ( !v28 )
            goto LABEL_49;
          v29 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !this->m_ObjectSize )
            v29 = 0LL;
          v25 = v28(
                  (WDFCHILDLIST__ *)v29,
                  Info->IdentificationDescription,
                  (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v26[-1].Flink);
          if ( v25 )
          {
LABEL_49:
            Iterator->Reserved[1] = (void *)v27;
            if ( Info )
            {
              v30 = Info->IdentificationDescription;
              if ( v30 )
                FxChildList::CopyId(this, v30, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v26[-1].Flink);
              v31 = Info->AddressDescription;
              if ( v31 )
                FxChildList::CopyAddress(this, v31, (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v26[-1].Blink);
              Info->Status = WdfChildListRetrieveDeviceNotYetCreated;
            }
            v9 = 0;
LABEL_56:
            if ( !v25 )
LABEL_57:
              Iterator->Reserved[1] = 0LL;
            break;
          }
          v24 = v33;
        }
        v26 = v26->Flink;
        if ( v26 == &this->m_ModificationListHead )
          goto LABEL_56;
      }
    }
  }
$Done_10:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return v9;
}
