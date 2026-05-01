/*
 * XREFs of ??0CPrivilegedArrangementOperations@@QEAA@XZ @ 0x1801E986C
 * Callers:
 *     ??$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedArrangementOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1801E8E60 (--$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micros.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

CPrivilegedArrangementOperations *__fastcall CPrivilegedArrangementOperations::CPrivilegedArrangementOperations(
        CPrivilegedArrangementOperations *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((CPrivilegedArrangementOperations *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedArrangementOperations,Microsoft::WRL::FtmBase>::`vftable'{for `IPrivilegedArrangementOperations'};
  *v2 = &CPrivilegedArrangementOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &CPrivilegedArrangementOperations::`vftable'{for `IPrivilegedArrangementOperations'};
  *v2 = &CPrivilegedArrangementOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
