/*
 * XREFs of ??0CVolumeProvider@@QEAA@XZ @ 0x180063A10
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x180056DCC (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

CVolumeProvider *__fastcall CVolumeProvider::CVolumeProvider(CVolumeProvider *this)
{
  CVolumeProvider *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVolumeProvider::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_QWORD *)this + 7) = 0LL;
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return result;
}
