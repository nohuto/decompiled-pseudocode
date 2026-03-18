/*
 * XREFs of ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0040B20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009610 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxWmiIrpHandler *__fastcall FxWmiIrpHandler::`scalar deleting destructor'(
        FxWmiIrpHandler *this,
        char a2,
        unsigned int a3)
{
  struct _IO_WORKITEM *m_WorkItem; // rcx
  FxWmiIrpHandler *v6; // rcx

  this->__vftable = (FxWmiIrpHandler_vtbl *)FxWmiIrpHandler::`vftable';
  m_WorkItem = this->m_WorkItem;
  if ( m_WorkItem )
    IoFreeWorkItem(m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v6 = (FxWmiIrpHandler *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v6 = this;
    FxPoolFree((FX_POOL_TRACKER *)v6);
  }
  return this;
}
