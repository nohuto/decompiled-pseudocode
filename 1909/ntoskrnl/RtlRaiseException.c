/*
 * XREFs of RtlRaiseException @ 0x14030BA70
 * Callers:
 *     RaiseException @ 0x1401A4DE0 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x14028CAB0 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x14028CB3C (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x14028CC28 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x14030ECE4 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     RtlGetExtendedContextLength2 @ 0x140017148 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x14001722C (RtlInitializeExtendedContext2.c)
 *     RtlDispatchException @ 0x1400177D0 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x14001A980 (RtlLookupFunctionEntry.c)
 *     RtlVirtualUnwind @ 0x14013A7A0 (RtlVirtualUnwind.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401C3850 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1401CC7D0 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
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
