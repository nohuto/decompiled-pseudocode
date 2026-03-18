/*
 * XREFs of ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003CBFC
 * Callers:
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00049F8 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F704 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C003CB30 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 */

unsigned __int8 __fastcall FxChildList::CloneEntryLocked(
        FxChildList *this,
        _LIST_ENTRY *FreeListHead,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *m_Pdo; // r10
  const void *_a1; // r8
  unsigned __int8 v11; // r14
  FxDeviceDescriptionEntry *v12; // rax
  FxDeviceDescriptionEntry *v13; // rbx
  unsigned __int8 (__fastcall *m_EvtChildListDeviceReenumerated)(WDFCHILDLIST__ *, WDFDEVICE__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // r10
  FxDevice *v15; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *m_AddressDescription; // r9
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _LIST_ENTRY *Blink; // rax
  _FX_DRIVER_GLOBALS *v21; // rcx
  FxDevice *v22; // r11
  const void *_a2; // r10
  _LIST_ENTRY *v24; // rcx
  unsigned __int8 result; // al

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_Pdo = Entry->m_Pdo;
    _a1 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_Pdo->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qid(
      m_Globals,
      5u,
      0xCu,
      0x16u,
      WPP_FxChildList_cpp_Traceguids,
      _a1,
      (__int64)m_Pdo->m_DeviceObject.m_DeviceObject,
      FromQDR);
  }
  v11 = 0;
  v12 = FxDeviceDescriptionEntry::Clone(Entry, FreeListHead);
  v13 = v12;
  if ( v12 )
  {
    m_EvtChildListDeviceReenumerated = this->m_EvtChildListDeviceReenumerated;
    if ( m_EvtChildListDeviceReenumerated )
    {
      v15 = Entry->m_Pdo;
      m_AddressDescription = v12->m_AddressDescription;
      m_ObjectSize = v15->m_ObjectSize;
      v18 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v18 = 0LL;
      v19 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !this->m_ObjectSize )
        v19 = 0LL;
      if ( !m_EvtChildListDeviceReenumerated(
              (WDFCHILDLIST__ *)v19,
              (WDFDEVICE__ *)v18,
              Entry->m_AddressDescription,
              m_AddressDescription) )
      {
        Blink = FreeListHead->Blink;
        if ( Blink->Flink == FreeListHead )
        {
          v13->m_DescriptionLink.Flink = FreeListHead;
          v13->m_DescriptionLink.Blink = Blink;
          Blink->Flink = (_LIST_ENTRY *)v13;
          FreeListHead->Blink = (_LIST_ENTRY *)v13;
          goto LABEL_22;
        }
LABEL_19:
        __fastfail(3u);
      }
    }
    v21 = this->m_Globals;
    if ( v21->FxVerboseOn )
    {
      v22 = Entry->m_Pdo;
      _a2 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v22->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqq(v21, 5u, 0xCu, 0x17u, WPP_FxChildList_cpp_Traceguids, v13, _a2, v22->m_DeviceObject.m_DeviceObject);
    }
    v13->m_DescriptionState = DescriptionPresentNeedsInstantiation;
    v13->m_ModificationState = ModificationUnspecified;
    v24 = this->m_DescriptionListHead.Blink;
    if ( v24->Flink != &this->m_DescriptionListHead )
      goto LABEL_19;
    v13->m_DescriptionLink.Flink = &this->m_DescriptionListHead;
    v13->m_DescriptionLink.Blink = v24;
    v24->Flink = (_LIST_ENTRY *)v13;
    this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)v13;
    if ( !FromQDR )
    {
      Entry->m_DescriptionState = DescriptionNotPresent;
      v11 = 1;
    }
  }
LABEL_22:
  result = v11;
  Entry->m_ModificationState = ModificationUnspecified;
  return result;
}
