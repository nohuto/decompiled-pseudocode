/*
 * XREFs of WheapCallErrorSourceCorrect @ 0x14018B08C
 * Callers:
 *     WheapInitializeErrorSource @ 0x140759788 (WheapInitializeErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14018B0C8 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceCorrect(__int64 a1)
{
  __int64 (__fastcall *ErrorSourceFunction)(__int64, __int64); // rax
  __int64 result; // rax

  ErrorSourceFunction = (__int64 (__fastcall *)(__int64, __int64))WheapGetErrorSourceFunction(a1, 0LL);
  if ( !ErrorSourceFunction )
    return 3221225474LL;
  result = ErrorSourceFunction(a1 + 96, a1 + 68);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  return result;
}
