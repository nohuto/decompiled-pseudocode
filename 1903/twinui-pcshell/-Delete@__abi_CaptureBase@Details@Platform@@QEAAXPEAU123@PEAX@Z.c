/*
 * XREFs of ?Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z @ 0x1802B4EF8
 * Callers:
 *     ??1__abi_CapturePtr@Details@Platform@@QEAA@XZ @ 0x1802B45BC (--1__abi_CapturePtr@Details@Platform@@QEAA@XZ.c)
 *     ??3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z @ 0x1802B45E4 (--3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z.c)
 *     ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x1802B4AF4 (--_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::__abi_CaptureBase::Delete(
        Platform::Details::__abi_CaptureBase *this,
        struct Platform::Details::__abi_CaptureBase *a2,
        struct Platform::Details::__abi_CaptureBase *a3)
{
  (**(void (__fastcall ***)(struct Platform::Details::__abi_CaptureBase *, _QWORD))a2)(a2, 0LL);
  if ( a2 != a3 )
    Platform::Details::Heap::Free(a2);
}
