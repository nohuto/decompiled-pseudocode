/*
 * XREFs of ??1MPCTarget@@UEAA@XZ @ 0x180057274
 * Callers:
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$0 @ 0x180056AB5 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$0.c)
 *     ??_GMPCFocusTarget@@UEAAPEAXI@Z @ 0x180056B0C (--_GMPCFocusTarget@@UEAAPEAXI@Z.c)
 *     ??_EMPCTarget@@UEAAPEAXI@Z @ 0x1800572E4 (--_EMPCTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180021D94 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveFromRouter@MPCTarget@@MEAAXXZ @ 0x180057B90 (-RemoveFromRouter@MPCTarget@@MEAAXXZ.c)
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
