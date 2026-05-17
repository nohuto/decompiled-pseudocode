/*
 * XREFs of RtlUnwind @ 0x18001AD60
 * Callers:
 *     _local_unwind @ 0x18008D570 (_local_unwind.c)
 * Callees:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x18001ECD0 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     __chkstk @ 0x1800A1730 (__chkstk.c)
 */

void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __int64 v8; // rsi
  int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  unsigned int ContextRecord; // [rsp+30h] [rbp+0h] BYREF

  v8 = -(__int64)((MEMORY[0x7FFE0708] & 0x800) != 0LL) & 0x800;
  v9 = (MEMORY[0x7FFE0708] & 0x800) != 0LL ? 0x40 : 0;
  RtlGetExtendedContextLength2((unsigned int)(v9 + 1048587), &ContextRecord, v8);
  v10 = ContextRecord + 15LL;
  if ( v10 <= ContextRecord )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = alloca(v11);
  v13 = alloca(v11);
  RtlInitializeExtendedContext2(&ContextRecord, (unsigned int)(v9 + 1048587), &ContextRecord, v8);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextRecord, 0LL);
}
