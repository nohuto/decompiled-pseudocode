/*
 * XREFs of ??_GInProcModule@Details@Platform@@UEAAPEAXI@Z @ 0x18008DB50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z @ 0x18008DC70 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z.c)
 */

Platform::Details::InProcModule *__fastcall Platform::Details::InProcModule::`scalar deleting destructor'(
        Platform::Details::InProcModule *this,
        char a2,
        const wchar_t *a3,
        bool a4)
{
  *((_QWORD *)this + 1) = &Platform::Details::InProcModule::`vftable'{for `__abi_Module'};
  LOBYTE(a3) = 1;
  __abi_module = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Module<1,Platform::Details::InProcModule>::`vftable';
  Microsoft::WRL::Details::TerminateMap(this, 0LL, a3, a4);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
