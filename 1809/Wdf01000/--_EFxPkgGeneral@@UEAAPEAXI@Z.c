/*
 * XREFs of ??_EFxPkgGeneral@@UEAAPEAXI@Z @ 0x1C008FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0009F30 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxPkgGeneral *__fastcall FxPkgGeneral::`vector deleting destructor'(FxPkgGeneral *this, char a2, unsigned int a3)
{
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // rdi
  FX_POOL_TRACKER *Flink; // rcx
  _LIST_ENTRY *v7; // rax
  FxPkgGeneral *v8; // rcx

  this->__vftable = (FxPkgGeneral_vtbl *)FxPkgGeneral::`vftable';
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  while ( 1 )
  {
    Flink = (FX_POOL_TRACKER *)p_m_FileObjectInfoHeadList->Flink;
    if ( p_m_FileObjectInfoHeadList->Flink == p_m_FileObjectInfoHeadList )
      break;
    if ( Flink->Link.Blink != p_m_FileObjectInfoHeadList
      || (v7 = Flink->Link.Flink, (FX_POOL_TRACKER *)Flink->Link.Flink->Blink != Flink) )
    {
      __fastfail(3u);
    }
    p_m_FileObjectInfoHeadList->Flink = v7;
    v7->Blink = p_m_FileObjectInfoHeadList;
    Flink->Link.Blink = &Flink->Link;
    Flink->Link.Flink = &Flink->Link;
    FxPoolFree(Flink);
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    v8 = (FxPkgGeneral *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v8 = this;
    FxPoolFree((FX_POOL_TRACKER *)v8);
  }
  return this;
}
