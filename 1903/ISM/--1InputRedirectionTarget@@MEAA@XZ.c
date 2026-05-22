/*
 * XREFs of ??1InputRedirectionTarget@@MEAA@XZ @ 0x18010741C
 * Callers:
 *     ??_GInputRedirectionTarget@@MEAAPEAXI@Z @ 0x1801074BC (--_GInputRedirectionTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputRedirectionTarget::~InputRedirectionTarget(InputRedirectionTarget *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &InputRedirectionTarget::`vftable'{for `IInputRedirectionTarget'};
  *((_QWORD *)this + 1) = &InputRedirectionTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
  v2 = (__int64 *)((char *)this + 32);
  if ( *((_QWORD *)this + 5) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 152LL))(*v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v2);
  v3 = *((_QWORD *)this + 14);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v3);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v2);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
