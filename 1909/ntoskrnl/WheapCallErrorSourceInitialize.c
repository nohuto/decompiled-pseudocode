/*
 * XREFs of WheapCallErrorSourceInitialize @ 0x14018B9C0
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x14033F47C (WheapInitializeDeferredErrorSources.c)
 *     WheaInitializeProcessor @ 0x1405AEEA8 (WheaInitializeProcessor.c)
 *     WheaAddErrorSource @ 0x1409190B0 (WheaAddErrorSource.c)
 *     WheaInitialize @ 0x140A03340 (WheaInitialize.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14018BA58 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceInitialize(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *ErrorSourceFunction)(_QWORD, _QWORD); // rax
  int v5; // r11d
  __int64 result; // rax

  ErrorSourceFunction = (__int64 (__fastcall *)(_QWORD, _QWORD))WheapGetErrorSourceFunction(a1, 1LL);
  if ( v5 == 16 )
  {
    if ( ErrorSourceFunction )
    {
      result = ErrorSourceFunction(*(_QWORD *)(a1 + 56), *(unsigned int *)(a1 + 124));
      goto LABEL_4;
    }
  }
  else if ( ErrorSourceFunction )
  {
    result = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))ErrorSourceFunction)(a2, a1 + 96, *(_QWORD *)(a1 + 56));
LABEL_4:
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
    return result;
  }
  return 3221225474LL;
}
