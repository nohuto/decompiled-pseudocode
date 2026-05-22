/*
 * XREFs of ??_EMagnifierClientProxy@@UEAAPEAXI@Z @ 0x18006F710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

MagnifierClientProxy *__fastcall MagnifierClientProxy::`vector deleting destructor'(
        MagnifierClientProxy *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx

  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)this + 7);
  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v4 )
    (**v4)(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
