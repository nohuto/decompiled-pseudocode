/*
 * XREFs of RtlRaiseException @ 0x1402EDA30
 * Callers:
 *     RaiseException @ 0x140199FC0 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x140278C6C (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x140278CF8 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x140278DE4 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x1402F08F4 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14009DB60 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x1400A0E80 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x1400A1D7C (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1400A1E60 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x1401377A0 (RtlVirtualUnwind.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401BAED0 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1401C5790 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r8
  void *v4; // rsp
  void *v5; // rsp
  NTSTATUS v6; // esi
  struct _RUNTIME_FUNCTION *v7; // rax
  ULONG ContextLength[2]; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp+8h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp+10h] BYREF
  void *v11; // [rsp+138h] [rbp+F8h]

  RtlGetExtendedContextLength2(0x10000Bu, ContextLength, 0LL);
  v2 = ContextLength[0] + 15LL;
  if ( v2 <= ContextLength[0] )
    v2 = 0xFFFFFFFFFFFFFF0LL;
  v3 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = alloca(v3);
  v5 = alloca(v3);
  v6 = RtlInitializeExtendedContext2((PCONTEXT)ContextLength, 0x10000Bu, (PCONTEXT_EX *)ContextLength, 0LL);
  RtlpCaptureContext2();
  v7 = RtlLookupFunctionEntry((DWORD64)v11, (PDWORD64)ContextLength, 0LL);
  if ( !v7 )
LABEL_6:
    RtlRaiseStatus(v6);
  RtlVirtualUnwind(
    0,
    *(DWORD64 *)ContextLength,
    (DWORD64)v11,
    v7,
    (struct _CONTEXT *)ContextLength,
    &HandlerData,
    &EstablisherFrame,
    0LL);
  ExceptionRecord->ExceptionAddress = v11;
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)ContextLength) )
  {
    v6 = ZwRaiseException(ExceptionRecord, (PCONTEXT)ContextLength, 0);
    goto LABEL_6;
  }
}
