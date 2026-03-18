/*
 * XREFs of ?VidSchiSetHwNodeResettingStateAtISR@@YAEPEAX@Z @ 0x1C0036070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VidSchiSetHwNodeResettingStateAtISR(LARGE_INTEGER *a1)
{
  LONGLONG QuadPart; // rdx

  QuadPart = a1->QuadPart;
  *(_DWORD *)(QuadPart + 16) = 1;
  a1[2].LowPart = *(_DWORD *)(QuadPart + 1704);
  a1[1] = KeQueryPerformanceCounter(0LL);
  return 1;
}
