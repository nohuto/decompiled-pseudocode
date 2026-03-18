/*
 * XREFs of ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C00C68F8
 * Callers:
 *     ??_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z @ 0x1C0001230 (--_EDXGDISPLAYMANAGEROBJECT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C0001274 (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00012FC (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C00051A8 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C001ABCC (-Clear@-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXG.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::~DXGDISPLAYMANAGEROBJECT(DXGDISPLAYMANAGEROBJECT *this, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rdx
  __int64 v5; // r8
  DXGFASTMUTEX *v6; // rcx
  __int64 v7; // rax

  v2 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &DXGDISPLAYMANAGEROBJECT::`vftable';
  if ( !v2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 101LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_QWORD *)this + 12) = &DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::`vftable';
  DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear(
    (__int64)this + 96,
    a2);
  Set<DXGTARGETENTRY>::~Set<DXGTARGETENTRY>((_QWORD *)this + 5);
  v6 = (DXGFASTMUTEX *)*((_QWORD *)this + 2);
  if ( v6 )
    DXGFASTMUTEX::`scalar deleting destructor'(v6);
  ReferenceCounted::~ReferenceCounted(this, v4, v5);
}
