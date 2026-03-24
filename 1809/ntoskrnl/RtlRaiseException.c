/*
 * XREFs of RtlRaiseException @ 0x1402ED840
 * Callers:
 *     RaiseException @ 0x140199E80 (RaiseException.c)
 *     HvlpGetRegister128 @ 0x140278A7C (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x140278B08 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x140278BF4 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x1402F0704 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14009DC20 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x1400A0F40 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x1400A1E3C (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1400A1F20 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x1401376A0 (RtlVirtualUnwind.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1401BAD70 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1401C5630 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1401C5DC0 (_alloca_probe.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r8
  void *v4; // rsp
  void *v5; // rsp
  NTSTATUS v6; // esi
  struct _RUNTIME_FUNCTION *v7; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp+8h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp+10h] BYREF
  void *v11; // [rsp+138h] [rbp+F8h]

  RtlGetExtendedContextLength2(1048587LL, &ImageBase);
  v2 = (unsigned int)ImageBase + 15LL;
  if ( v2 <= (unsigned int)ImageBase )
    v2 = 0xFFFFFFFFFFFFFF0LL;
  v3 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = alloca(v3);
  v5 = alloca(v3);
  v6 = RtlInitializeExtendedContext2((__int64)&ImageBase, 0x10000Bu, &ImageBase, 0LL);
  RtlpCaptureContext2();
  v7 = RtlLookupFunctionEntry((DWORD64)v11, &ImageBase, 0LL);
  if ( !v7 )
LABEL_6:
    RtlRaiseStatus(v6);
  RtlVirtualUnwind(0, ImageBase, (DWORD64)v11, v7, (struct _CONTEXT *)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = v11;
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ImageBase) )
  {
    v6 = ZwRaiseException(ExceptionRecord, (PCONTEXT)&ImageBase, 0);
    goto LABEL_6;
  }
}
