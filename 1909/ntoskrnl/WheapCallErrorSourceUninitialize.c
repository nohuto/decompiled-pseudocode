/*
 * XREFs of WheapCallErrorSourceUninitialize @ 0x140340B3C
 * Callers:
 *     WheaRemoveErrorSource @ 0x140919330 (WheaRemoveErrorSource.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14018BA58 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapCallErrorSourceUninitialize(__int64 a1)
{
  void (__fastcall *ErrorSourceFunction)(_QWORD); // rax
  unsigned int v3; // ebx

  ErrorSourceFunction = (void (__fastcall *)(_QWORD))WheapGetErrorSourceFunction(a1, 4, 1);
  v3 = 0;
  if ( ErrorSourceFunction )
    ErrorSourceFunction(*(_QWORD *)(a1 + 56));
  else
    return (unsigned int)-1073741822;
  return v3;
}
