/*
 * XREFs of ??_GCMMNotificationDelegator@@UEAAPEAXI@Z @ 0x1800E2690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800E201C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@D.c)
 */

// Hidden C++ exception states: #wind=1
CMMNotificationDelegator *__fastcall CMMNotificationDelegator::`scalar deleting destructor'(
        CMMNotificationDelegator *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CMMNotificationDelegator::`vftable';
  *((_QWORD *)this + 1) = &CMMNotificationDelegator::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &CMMNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&g_DeviceEnumerator + 56LL))(*(_QWORD *)&g_DeviceEnumerator);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
