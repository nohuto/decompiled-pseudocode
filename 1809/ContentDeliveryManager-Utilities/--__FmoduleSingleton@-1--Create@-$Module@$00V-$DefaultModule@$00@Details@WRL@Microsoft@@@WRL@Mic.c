/*
 * XREFs of ??__FmoduleSingleton@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x1800D1930
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x18001EB48 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

void __fastcall `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton''(
        Microsoft::WRL::Details *a1,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3)
{
  LOBYTE(a3) = 1;
  `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton = (__int64)&Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  Microsoft::WRL::Details::TerminateMap(a1, a2, a3);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
}
