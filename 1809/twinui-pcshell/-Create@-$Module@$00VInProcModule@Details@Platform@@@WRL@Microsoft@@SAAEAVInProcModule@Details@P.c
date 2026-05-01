/*
 * XREFs of ?Create@?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@SAAEAVInProcModule@Details@Platform@@XZ @ 0x180088204
 * Callers:
 *     Platform::Details::_dynamic_initializer_for__module___ @ 0x180001010 (Platform--Details--_dynamic_initializer_for__module___.c)
 * Callees:
 *     atexit @ 0x1800848AC (atexit.c)
 */

void *Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create()
{
  if ( (`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::moduleSingleton;
    `Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::`local static guard' |= 1u;
    `Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::moduleSingleton = &Platform::Details::InProcModule::`vftable'{for `Microsoft::WRL::Module<5,Platform::Details::InProcModule>'};
    qword_18050F070 = (__int64)&Platform::Details::InProcModule::`vftable'{for `__abi_Module'};
    __abi_module = (struct __abi_Module *)&qword_18050F070;
    atexit(`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton'');
  }
  return &`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::moduleSingleton;
}
