/*
 * XREFs of ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x1800043C4
 * Callers:
 *     CreateSystemInputHost @ 0x180004250 (CreateSystemInputHost.c)
 * Callees:
 *     TraceLoggingRegister @ 0x1800010A0 (TraceLoggingRegister.c)
 *     ??1?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA@XZ @ 0x180004E24 (--1-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
OneCoreUAPInputHost *__fastcall OneCoreUAPInputHost::OneCoreUAPInputHost(OneCoreUAPInputHost *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int128 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &OneCoreUAPInputHost::`vftable'{for `ISystemInputHost'};
  *((_QWORD *)this + 1) = &OneCoreUAPInputHost::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &OneCoreUAPInputHost::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 8) = RoInitialize(1LL);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  *((_BYTE *)this + 80) = 1;
  std::vector<InputProvider>::~vector<InputProvider>(&v5);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  TraceLoggingRegister((TraceLoggingHProvider)&hProvider);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return this;
}
