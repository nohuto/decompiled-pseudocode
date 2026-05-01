/*
 * XREFs of ??__FmoduleSingleton@?1??Create@?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@SAAEAVInProcModule@Details@Platform@@XZ@YAXXZ @ 0x1800C6F80
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z @ 0x18008B090 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z.c)
 */

void __fastcall `Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton''(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3)
{
  __abi_module = 0LL;
  qword_180599170 = (__int64)&Platform::Details::InProcModule::`vftable'{for `__abi_Module'};
  LOBYTE(a3) = 1;
  `Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::moduleSingleton = &Microsoft::WRL::Module<1,Platform::Details::InProcModule>::`vftable';
  Microsoft::WRL::Details::TerminateMap(
    (Microsoft::WRL::Details *)&`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::moduleSingleton,
    0LL,
    a3);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
}
