/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x180094640
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180094600 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x180028D00 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x180094968 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180095F8C (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowNode::~CWindowNode(CMILRefCountBase **this)
{
  CMILRefCountBase *v2; // rcx
  unsigned int i; // ebp
  struct CResource *v4; // rdx
  unsigned int j; // ebp
  CMILRefCountBase *v6; // rcx
  CMILRefCountBase *v7; // rcx
  CMILRefCountBase *v8; // rcx
  CMILRefCountBase *v9; // rcx
  struct CResource *v10; // rbx
  __int64 v11; // rcx
  struct CResource *v12; // rbx
  __int64 v13; // rcx
  CMILRefCountBase *v14; // rbx
  __int64 v15; // rdi

  *this = (CMILRefCountBase *)&CWindowNode::`vftable';
  CWindowNode::Detach((CWindowNode *)this);
  v2 = this[95];
  if ( v2 )
  {
    v10 = (struct CResource *)(*(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v2 + 152LL))(v2);
    (*(void (__fastcall **)(CMILRefCountBase *, CMILRefCountBase **))(*(_QWORD *)this[95] + 168LL))(this[95], this);
    CResource::UnRegisterNotifierInternal((CResource *)this, v10);
  }
  for ( i = 0; i < *((_DWORD *)this + 198); ++i )
  {
    v11 = *((_QWORD *)this[96] + i);
    v12 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 152LL))(v11);
    v13 = *((_QWORD *)this[96] + i);
    (*(void (__fastcall **)(__int64, CMILRefCountBase **))(*(_QWORD *)v13 + 168LL))(v13, this);
    CResource::UnRegisterNotifierInternal((CResource *)this, v12);
  }
  *((_DWORD *)this + 198) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 96), 8u);
  v4 = this[113];
  if ( v4 )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, v4);
    this[113] = 0LL;
  }
  for ( j = 0; j < *((_DWORD *)this + 234); *((_QWORD *)v14 + v15) = 0LL )
  {
    v14 = this[114];
    v15 = j;
    CResource::UnRegisterNotifierInternal((CResource *)this, *((struct CResource **)v14 + j++));
  }
  *((_DWORD *)this + 234) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 114), 8u);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[102]);
  this[102] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[112]);
  this[112] = 0LL;
  v6 = this[118];
  if ( v6 )
    (**(void (__fastcall ***)(CMILRefCountBase *, __int64))v6)(v6, 1LL);
  if ( *((_BYTE *)this + 957) )
    --*((_DWORD *)this[2] + 66);
  v7 = this[123];
  if ( v7 )
  {
    DeleteObject(v7);
    this[123] = 0LL;
  }
  ReleaseInterface<CConnection>(this + 84);
  v8 = this[124];
  if ( v8 )
  {
    DeleteObject(v8);
    this[124] = 0LL;
  }
  v9 = this[125];
  if ( v9 )
  {
    DeleteObject(v9);
    this[125] = 0LL;
  }
  CDwmMetaRegion::ClearMoveData((CDwmMetaRegion *)(this + 124));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 114);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 96);
  CVisual::~CVisual((CVisual *)this);
}
