/*
 * XREFs of ??1MPCTarget@@UEAA@XZ @ 0x18000B874
 * Callers:
 *     ??_GMPCFocusTarget@@UEAAPEAXI@Z @ 0x18000AEE0 (--_GMPCFocusTarget@@UEAAPEAXI@Z.c)
 *     ??_EMPCTarget@@UEAAPEAXI@Z @ 0x18000B828 (--_EMPCTarget@@UEAAPEAXI@Z.c)
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$0 @ 0x18012E202 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$0.c)
 * Callees:
 *     ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x18000B900 (-RemoveFromRouter@MPCTarget@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCTarget::~MPCTarget(MPCTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &MPCTarget::`vftable'{for `IMPCTarget'};
  *((_QWORD *)this + 1) = &MPCTarget::`vftable'{for `RefCountedObject'};
  MPCTarget::RemoveFromRouter(this);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
