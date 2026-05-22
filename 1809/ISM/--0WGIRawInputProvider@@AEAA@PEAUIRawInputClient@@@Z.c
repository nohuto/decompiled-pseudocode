/*
 * XREFs of ??0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18006A994
 * Callers:
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006ADD0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

WGIRawInputProvider *__fastcall WGIRawInputProvider::WGIRawInputProvider(
        WGIRawInputProvider *this,
        struct IRawInputClient *a2)
{
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &WGIRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &WGIRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &WGIRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = -1LL;
  *((_QWORD *)this + 6) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 112), 0, 0);
  *((_QWORD *)this + 19) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 352), 0, 0);
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 100) = 0;
  *((_BYTE *)this + 392) = 1;
  memset_0((char *)this + 160, 0, 0xC0uLL);
  return this;
}
