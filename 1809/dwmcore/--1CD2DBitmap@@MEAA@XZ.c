/*
 * XREFs of ??1CD2DBitmap@@MEAA@XZ @ 0x180097E0C
 * Callers:
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x180094590 (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 *     ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x1800972F0 (--_GCD2DBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CD2DBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 13) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 14) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 15) = &CD2DBitmap::`vftable'{for `IBitmapUnlock'};
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CD2DResource::~CD2DResource(this);
}
