/*
 * XREFs of WheapCallErrorSourceReady @ 0x140340AEC
 * Callers:
 *     WheaAddErrorSource @ 0x1409190B0 (WheaAddErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14018BA58 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceReady(__int64 a1)
{
  void (__fastcall *ErrorSourceFunction)(__int64, _QWORD); // rax
  unsigned int v3; // ebx

  ErrorSourceFunction = (void (__fastcall *)(__int64, _QWORD))WheapGetErrorSourceFunction(a1, 6, 0);
  v3 = 0;
  if ( ErrorSourceFunction )
  {
    ErrorSourceFunction(a1 + 96, *(_QWORD *)(a1 + 56));
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 92));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
