/*
 * XREFs of RtlUnwind @ 0x180003640
 * Callers:
 *     _local_unwind @ 0x180090C90 (_local_unwind.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x180003420 (RtlGetExtendedContextLength2.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x180008450 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A5230 (_alloca_probe.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  ULONG64 v8; // rsi
  int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  PCONTEXT_EX ContextLength; // [rsp+30h] [rbp+0h] BYREF

  v8 = -(__int64)((MEMORY[0x7FFE0708] & 0x800) != 0LL) & 0x800;
  v9 = (MEMORY[0x7FFE0708] & 0x800) != 0LL ? 0x40 : 0;
  RtlGetExtendedContextLength2(v9 + 1048587, (PULONG)&ContextLength, v8);
  v10 = (unsigned int)ContextLength + 15LL;
  if ( v10 <= (unsigned int)ContextLength )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = alloca(v11);
  v13 = alloca(v11);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v9 + 1048587, &ContextLength, v8);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextLength, 0LL);
}
