/*
 * XREFs of ??1CDisplay@@EEAA@XZ @ 0x18002B884
 * Callers:
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x18002B970 (--_GCDisplay@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18002B90C (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18002B930 (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::~CDisplay(CDisplay *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CDisplay::`vftable';
  CDisplay::ReleaseHwRenderTarget(this);
  CDisplay::ReleaseDDAHwRenderTarget(this);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
