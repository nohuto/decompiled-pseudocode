/*
 * XREFs of ??1CContainerVectorShape@@MEAA@XZ @ 0x1801D394C
 * Callers:
 *     ??_ECShapeTree@@UEAAPEAXI@Z @ 0x18019D650 (--_ECShapeTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800BBEBC (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CContainerVectorShape::~CContainerVectorShape(CContainerVectorShape *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CContainerVectorShape::`vftable';
  CResource::UnRegisterNNotifiersInternal(
    this,
    *((struct CResource ***)this + 11),
    (unsigned int)((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3));
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 13) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
  CResource::~CResource(this);
}
