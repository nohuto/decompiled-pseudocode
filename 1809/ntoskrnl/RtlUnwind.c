/*
 * XREFs of RtlUnwind @ 0x140137610
 * Callers:
 *     _local_unwind @ 0x140195300 (_local_unwind.c)
 * Callees:
 *     RtlUnwindEx @ 0x14009DE70 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength2 @ 0x1400A1D7C (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1400A1E60 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  unsigned __int64 v8; // r10
  void *v9; // rsp
  PCONTEXT_EX ContextLength; // [rsp+30h] [rbp+0h] BYREF

  RtlGetExtendedContextLength2(0x10000Bu, (PULONG)&ContextLength, 0LL);
  v8 = (unsigned int)ContextLength + 15LL;
  if ( v8 <= (unsigned int)ContextLength )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, 0x10000Bu, &ContextLength, 0LL);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (struct _CONTEXT *)&ContextLength, 0LL);
}
