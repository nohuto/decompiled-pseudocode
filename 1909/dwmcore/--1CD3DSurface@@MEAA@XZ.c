/*
 * XREFs of ??1CD3DSurface@@MEAA@XZ @ 0x180047954
 * Callers:
 *     ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x180047A00 (--_ECD3DSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DSurface::~CD3DSurface(CD3DSurface *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CD3DSurface::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CD3DSurface::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 15) = &CD3DSurface::`vftable';
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 24);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 25);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 28);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 72);
  *(_QWORD *)this = &CMILPoolResource::`vftable';
}
