/*
 * XREFs of RtlUnwind @ 0x14013B070
 * Callers:
 *     _local_unwind @ 0x1401A0030 (_local_unwind.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x140017148 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14001722C (RtlInitializeExtendedContext2.c)
 *     RtlUnwindEx @ 0x140019C30 (RtlUnwindEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
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
