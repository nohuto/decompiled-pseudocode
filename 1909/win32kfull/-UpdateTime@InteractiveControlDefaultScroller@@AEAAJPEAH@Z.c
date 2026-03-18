/*
 * XREFs of ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C0255BC0
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255108 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0079528 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateTime(LARGE_INTEGER *this, int *a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v5; // rbx
  unsigned __int64 QuadPart; // rsi
  BOOL v7; // edx
  __int64 result; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = this[1];
  QuadPart = this->QuadPart;
  this[1] = PerformanceCounter;
  v7 = 1000 * (PerformanceCounter.QuadPart - v5.QuadPart) / QuadPart > *((int *)InteractiveControlManager::Instance()
                                                                       + 49);
  result = 0LL;
  *a2 = v7;
  return result;
}
