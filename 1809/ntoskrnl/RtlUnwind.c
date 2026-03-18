/*
 * XREFs of RtlUnwind @ 0x1401374F0
 * Callers:
 *     _local_unwind @ 0x1401951A0 (_local_unwind.c)
 * Callees:
 *     RtlUnwindEx @ 0x14009DF30 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength2 @ 0x1400A1E3C (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1400A1F20 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5DA0 (_alloca_probe.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  unsigned __int64 v8; // r10
  void *v9; // rsp
  __int64 ContextRecord; // [rsp+30h] [rbp+0h] BYREF

  RtlGetExtendedContextLength2(1048587LL, &ContextRecord);
  v8 = (unsigned int)ContextRecord + 15LL;
  if ( v8 <= (unsigned int)ContextRecord )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((__int64)&ContextRecord, 0x10000Bu, &ContextRecord, 0LL);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (struct _CONTEXT *)&ContextRecord, 0LL);
}
