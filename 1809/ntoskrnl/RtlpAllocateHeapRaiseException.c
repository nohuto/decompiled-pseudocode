/*
 * XREFs of RtlpAllocateHeapRaiseException @ 0x1402F0604
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14011EF94 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlRaiseException @ 0x1402ED740 (RtlRaiseException.c)
 */

void __fastcall RtlpAllocateHeapRaiseException(unsigned __int64 a1)
{
  struct _EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionInformation[0] = a1;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.ExceptionCode = -1073741801;
  ExceptionRecord.NumberParameters = 1;
  RtlRaiseException(&ExceptionRecord);
}
