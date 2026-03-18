/*
 * XREFs of ??1CWarpLockSubresource@@MEAA@XZ @ 0x18002306C
 * Callers:
 *     ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x180023030 (--_GCWarpLockSubresource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x180023144 (-Unlock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWarpLockSubresource::~CWarpLockSubresource(CWarpLockSubresource *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 6) == 0LL;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  if ( !v1 )
    CWarpLockSubresource::Unlock(this);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    CMILPoolResource::Release((CMILPoolResource *)(v5 + 496));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
