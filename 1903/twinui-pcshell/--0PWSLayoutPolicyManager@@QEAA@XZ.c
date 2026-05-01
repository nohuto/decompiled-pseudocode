/*
 * XREFs of ??0PWSLayoutPolicyManager@@QEAA@XZ @ 0x1801E6164
 * Callers:
 *     ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E5FE0 (--$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

PWSLayoutPolicyManager *__fastcall PWSLayoutPolicyManager::PWSLayoutPolicyManager(PWSLayoutPolicyManager *this)
{
  PWSLayoutPolicyManager *result; // rax

  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IPenWorkspaceLayoutPolicyManager>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &PWSLayoutPolicyManager::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  VariantInit((VARIANTARG *)((char *)this + 80));
  *((_QWORD *)this + 13) = 0LL;
  result = this;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  return result;
}
