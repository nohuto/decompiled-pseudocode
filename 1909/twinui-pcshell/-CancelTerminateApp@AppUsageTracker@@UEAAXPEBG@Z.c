/*
 * XREFs of ?CancelTerminateApp@AppUsageTracker@@UEAAXPEBG@Z @ 0x1800B4B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppUsageTracker::CancelTerminateApp(AppUsageTracker *this, const unsigned __int16 *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
  (*(void (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)this + 11) + 64LL))(
    *((_QWORD *)this + 11),
    a2);
}
