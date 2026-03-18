/*
 * XREFs of ??0MousePerfSummary@@QEAA@XZ @ 0x1C0060220
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C005FCF0 (--0CMouseProcessor@@IEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 */

MousePerfSummary *__fastcall MousePerfSummary::MousePerfSummary(MousePerfSummary *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  memset((char *)this + 336, 0, 0x20uLL);
  *((_DWORD *)this + 92) = 0;
  *((LARGE_INTEGER *)this + 48) = KeQueryPerformanceCounter(0LL);
  *((LARGE_INTEGER *)this + 49) = KeQueryPerformanceCounter(0LL);
  return this;
}
