/*
 * XREFs of __scrt_dllmain_exception_filter @ 0x180034760
 * Callers:
 *     dllmain_dispatch @ 0x18003422C (dllmain_dispatch.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x180035060 (__scrt_is_ucrt_dll_in_use.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall _scrt_dllmain_exception_filter(
        __int64 a1,
        int a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, _QWORD, __int64),
        unsigned int ExceptionNum,
        struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() && a2 == 1 )
    a4(a1, 0LL, a3);
  return o__seh_filter_dll_0(ExceptionNum, ExceptionPtr);
}
