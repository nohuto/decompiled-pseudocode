/*
 * XREFs of ??1MPCTarget@@UEAA@XZ @ 0x180057514
 * Callers:
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$0 @ 0x180056D55 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$0.c)
 *     ??_GMPCFocusTarget@@UEAAPEAXI@Z @ 0x180056DAC (--_GMPCFocusTarget@@UEAAPEAXI@Z.c)
 *     ??_EMPCTarget@@UEAAPEAXI@Z @ 0x180057584 (--_EMPCTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180022274 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x180057E30 (-RemoveFromRouter@MPCTarget@@MEAAXXZ.c)
 */

void __fastcall MPCTarget::~MPCTarget(MPCTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &MPCTarget::`vftable'{for `IMPCTarget'};
  *((_QWORD *)this + 1) = &MPCTarget::`vftable'{for `RefCountedObject'};
  MPCTarget::RemoveFromRouter(this);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
