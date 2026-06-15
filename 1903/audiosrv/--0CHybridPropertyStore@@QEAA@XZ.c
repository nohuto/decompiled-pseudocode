/*
 * XREFs of ??0CHybridPropertyStore@@QEAA@XZ @ 0x18011C688
 * Callers:
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x18011C40C (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

CHybridPropertyStore *__fastcall CHybridPropertyStore::CHybridPropertyStore(CHybridPropertyStore *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPropertyStore>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CHybridPropertyStore::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  return this;
}
