/*
 * XREFs of ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18002FF7C
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x18002FF38 (--_ECAnimatedTransitionVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180005340 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimatedTransitionVisual::~CAnimatedTransitionVisual(CAnimatedTransitionVisual *this, unsigned int a2)
{
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CAnimationResource **v22; // rdi
  __int64 v23; // rsi

  *(_QWORD *)this = &CAnimatedTransitionVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 1) = &CAnimatedTransitionVisual::`vftable'{for `CRenderDataVisual'};
  v3 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 73);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 74);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 76);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 85);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 86);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CBaseObject *)*((_QWORD *)this + 87);
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = (CBaseObject *)*((_QWORD *)this + 88);
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = (CBaseObject *)*((_QWORD *)this + 84);
  if ( v13 )
    CBaseObject::Release(v13);
  v14 = (CBaseObject *)*((_QWORD *)this + 89);
  if ( v14 )
    CBaseObject::Release(v14);
  v15 = (CBaseObject *)*((_QWORD *)this + 90);
  if ( v15 )
    CBaseObject::Release(v15);
  v16 = (CBaseObject *)*((_QWORD *)this + 91);
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = (CBaseObject *)*((_QWORD *)this + 75);
  if ( v17 )
    CBaseObject::Release(v17);
  v18 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v18 )
    CBaseObject::Release(v18);
  v19 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v19 )
    CBaseObject::Release(v19);
  v20 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v20 )
    CBaseObject::Release(v20);
  v21 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v21 )
    CBaseObject::Release(v21);
  v22 = (CAnimationResource **)((char *)this + 616);
  v23 = 7LL;
  do
  {
    if ( *v22 )
      CAnimationResource::Release(*v22, a2);
    ++v22;
    --v23;
  }
  while ( v23 );
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 43));
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 44));
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 45));
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this + 1);
}
