/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x180027F30
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180027EF0 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x180028244 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x180040280 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180045D24 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowNode::~CWindowNode(struct CResource **this)
{
  struct CResource *v2; // rcx
  __int64 i; // rbp
  struct CResource *v4; // rdx
  __int64 j; // rbp
  struct CResource *v6; // rcx
  struct CResource *v7; // rcx
  struct CResource *v8; // rcx
  struct CResource *v9; // rcx
  struct CResource *v10; // rbx
  __int64 v11; // rcx
  struct CResource *v12; // rbx
  __int64 v13; // rcx
  struct CResource *v14; // rbx

  *this = (struct CResource *)&CWindowNode::`vftable';
  CWindowNode::Detach((CWindowNode *)this);
  v2 = this[93];
  if ( v2 )
  {
    v10 = (struct CResource *)(*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v2 + 152LL))(v2);
    (*(void (__fastcall **)(struct CResource *, struct CResource **))(*(_QWORD *)this[93] + 168LL))(this[93], this);
    CResource::UnRegisterNotifierInternal((CResource *)this, v10);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 194); i = (unsigned int)(i + 1) )
  {
    v11 = *((_QWORD *)this[94] + i);
    v12 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 152LL))(v11);
    v13 = *((_QWORD *)this[94] + i);
    (*(void (__fastcall **)(__int64, struct CResource **))(*(_QWORD *)v13 + 168LL))(v13, this);
    CResource::UnRegisterNotifierInternal((CResource *)this, v12);
  }
  *((_DWORD *)this + 194) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 94, 8LL);
  v4 = this[111];
  if ( v4 )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, v4);
    this[111] = 0LL;
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 230); j = (unsigned int)(j + 1) )
  {
    v14 = this[112];
    CResource::UnRegisterNotifierInternal((CResource *)this, *((struct CResource **)v14 + j));
    *((_QWORD *)v14 + j) = 0LL;
  }
  *((_DWORD *)this + 230) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 112, 8LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[100]);
  this[100] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[110]);
  this[110] = 0LL;
  v6 = this[116];
  if ( v6 )
    (**(void (__fastcall ***)(struct CResource *, __int64))v6)(v6, 1LL);
  v7 = this[121];
  if ( v7 )
  {
    DeleteObject(v7);
    this[121] = 0LL;
  }
  ReleaseInterface<CProcessAttribution>(this + 82);
  v8 = this[122];
  if ( v8 )
  {
    DeleteObject(v8);
    this[122] = 0LL;
  }
  v9 = this[123];
  if ( v9 )
  {
    DeleteObject(v9);
    this[123] = 0LL;
  }
  CDwmMetaRegion::ClearMoveData((CDwmMetaRegion *)(this + 122));
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 112);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 94);
  CVisual::~CVisual((CVisual *)this);
}
