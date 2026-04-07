/*
 * XREFs of ??1CFullScreenMagnifier@@EEAA@XZ @ 0x18007A06C
 * Callers:
 *     ??_ECFullScreenMagnifier@@EEAAPEAXI@Z @ 0x18007A100 (--_ECFullScreenMagnifier@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFullScreenMagnifier::~CFullScreenMagnifier(CFullScreenMagnifier *this)
{
  CBaseObject *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CFullScreenMagnifier::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
