/*
 * XREFs of ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C003AD4C
 * Callers:
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C003B370 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C003D448 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 * Callees:
 *     memmove @ 0x1C001BE80 (memmove.c)
 */

void __fastcall FxChildList::CopyId(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Dest,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Source)
{
  void (__fastcall *m_EvtIdentificationDescriptionCopy)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int64 v5; // rcx

  m_EvtIdentificationDescriptionCopy = this->m_EvtIdentificationDescriptionCopy;
  if ( m_EvtIdentificationDescriptionCopy )
  {
    m_ObjectSize = this->m_ObjectSize;
    v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v5 = 0LL;
    m_EvtIdentificationDescriptionCopy((WDFCHILDLIST__ *)v5, Source, Dest);
  }
  else
  {
    memmove(Dest, Source, this->m_IdentificationDescriptionSize);
  }
}
