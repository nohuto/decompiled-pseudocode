/*
 * XREFs of ??0ContextualProcessorBuffer@@IEAA@PEAUInputContext@@PEAUIInputTarget@@PEAUIInputBuffer@@@Z @ 0x1800F9C64
 * Callers:
 *     ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800F9FBC (-Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::ContextualProcessorBuffer(
        ContextualProcessorBuffer *this,
        struct InputContext *a2,
        struct IInputTarget *a3,
        struct IInputBuffer *a4)
{
  __int64 *v6; // rcx

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &ContextualProcessorBuffer::`vftable'{for `IContextualProcessorBufferTarget'};
  *((_QWORD *)this + 3) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = a2;
  v6 = (__int64 *)((char *)this + 96);
  *v6 = (__int64)a3;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v6);
  *((_QWORD *)this + 13) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IInputBuffer *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
