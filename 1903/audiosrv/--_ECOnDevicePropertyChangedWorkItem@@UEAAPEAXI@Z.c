/*
 * XREFs of ??_ECOnDevicePropertyChangedWorkItem@@UEAAPEAXI@Z @ 0x1800263A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

COnDevicePropertyChangedWorkItem *__fastcall COnDevicePropertyChangedWorkItem::`vector deleting destructor'(
        COnDevicePropertyChangedWorkItem *this,
        char a2)
{
  volatile signed __int32 *v4; // rdx

  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
