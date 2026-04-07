/*
 * XREFs of ??1CFullScreenMagnifier@@EEAA@XZ @ 0x180080884
 * Callers:
 *     ??_ECFullScreenMagnifier@@EEAAPEAXI@Z @ 0x180080910 (--_ECFullScreenMagnifier@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFullScreenMagnifier::~CFullScreenMagnifier(CFullScreenMagnifier *this)
{
  CBaseObject *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CFullScreenMagnifier::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
