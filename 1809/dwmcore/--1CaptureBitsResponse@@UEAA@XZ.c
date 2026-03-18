/*
 * XREFs of ??1CaptureBitsResponse@@UEAA@XZ @ 0x180071850
 * Callers:
 *     ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180071810 (--_GCaptureBitsResponse@@UEAAPEAXI@Z.c)
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18016136C (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x180179C08 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CaptureBitsResponse::~CaptureBitsResponse(CaptureBitsResponse *this)
{
  __int64 v2; // rcx
  const void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  CMILRefCountBase *v6; // rcx
  CMILRefCountBase *v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (const void *)*((_QWORD *)this + 15);
  if ( v3 )
    UnmapViewOfFile(v3);
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (CMILRefCountBase *)*((_QWORD *)this + 8);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  v7 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v7 )
    CMILRefCountBase::Release(v7);
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *(_QWORD *)this = &CResponseItem::`vftable';
}
