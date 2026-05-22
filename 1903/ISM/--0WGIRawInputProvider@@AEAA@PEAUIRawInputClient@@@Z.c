/*
 * XREFs of ??0WGIRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x180027290
 * Callers:
 *     ?Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180026CC0 (-Create@WGIRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

WGIRawInputProvider *__fastcall WGIRawInputProvider::WGIRawInputProvider(
        WGIRawInputProvider *this,
        struct IRawInputClient *a2)
{
  __int64 *v3; // rcx

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &WGIRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &WGIRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &WGIRawInputProvider::`vftable'{for `RefCountedObject'};
  v3 = (__int64 *)((char *)this + 32);
  *v3 = (__int64)a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v3);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = -1LL;
  *((_QWORD *)this + 7) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 3, 0, 0);
  *((_QWORD *)this + 20) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 9, 0, 0);
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = 0;
  *((_BYTE *)this + 400) = 1;
  memset_0((char *)this + 168, 0, 0xC0uLL);
  return this;
}
