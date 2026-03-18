/*
 * XREFs of ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C0001180
 * Callers:
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C00010E0 (imp_WdfFdoRetrieveNextStaticChild.c)
 * Callees:
 *     ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x1C003CD74 (-MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z.c)
 */

WDFDEVICE__ *__fastcall FxChildList::GetNextStaticDevice(
        FxChildList *this,
        WDFDEVICE__ *PreviousDevice,
        unsigned int Flags)
{
  unsigned __int64 *p_m_ListLock; // r14
  bool v6; // di
  unsigned __int64 v8; // rbx
  KIRQL v9; // r12
  char v10; // r10
  _LIST_ENTRY *p_m_DescriptionListHead; // r11
  _LIST_ENTRY *v12; // r9
  _LIST_ENTRY *v14; // rdi
  _LIST_ENTRY *v15; // rbx
  __int16 v16; // ax
  _LIST_ENTRY *v17; // rcx
  __int16 v18; // ax
  WDFDEVICE__ *v19; // rcx
  _LIST_ENTRY *i; // rdx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rbx
  __int16 v23; // dx
  _LIST_ENTRY *v24; // rcx
  __int16 v25; // ax
  WDFDEVICE__ *v26; // rcx

  p_m_ListLock = &this->m_ListLock;
  v6 = PreviousDevice == 0LL;
  v8 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
    goto $Done;
  v10 = v6;
  if ( (Flags & 1) == 0
    || (p_m_DescriptionListHead = &this->m_DescriptionListHead,
        v12 = this->m_DescriptionListHead.Flink,
        v12 == &this->m_DescriptionListHead) )
  {
LABEL_4:
    if ( (Flags & 4) != 0 )
    {
      for ( i = this->m_ModificationListHead.Flink; i != &this->m_ModificationListHead; i = i->Flink )
      {
        if ( !BYTE2(i[2].Blink) )
        {
          Flink = i[-1].Flink;
          if ( v10 && LODWORD(i[1].Flink) == 1 )
          {
            Blink = Flink->Blink;
            v23 = WORD1(Blink->Blink);
            v8 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !v23 )
              v8 = 0LL;
            goto $Done;
          }
          v24 = Flink->Blink;
          v25 = WORD1(v24->Blink);
          v26 = (WDFDEVICE__ *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v25 )
            v26 = 0LL;
          if ( v26 == PreviousDevice )
            v10 = 1;
        }
      }
    }
    goto $Done;
  }
  v10 = v6;
  while ( BYTE2(v12[5].Flink) )
  {
LABEL_18:
    v12 = v12->Flink;
    if ( v12 == p_m_DescriptionListHead )
      goto LABEL_4;
  }
  v14 = v12[1].Blink;
  if ( !v10 || !FxDeviceDescriptionEntry::MatchStateToFlags((FxDeviceDescriptionEntry *)v12, Flags) )
  {
    v17 = v14->Blink;
    v18 = WORD1(v17->Blink);
    v19 = (WDFDEVICE__ *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v18 )
      v19 = 0LL;
    if ( v19 == PreviousDevice )
      v10 = 1;
    goto LABEL_18;
  }
  v15 = v14->Blink;
  v16 = WORD1(v15->Blink);
  v8 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v16 )
    v8 = 0LL;
  if ( !v8 )
    goto LABEL_4;
$Done:
  KeReleaseSpinLock(p_m_ListLock, v9);
  return (WDFDEVICE__ *)v8;
}
